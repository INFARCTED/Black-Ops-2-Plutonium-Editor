void Button_draw()
{
	if (ImGui::Button("Patch Note", { 230, 61 }))
	{
		TAB_boutton = 0;
	}



	if (ImGui::Button("Camera", { 230, 61 }))
	{
		TAB_boutton = 1;
	}


	if (ImGui::Button("Editor", { 230, 61 }))
	{
		TAB_boutton = 2;
	}


	if (ImGui::Button("Camouflage", { 230, 61 }))
	{
		TAB_boutton = 3;
	}


	if (ImGui::Button("Trickshot Cam (Custom Game)", { 230, 61 }))
	{
		TAB_boutton = 4;
	}

	ImGui::EndChild();
}
