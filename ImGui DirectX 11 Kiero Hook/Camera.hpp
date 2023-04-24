void Camera_Tab()
{
	if (TAB_boutton == 1)
	{
		ImGui::SetCursorPos(ImVec2(246, 45));
		ImGui::BeginChild("Camera TAB", ImVec2(640, 735));
		ImGui::Dummy(ImVec2(0.0f, 5.0f));
		if (ImGui::CollapsingHeader("FieldOfView"))
		{
			ImGui::Checkbox("Custom FOV", &Var::BFieldOfView);
			if (Var::BFieldOfView)
			{
				Function::CG_FOV(Var::FFOVValue); //cg_fov
				ImGui::SliderFloat("FOV Value", &Var::FFOVValue, 65, 150);
			}

			ImGui::Checkbox("Custom FOV_MIN", &Var::BCustom_FOVMIN);
			if (Var::BCustom_FOVMIN)
			{
				Function::CG_FOVMIN(Var::FFOVMINValue); //cg_fovmin
				ImGui::SliderFloat("FOV_MIN Value", &Var::FFOVMINValue, 10, 150);
			}
		}




		ImGui::Checkbox("Third Person", &Var::BThirdPerson);



		ImGui::EndChild();
	}
}
