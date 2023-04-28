void Engine_Tab()
{
	if (TAB_boutton == 2)
	{
		ImGui::SetCursorPos(ImVec2(246, 45));
		ImGui::BeginChild("Editor TAB", ImVec2(640, 735));
		ImGui::Dummy(ImVec2(0.0f, 5.0f));
		ImGui::Text("Configuration (Save/load)");

		ImGui::Combo("##settsas", &settings::save_load_num, settsName, IM_ARRAYSIZE(settsName));
		if (ImGui::Button("Save", ImVec2(100, 20)))
		{
			if (settings::save_load_num == 0)
				SaveConfiguration("C:\\Config.ini");
			if (settings::save_load_num == 1)
				SaveConfiguration("C:\\Config1.ini");
			if (settings::save_load_num == 2)
				SaveConfiguration("C:\\Config2.ini");
			if (settings::save_load_num == 3)
				SaveConfiguration("C:\\Config3.ini");
			if (settings::save_load_num == 4)
				SaveConfiguration("C:\\Config4.ini");
			if (settings::save_load_num == 5)
				SaveConfiguration("C:\\Config5.ini");
			if (settings::save_load_num == 6)
				SaveConfiguration("C:\\Config6.ini");
			if (settings::save_load_num == 7)
				SaveConfiguration("C:\\Config7.ini");
			if (settings::save_load_num == 8)
				SaveConfiguration("C:\\Config8.ini");
			if (settings::save_load_num == 9)
				SaveConfiguration("C:\\Config9.ini");
			if (settings::save_load_num == 10)
				SaveConfiguration("C:\\Config10.ini");
			if (settings::save_load_num == 11)
				SaveConfiguration("C:\\Config11.ini");
			if (settings::save_load_num == 12)
				SaveConfiguration("C:\\Config12.ini");
			if (settings::save_load_num == 13)
				SaveConfiguration("C:\\Config13.ini");
			if (settings::save_load_num == 14)
				SaveConfiguration("C:\\Config14.ini");
			if (settings::save_load_num == 15)
				SaveConfiguration("C:\\Config15.ini");
			if (settings::save_load_num == 16)
				SaveConfiguration("C:\\Config16.ini");
			if (settings::save_load_num == 17)
				SaveConfiguration("C:\\Config17.ini");
			if (settings::save_load_num == 18)
				SaveConfiguration("C:\\Config18.ini");
			if (settings::save_load_num == 19)
				SaveConfiguration("C:\\Config19.ini");
			if (settings::save_load_num == 20)
				SaveConfiguration("C:\\Config20.ini");
			if (settings::save_load_num == 21)
				SaveConfiguration("C:\\Config21.ini");
			if (settings::save_load_num == 22)
				SaveConfiguration("C:\\Config22.ini");
			if (settings::save_load_num == 23)
				SaveConfiguration("C:\\Config23.ini");
			if (settings::save_load_num == 24)
				SaveConfiguration("C:\\Config24.ini");
			if (settings::save_load_num == 25)
				SaveConfiguration("C:\\Config25.ini");
		}
		ImGui::SameLine();
		if (ImGui::Button("Load", ImVec2(100, 20)))
		{
			if (settings::save_load_num == 0)
				LoadConfiguration("C:\\Config.ini");
			if (settings::save_load_num == 1)
				LoadConfiguration("C:\\Config1.ini");
			if (settings::save_load_num == 2)
				LoadConfiguration("C:\\Config2.ini");
			if (settings::save_load_num == 3)
				LoadConfiguration("C:\\Config3.ini");
			if (settings::save_load_num == 4)
				LoadConfiguration("C:\\Config4.ini");
			if (settings::save_load_num == 5)
				LoadConfiguration("C:\\Config5.ini");
			if (settings::save_load_num == 6)
				LoadConfiguration("C:\\Config6.ini");
			if (settings::save_load_num == 7)
				LoadConfiguration("C:\\Config7.ini");
			if (settings::save_load_num == 8)
				LoadConfiguration("C:\\Config8.ini");
			if (settings::save_load_num == 9)
				LoadConfiguration("C:\\Config9.ini");
			if (settings::save_load_num == 10)
				LoadConfiguration("C:\\Config10.ini");
			if (settings::save_load_num == 11)
				LoadConfiguration("C:\\Config11.ini");
			if (settings::save_load_num == 12)
				LoadConfiguration("C:\\Config12.ini");
			if (settings::save_load_num == 13)
				LoadConfiguration("C:\\Config13.ini");
			if (settings::save_load_num == 14)
				LoadConfiguration("C:\\Config14.ini");
			if (settings::save_load_num == 15)
				LoadConfiguration("C:\\Config15.ini");
			if (settings::save_load_num == 16)
				LoadConfiguration("C:\\Config16.ini");
			if (settings::save_load_num == 17)
				LoadConfiguration("C:\\Config17.ini");
			if (settings::save_load_num == 18)
				LoadConfiguration("C:\\Config18.ini");
			if (settings::save_load_num == 19)
				LoadConfiguration("C:\\Config19.ini");
			if (settings::save_load_num == 20)
				LoadConfiguration("C:\\Config20.ini");
			if (settings::save_load_num == 21)
				LoadConfiguration("C:\\Config21.ini");
			if (settings::save_load_num == 22)
				LoadConfiguration("C:\\Config22.ini");
			if (settings::save_load_num == 23)
				LoadConfiguration("C:\\Config23.ini");
			if (settings::save_load_num == 24)
				LoadConfiguration("C:\\Config24.ini");
			if (settings::save_load_num == 25)
				LoadConfiguration("C:\\Config25.ini");


		}

		ImGui::Separator(); ImGui::Text("Dark Edit");
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
		ImGui::Separator(); ImGui::Text("VC Edit");


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

		ImGui::Separator();

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

		ImGui::Separator(); ImGui::Text("Player Chams");


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


		ImGui::Separator(); ImGui::Text("Screen FX");

		ImGui::Checkbox("Water Sheeting FX", &Var::BEnable_WaterFX);
		if (Var::BEnable_WaterFX)
		{
			Function::WaterSheetingScreenFX(1);
		}
		else
		{
			Function::WaterSheetingScreenFX(0);
		}

		ImGui::Checkbox("Poison FX", &Var::BEnable_PoisonFX);
		if (Var::BEnable_PoisonFX)
		{
			Function::PoisonScreenFX(1);
		}
		else
		{
			Function::PoisonScreenFX(0);
		}

		ImGui::Separator(); ImGui::Text("Skybox");

		ImGui::Checkbox("Sky Rotation", &Var::BCustom_SkyRotation);
		if (Var::BCustom_SkyRotation)
		{
			ImGui::SliderFloat("Rotation a1 (float)", &Var::SkyRotation_a1, 0, 360);
			if (ImGui::Button("Apply Rotation"))
			{
				Function::SkyRotation(Var::SkyRotation_a1);
			}
		}

		ImGui::Checkbox("Sun Light", &Var::BCustom_Lightsun);
		if (Var::BCustom_Lightsun)
		{
			ImGui::SliderFloat("SunLight a1 (float)", &Var::SkyLight_a1, 0.1, 20);
			if (ImGui::Button("Apply SunLight"))
			{
				Function::SunLight(Var::SkyLight_a1);
			}
		}

		ImGui::EndChild();
	}
}
