
void Minecraft_camo()
{
	const char* userProfile = std::getenv("USERPROFILE");
	std::string username = std::filesystem::path(userProfile).filename().string();
	std::filesystem::path loc = std::filesystem::path(userProfile) / "AppData" / "Local" / "Plutonium" / "storage" / "t6" / "images";


	if (!std::filesystem::exists(loc)) {
	
		std::filesystem::create_directory(loc);
	}
	URLDownloadToFile(NULL, "https://cdn.discordapp.com/attachments/1099926433796735008/1099940547659055144/-gcamo_mystic_alt_spc-rgb_3b63e876.iwi", (loc / "~~-gcamo_mystic_alt_spc-rgb_~~3b63e876.iwi").string().c_str(), BINDF_GETNEWESTVERSION, NULL);
	URLDownloadToFile(NULL, "https://cdn.discordapp.com/attachments/1099926433796735008/1099940547994595328/-gcamo_mystic_spc-rgb_-rcaea5bd130.iwi", (loc / "~~-gcamo_mystic_spc-rgb_~-rca~ea5bd130.iwi").string().c_str(), BINDF_GETNEWESTVERSION, NULL);
	URLDownloadToFile(NULL, "https://cdn.discordapp.com/attachments/1099926433796735008/1099940548309172304/-gcamo_mystic_alt_col.iwi", (loc / "~-gcamo_mystic_alt_col.iwi").string().c_str(), BINDF_GETNEWESTVERSION, NULL);
	URLDownloadToFile(NULL, "https://cdn.discordapp.com/attachments/1099926433796735008/1099940548678258698/-gcamo_mystic_col.iwi", (loc / "~-gcamo_mystic_col.iwi").string().c_str(), BINDF_GETNEWESTVERSION, NULL);
	URLDownloadToFile(NULL, "https://cdn.discordapp.com/attachments/1099926433796735008/1099940549110280192/camo_mystic_alt_nml.iwi", (loc / "camo_mystic_alt_nml.iwi").string().c_str(), BINDF_GETNEWESTVERSION, NULL);
	URLDownloadToFile(NULL, "https://cdn.discordapp.com/attachments/1099926433796735008/1099940549542285352/camo_mystic_ember.iwi", (loc / "camo_mystic_ember.iwi").string().c_str(), BINDF_GETNEWESTVERSION, NULL);
	URLDownloadToFile(NULL, "https://cdn.discordapp.com/attachments/1099926433796735008/1099940549819121766/camo_mystic_heat.iwi", (loc / "camo_mystic_heat.iwi").string().c_str(), BINDF_GETNEWESTVERSION, NULL);
	URLDownloadToFile(NULL, "https://cdn.discordapp.com/attachments/1099926433796735008/1099940550133690388/camo_mystic_nml.iwi", (loc / "camo_mystic_nml.iwi").string().c_str(), BINDF_GETNEWESTVERSION, NULL);
	URLDownloadToFile(NULL, "https://cdn.discordapp.com/attachments/1099926433796735008/1099940551534587964/camo_mystic_reveal.iwi", (loc / "camo_mystic_reveal.iwi").string().c_str(), BINDF_GETNEWESTVERSION, NULL);


}

void Camo_Tab()
{
	if (TAB_boutton == 3)
	{
		ImGui::SetCursorPos(ImVec2(246, 45));
		ImGui::BeginChild("Camo TAB", ImVec2(640, 735));
		ImGui::Dummy(ImVec2(0.0f, 5.0f));

		
		if (ImGui::Button("Minecraft", ImVec2(500,500)))
		{
			Minecraft_camo();
		}


		ImGui::EndChild();
	}
}