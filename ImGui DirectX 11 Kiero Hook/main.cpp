#include "includes.h"
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

Present oPresent;
HWND window = NULL;
WNDPROC oWndProc;
ID3D11Device* pDevice = NULL;
ID3D11DeviceContext* pContext = NULL;
ID3D11RenderTargetView* mainRenderTargetView;

void InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;

	io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\verdana.ttf", 14);
	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX11_Init(pDevice, pContext);

}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

bool init = false;
bool open = 1;
bool setup_GUI()
{
	return open;


}



HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{

	if (!init)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			window = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
			pBackBuffer->Release();
			oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			InitImGui();
			init = true;
		
		}

		else
			return oPresent(pSwapChain, SyncInterval, Flags);
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();
	Function::SV_CHEATS(1);
	Function::CG_USECOLCONTROL(1);
		if (GetAsyncKeyState(VK_F2) & 1)
		{
			open = !open;

		}

		if (Var::BThirdPerson)
		{
			Function::CG_THIRDPERSON(1);
		}
		else if (!Var::BThirdPerson)
		{
			Function::CG_THIRDPERSON(0);
		}

		if (setup_GUI())
		{
			Function::unlock_mouse(0); //0 = unlock mouse
			ImGui::StyleColorsDark();
			ImGui::SetNextWindowSize(ImVec2(900, 785));
			ImGui::Begin(("BO2 re-designer"), nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse);
			ImGui::SetCursorPos(ImVec2(0, 0));
			ImGui::BeginChild(("LeftTabs"), ImVec2(230, 785));
			ImGui::SetCursorPos(ImVec2(25, 55));
			ImGui::Text(("BLACK OPS 2 (EDITOR)"));
			ImGui::SetCursorPos(ImVec2(0, 110));
			ImGui::Text(("   Features"));
			

			Button_draw();

		
			PatchNote();
			Camera_Tab();
			Engine_Tab();
			Camo_Tab();
			Trickshot_Cam_Tab();

			ImGui::End();
		}
		if (!open)
		{
			Function::unlock_mouse(1); //1 = lock mouse
	}
		ImGui::Render();
	

	pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return oPresent(pSwapChain, SyncInterval, Flags);
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{

	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
	
			kiero::bind(8, (void**)& oPresent, hkPresent);
			init_hook = true;
		}
	} while (!init_hook);
	return TRUE;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{

	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
	
		DisableThreadLibraryCalls(hMod);
		CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		kiero::shutdown();
		break;
	}
	return TRUE;
}
