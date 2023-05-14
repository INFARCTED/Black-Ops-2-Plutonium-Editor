
namespace Offset {
	//Server
	uintptr_t sv_cheats = 0x2A20AA0;
	//Camera
	uintptr_t cg_fov = 0x2A413E0;
	uintptr_t cg_fovmin = 0x2A41440;
	uintptr_t cg_thirdperson = 0x2A45BE0;
	//vue
	uintptr_t pitch_down = 0x2A28720;
	uintptr_t pitch_up = 0x2A286C0;
	//Visual
	uintptr_t cg_usecolorcontrol = 0xD76DAC; //00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 91 39 08 00 A0 1F 05 00 00 00 00 00 A8 05 2F 1A
	//Overlay
	uintptr_t Is_InGame = 0xD76DB0;
	//Pre-Game
	uintptr_t Prestige = 0x02F90754;
	
}

namespace Function {


	void CG_FOVMIN(float value)
	{
		*(float*)Offset::cg_fovmin = value;
	}
	void CG_FOV(float value)
	{
		*(float*)Offset::cg_fov = value;
	}

	void CG_THIRDPERSON(int value)
	{
		*(int*)Offset::cg_thirdperson = value;
	}


	void SV_CHEATS(bool value)
	{
		*(int*)Offset::sv_cheats = value;
	}

	void CG_USECOLCONTROL(int value)
	{
		*(int*)Offset::cg_usecolorcontrol = value;
	}

	void unlock_mouse(int zeroUnlock)
	{
		*(int*)0x02B69958 = zeroUnlock;
	}

	void SmokeSettings(float a1, float a2, float a3, float a4)
	{
		*(float*)0xC5AA40 = a1;
		*(float*)(0xC5AA40 + 0x4) = a2;
		*(float*)(0xC5AA40 + 0x8) = a3;
		*(float*)(0xC5AA40 + 0xC) = a4;
	}

	void ColHUDSettings(float a1, float a2, float a3, float a4)
	{
		*(float*)0xD2BC80 = a1;
		*(float*)(0xD2BC80 + 0x4) = a2;
		*(float*)(0xD2BC80 + 0x8) = a3;
		*(float*)(0xD2BC80 + 0xC) = a4;
	}

	void vc_fbm(float a1, float a2, float a3, float a4)
	{
		*(float*)0x2A3CCA0 = a1;
		*(float*)(0x2A3CCA0 + 0x4) = a2;
		*(float*)(0x2A3CCA0 + 0x8) = a3;
		*(float*)(0x2A3CCA0 + 0xC) = a4;
	}
	void vc_fsm(float a1, float a2, float a3, float a4)
	{
		*(float*)0x2A3CC40 = a1;
		*(float*)(0x2A3CC40 + 0x4) = a2;
		*(float*)(0x2A3CC40 + 0x8) = a3;
		*(float*)(0x2A3CC40 + 0xC) = a4;
	}
	void vc_rgbh(float a1, float a2, float a3, float a4)
	{
		*(float*)0x2A3C4C0 = a1;
		*(float*)(0x2A3C4C0 + 0x4) = a2;
		*(float*)(0x2A3C4C0 + 0x8) = a3;
		*(float*)(0x2A3C4C0 + 0xC) = a4;
	}
	void vc_yl(float a1, float a2, float a3, float a4)
	{
		*(float*)0x2A3C5E0 = a1;
		*(float*)(0x2A3C5E0 + 0x4) = a2;
		*(float*)(0x2A3C5E0 + 0x8) = a3;
		*(float*)(0x2A3C5E0 + 0xC) = a4;
	}
	void vc_yh(float a1, float a2, float a3, float a4)
	{
		*(float*)0x2A3C580 = a1;
		*(float*)(0x2A3C580 + 0x4) = a2;
		*(float*)(0x2A3C580 + 0x8) = a3;
		*(float*)(0x2A3C580 + 0xC) = a4;
	}
	void vc_rgbl(float a1, float a2, float a3, float a4)
	{
		*(float*)0x2A3C520 = a1;
		*(float*)(0x2A3C520 + 0x4) = a2;
		*(float*)(0x2A3C520 + 0x8) = a3;
		*(float*)(0x2A3C520 + 0xC) = a4;
	}

