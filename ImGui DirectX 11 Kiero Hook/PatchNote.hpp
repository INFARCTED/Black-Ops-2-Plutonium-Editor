
void PatchNote()
{
	if (TAB_boutton == 0)
	{
		ImGui::SetCursorPos(ImVec2(246, 45));
		ImGui::BeginChild("Patch note TAB", ImVec2(640, 735));
		ImGui::Dummy(ImVec2(0.0f, 5.0f));

		ImGui::Text("Version : 0.0.7 | DEV : EFK#3368");
		ImGui::Text("Outils utilisé pour faire la première version : IDA,CE,VS-IDE 2K22");
		ImGui::Text("Date du dernier Dump effectuer sur le jeu : 23/04/2023");
		ImGui::Text("Mon Github : https://github.com/INFARCTED");
		ImGui::Separator();
		ImGui::Text("CMD remplacer par Trickshot TAB");

		ImGui::EndChild();
	}
}
