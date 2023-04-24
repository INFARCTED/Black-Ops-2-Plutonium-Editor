void Engine_Tab()
{
	if (TAB_boutton == 2)
	{
		ImGui::SetCursorPos(ImVec2(246, 45));
		ImGui::BeginChild("Editor TAB", ImVec2(640, 735));
		ImGui::Dummy(ImVec2(0.0f, 5.0f));

		if (ImGui::Button("Dark Map (Simple)"))
		{
			Function::DarkMap(1);
		}
		ImGui::SameLine();
		if (ImGui::Button("Dark Map V2 (Yellow)"))
		{
			Function::DarkMap(2);
		}
		ImGui::SameLine();
		if (ImGui::Button("Dark Map V2 (Red)"))
		{
			Function::DarkMap(3);
		}
		ImGui::SameLine();
		if (ImGui::Button("Dark Map V2 (Green)"))
		{
			Function::DarkMap(4);
		}

		if (ImGui::Button("Dark Map V2 (Cyan)"))
		{
			Function::DarkMap(5);
		}
		ImGui::Separator();
		ImGui::Checkbox("Change VC_FBM", &Var::BCustom_vc_fbm);
		if (Var::BCustom_vc_fbm)
		{
			if (ImGui::CollapsingHeader("VC_FBM (a1, a2, a3, a4)"))
			{
				ImGui::SliderFloat("VC_FBM : A1", &Var::vc_fbm_a1, 0.00, 2);
				ImGui::SliderFloat("VC_FBM : A2", &Var::vc_fbm_a2, 0.00, 2);
				ImGui::SliderFloat("VC_FBM : A3", &Var::vc_fbm_a3, 0.00, 2);
				ImGui::SliderFloat("VC_FBM : A4", &Var::vc_fbm_a4, 0.00, 2);
				if (ImGui::Button("Apply VC_FBM"))
				{
					Function::vc_fbm(Var::vc_fbm_a1, Var::vc_fbm_a2, Var::vc_fbm_a3, Var::vc_fbm_a4);
				}
			}
		}
		ImGui::Checkbox("Change VC_FSM", &Var::BCustom_vc_fsm);
		if (Var::BCustom_vc_fsm)
		{
			if (ImGui::CollapsingHeader("VC_FSM (a1, a2, a3, a4)"))
			{
				ImGui::SliderFloat("VC_FSM : A1", &Var::vc_fsm_a1, 0.00, 2);
				ImGui::SliderFloat("VC_FSM : A2", &Var::vc_fsm_a2, 0.00, 2);
				ImGui::SliderFloat("VC_FSM : A3", &Var::vc_fsm_a3, 0.00, 2);
				ImGui::SliderFloat("VC_FSM : A4", &Var::vc_fsm_a4, 0.00, 2);
				if (ImGui::Button("Apply VC_FSM"))
				{
					Function::vc_fsm(Var::vc_fsm_a1, Var::vc_fsm_a2, Var::vc_fsm_a3, Var::vc_fsm_a4);
				}
			}
		}

		ImGui::Checkbox("Change VC_YH", &Var::BCustom_vc_yh);
		if (Var::BCustom_vc_yh)
		{
			if (ImGui::CollapsingHeader("VC_YH (a1, a2, a3, a4)"))
			{
				ImGui::SliderFloat("VC_YH : A1", &Var::vc_yh_a1, 0.00, 2);
				ImGui::SliderFloat("VC_YH : A2", &Var::vc_yh_a2, 0.00, 2);
				ImGui::SliderFloat("VC_YH : A3", &Var::vc_yh_a3, 0.00, 2);
				ImGui::SliderFloat("VC_YH : A4", &Var::vc_yh_a4, 0.00, 2);
				if (ImGui::Button("Apply VC_YH"))
				{
					Function::vc_yh(Var::vc_yh_a1, Var::vc_yh_a2, Var::vc_yh_a3, Var::vc_yh_a4);
				}
			}
		}

		ImGui::Checkbox("Change VC_YL", &Var::BCustom_vc_yl);
		if (Var::BCustom_vc_yl)
		{
			if (ImGui::CollapsingHeader("VC_YL (a1, a2, a3, a4)"))
			{
				ImGui::SliderFloat("VC_YL : A1", &Var::vc_yl_a1, 0.00, 2);
				ImGui::SliderFloat("VC_YL : A2", &Var::vc_yl_a2, 0.00, 2);
				ImGui::SliderFloat("VC_YL : A3", &Var::vc_yl_a3, 0.00, 2);
				ImGui::SliderFloat("VC_YL : A4", &Var::vc_yl_a4, 0.00, 2);
				if (ImGui::Button("Apply VC_YL"))
				{
					Function::vc_yl(Var::vc_yl_a1, Var::vc_yl_a2, Var::vc_yl_a3, Var::vc_yl_a4);
				}
			}
		}

		ImGui::Checkbox("Change VC_RGBH", &Var::BCustom_vc_rgbh);
		if (Var::BCustom_vc_rgbh)
		{
			if (ImGui::CollapsingHeader("VC_RGBH (a1, a2, a3, a4)"))
			{
				ImGui::SliderFloat("VC_RGBH : A1", &Var::vc_rgbh_a1, 0.00, 2);
				ImGui::SliderFloat("VC_RGBH : A2", &Var::vc_rgbh_a2, 0.00, 2);
				ImGui::SliderFloat("VC_RGBH : A3", &Var::vc_rgbh_a3, 0.00, 2);
				ImGui::SliderFloat("VC_RGBH : A4", &Var::vc_rgbh_a4, 0.00, 2);
				if (ImGui::Button("Apply VC_RGBH"))
				{
					Function::vc_rgbh(Var::vc_rgbh_a1, Var::vc_rgbh_a2, Var::vc_rgbh_a3, Var::vc_rgbh_a4);
				}
			}
		}

		ImGui::Checkbox("Change VC_RGBL", &Var::BCustom_vc_rgbl);
		if (Var::BCustom_vc_rgbl)
		{
			if (ImGui::CollapsingHeader("VC_RGBL (a1, a2, a3, a4)"))
			{
				ImGui::SliderFloat("VC_RGBL : A1", &Var::vc_rgbl_a1, 0.00, 2);
				ImGui::SliderFloat("VC_RGBL : A2", &Var::vc_rgbl_a2, 0.00, 2);
				ImGui::SliderFloat("VC_RGBL : A3", &Var::vc_rgbl_a3, 0.00, 2);
				ImGui::SliderFloat("VC_RGBL : A4", &Var::vc_rgbl_a4, 0.00, 2);
				if (ImGui::Button("Apply VC_RGBL"))
				{
					Function::vc_rgbh(Var::vc_rgbl_a1, Var::vc_rgbl_a2, Var::vc_rgbl_a3, Var::vc_rgbl_a4);
				}
			}
		}
		ImGui::Separator();
		ImGui::Checkbox("Change Smoke color", &Var::BCustom_smoke);
		if (Var::BCustom_smoke)
		{
			if (ImGui::CollapsingHeader("Smoke col (a1, a2, a3, a4)"))
			{
				ImGui::SliderFloat("Smoke col : A1", &Var::smoke_a1, 0.00, 255);
				ImGui::SliderFloat("Smoke col : A2", &Var::smoke_a2, 0.00, 255);
				ImGui::SliderFloat("Smoke col : A3", &Var::smoke_a3, 0.00, 255);
				ImGui::SliderFloat("Smoke col : A4", &Var::smoke_a4, 0.00, 255);
				if (ImGui::Button("Apply Smoke"))
				{
					Function::SmokeSettings(Var::smoke_a1, Var::smoke_a2, Var::smoke_a3, Var::smoke_a4);
				}
			}
		}
	
		ImGui::Checkbox("Change HUD color", &Var::BCustom_HUD);
		if (Var::BCustom_HUD)
		{
			if (ImGui::CollapsingHeader("HUD col (a1, a2, a3, a4)"))
			{
				ImGui::SliderFloat("HUD col : A1", &Var::HUD_a1, 0.00, 255);
				ImGui::SliderFloat("HUD col : A2", &Var::HUD_a2, 0.00, 255);
				ImGui::SliderFloat("HUD col : A3", &Var::HUD_a3, 0.00, 255);
				ImGui::SliderFloat("HUD col : A4", &Var::HUD_a4, 0.00, 255);
				if (ImGui::Button("Apply HUD"))
				{
					Function::ColHUDSettings(Var::HUD_a1, Var::HUD_a2, Var::HUD_a3, Var::HUD_a4);
				}
			}
		}
		ImGui::Separator();
		ImGui::Checkbox("Chams color", &Var::BCustom_HUD);
		if (Var::BCustom_HUD)
		{
			if (ImGui::CollapsingHeader("Chams col (a1, a2, a3)"))
			{
				ImGui::SliderFloat("Chams col : A1", &Var::chams_a1, 0.00, 1);
				ImGui::SliderFloat("Chams col : A2", &Var::chams_a2, 0.00, 1);
				ImGui::SliderFloat("Chams col : A3", &Var::chams_a3, 0.00, 1);
			
				if (ImGui::Button("Apply Chams"))
				{
					Function::chams(Var::chams_a1, Var::chams_a2, Var::chams_a3);
				}
			}
		}

		ImGui::EndChild();
	}
}
