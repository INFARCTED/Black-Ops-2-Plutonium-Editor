
void Trickshot_Cam_Tab()
{
	if (TAB_boutton == 4)
	{
		ImGui::SetCursorPos(ImVec2(246, 45));
		ImGui::BeginChild("Camo TAB", ImVec2(640, 735));
		ImGui::Dummy(ImVec2(0.0f, 5.0f));

		if (ImGui::CollapsingHeader("Camera (Pitch)"))
		{
			ImGui::Checkbox("Pitch Down", &Var::BCam_PitchDown);
			if (Var::BCam_PitchDown)
			{
				ImGui::SliderFloat("Pitch Down (Verticale)", &Var::Cam_PitchDown, 0, 360);
			}
			ImGui::Checkbox("Pitch Up", &Var::BCam_PitchUp);
			if (Var::BCam_PitchUp)
			{
				ImGui::SliderFloat("Pitch Up (Verticale)", &Var::Cam_PitchUp, 0, 360);
				
			}

			if (ImGui::Button("Apply Cam pitch"))
			{
				Function::PitchCameraView(Var::Cam_PitchDown, Var::Cam_PitchUp);
			}
		}

		ImGui::EndChild();
	}
}