	void SunLight(float light)
	{
		*(float*)0x2A39880 = light;
	}
	void DarkMap(int mode)
	{
		if (mode == 1) //Simple
		{
		
	
			*(float*)0x2A38C20 = -1000; //r_lodBiasRigid
			*(float*)0x2A38CE0 = -1000; //r_lodBiasSkinned
			*(float*)0x2A3F1C0 = 1; //r_skyTransition
			*(float*)0x2A3E800 = 3.9; //r_exposureValue
			*(float*)0x2A39880 = 1; //r_lightTweakSunLight
			*(float*)0x2A40360 = 0; //r_sky_intensity_factor0

			*(int*)0x2A3D240 = 0; //r_dof_enable
			*(int*)0x2A3AF60 = 2; //sm_sunquality
			*(int*)0x2A3C1C0 = 0; //r_filmUseTweaks (je sais pas pourquoi, quand je met 1 il fait un black screen)
			*(int*)0x2A3C640 = 1; //r_bloomTweaks
			*(int*)0x2A3E7A0 = 1; //r_exposureTweak
			

			vc_fbm(0, 0, 0, 0);
			vc_fsm(0, 0, 0, 0);
			vc_rgbh(0.1, 0, 0.3, 0);
			vc_yl(0, 0, 0.25, 0);
			vc_yh(0.02, 0, 0.1, 0);
			vc_rgbl(0.02, 0, 0.1, 0);


		}
		if (mode == 2) //Yellow
		{

			*(float*)0x2A38C20 = -1000; //r_lodBiasRigid
			*(float*)0x2A38CE0 = -1000; //r_lodBiasSkinned
			*(float*)0x2A3F1C0 = 1; //r_skyTransition
			*(float*)0x2A3E800 = 3.9; //r_exposureValue
			*(float*)0x2A39880 = 1; //r_lightTweakSunLight
			*(float*)0x2A40360 = 0; //r_sky_intensity_factor0

			*(int*)0x2A3D240 = 0; //r_dof_enable
			*(int*)0x2A3AF60 = 2; //sm_sunquality
			*(int*)0x2A3C1C0 = 0; //r_filmUseTweaks (je sais pas pourquoi, quand je met 1 il fait un black screen)
			*(int*)0x2A3C640 = 1; //r_bloomTweaks
			*(int*)0x2A3E7A0 = 1; //r_exposureTweak


			vc_fbm(0, 0, 0, 0);
			vc_fsm(0, 0, 0, 0);
			vc_rgbh(0.3, 0.3, 0, 0);
			vc_yl(0, 0, 0, 0);
			vc_yh(0, 0, 0, 0);
			vc_rgbl(0.3, 0.3, 0, 0);


		}
		if (mode == 3) //Red
		{

			*(float*)0x2A38C20 = -1000; //r_lodBiasRigid
			*(float*)0x2A38CE0 = -1000; //r_lodBiasSkinned
			*(float*)0x2A3F1C0 = 1; //r_skyTransition
			*(float*)0x2A3E800 = 3.9; //r_exposureValue
			*(float*)0x2A39880 = 1; //r_lightTweakSunLight
			*(float*)0x2A40360 = 0; //r_sky_intensity_factor0

			*(int*)0x2A3D240 = 0; //r_dof_enable
			*(int*)0x2A3AF60 = 2; //sm_sunquality
			*(int*)0x2A3C1C0 = 0; //r_filmUseTweaks (je sais pas pourquoi, quand je met 1 il fait un black screen)
			*(int*)0x2A3C640 = 1; //r_bloomTweaks
			*(int*)0x2A3E7A0 = 1; //r_exposureTweak


			vc_fbm(0, 0, 0, 0);
			vc_fsm(0, 0, 0, 0);
			vc_rgbh(0.3, 0, 0, 0);
			vc_yl(0, 0, 0, 0);
			vc_yh(0, 0, 0, 0);
			vc_rgbl(0.3, 0, 0, 0);


		}
		if (mode == 4) //Green
		{

			*(float*)0x2A38C20 = -1000; //r_lodBiasRigid
			*(float*)0x2A38CE0 = -1000; //r_lodBiasSkinned
			*(float*)0x2A3F1C0 = 1; //r_skyTransition
			*(float*)0x2A3E800 = 3.9; //r_exposureValue
			*(float*)0x2A39880 = 1; //r_lightTweakSunLight
			*(float*)0x2A40360 = 0; //r_sky_intensity_factor0

			*(int*)0x2A3D240 = 0; //r_dof_enable
			*(int*)0x2A3AF60 = 2; //sm_sunquality
			*(int*)0x2A3C1C0 = 0; //r_filmUseTweaks (je sais pas pourquoi, quand je met 1 il fait un black screen)
			*(int*)0x2A3C640 = 1; //r_bloomTweaks
			*(int*)0x2A3E7A0 = 1; //r_exposureTweak


			vc_fbm(0, 0, 0, 0);
			vc_fsm(0, 0, 0, 0);
			vc_rgbh(0, 0.3, 0, 0);
			vc_yl(0, 0, 0, 0);
			vc_yh(0, 0, 0, 0);
			vc_rgbl(0, 0.3, 0, 0);


		}
		if (mode == 5) //Cyan
		{

			*(float*)0x2A38C20 = -1000; //r_lodBiasRigid
			*(float*)0x2A38CE0 = -1000; //r_lodBiasSkinned
			*(float*)0x2A3F1C0 = 1; //r_skyTransition
			*(float*)0x2A3E800 = 3.9; //r_exposureValue
			*(float*)0x2A39880 = 1; //r_lightTweakSunLight
			*(float*)0x2A40360 = 0; //r_sky_intensity_factor0

			*(int*)0x2A3D240 = 0; //r_dof_enable
			*(int*)0x2A3AF60 = 2; //sm_sunquality
			*(int*)0x2A3C1C0 = 0; //r_filmUseTweaks (je sais pas pourquoi, quand je met 1 il fait un black screen)
			*(int*)0x2A3C640 = 1; //r_bloomTweaks
			*(int*)0x2A3E7A0 = 1; //r_exposureTweak


			vc_fbm(0, 0, 0, 0);
			vc_fsm(0, 0, 0, 0);
			vc_rgbh(0, 0.3, 0.3, 0);
			vc_yl(0, 0, 0, 0);
			vc_yh(0, 0, 0, 0);
			vc_rgbl(0, 0.3, 0.3, 0);


		}
	}

	void chams(float a1, float a2, float a3)
	{
		*(float*)0x2A3EBC0 = a1;
		*(float*)(0x2A3EBC0 + 0x4) = a2;
		*(float*)(0x2A3EBC0 + 0x8) = a3;
	}

	void WaterSheetingScreenFX(bool value)
	{
		*(int*)0x2A3D8A0 = value;
	}

	void PoisonScreenFX(bool value)
	{
		*(int*)0x2A3E020 = value;
	}

	void SkyRotation(float rotation)
	{
		*(float*)0x2A3F220 = rotation;
	}


	void PitchCameraView(float down, float up)
	{
		*(float*)Offset::pitch_down = down;
		*(float*)Offset::pitch_up = up;
	}


//	const static auto ExecuteServerCMD = reinterpret_cast<std::uintptr_t(__fastcall*)(const char*)>(0x630650); ///5B3070
	
	//const static auto Cbuf_AddText = reinterpret_cast<std::uintptr_t(__fastcall*)(int, const char*)>(0xD6FE00); //C25A04 //(je l'enlève de la source !)


}


namespace FunctionPreGame {
	void ChangePrestige(int Prestige)
	{
		*(int*)Offset::Prestige = Prestige;
	}


}


