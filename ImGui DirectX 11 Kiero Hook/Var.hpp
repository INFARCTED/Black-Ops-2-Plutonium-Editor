namespace Var {
	float FFOVValue = 65;
	float FFOVMINValue = 10;
	float vc_fbm_a1 = 0;float vc_fbm_a2 = 0;float vc_fbm_a3 = 0;float vc_fbm_a4 = 0;
	float vc_fsm_a1 = 0;float vc_fsm_a2 = 0;float vc_fsm_a3 = 0;float vc_fsm_a4 = 0;
	float vc_yh_a1 = 0;float vc_yh_a2 = 0;float vc_yh_a3 = 0;float vc_yh_a4 = 0;
	float vc_yl_a1 = 0;float vc_yl_a2 = 0;float vc_yl_a3 = 0;float vc_yl_a4 = 0;
	float vc_rgbl_a1 = 0; float vc_rgbl_a2 = 0; float vc_rgbl_a3 = 0; float vc_rgbl_a4 = 0;
	float vc_rgbh_a1 = 0; float vc_rgbh_a2 = 0; float vc_rgbh_a3 = 0; float vc_rgbh_a4 = 0;
	float smoke_a1 = 255; float smoke_a2 = 255; float smoke_a3 = 255; float smoke_a4 = 255;
	float HUD_a1 = 255; float HUD_a2 = 255; float HUD_a3 = 255; float HUD_a4 = 255;
	float chams_a1 = 1; float chams_a2 = 1; float chams_a3 = 1;
	float SkyRotation_a1 = 0;
	float SkyLight_a1 = 14;

	bool BFieldOfView;
	bool BThirdPerson;
	bool BCustom_vc_fbm;
	bool BCustom_vc_fsm;
	bool BCustom_vc_yh;
	bool BCustom_vc_yl;
	bool BCustom_vc_rgbl;
	bool BCustom_vc_rgbh;
	bool BCustom_smoke;
	bool BCustom_HUD;
	bool BCustom_chams;
	bool BCustom_FOVMIN;
	bool BEnable_WaterFX;
	bool BEnable_PoisonFX;
	bool BCustom_SkyRotation;
	bool BCustom_Lightsun;
}

namespace settings {

	static int save_load_num = 0;
}

static const char* settsName[] =
{
	"Config",
	  "Config1",
		"Config2",
		  "Config3",
			"Config4",
			  "Config5",
				"Config6",
				  "Config7",
					"Config8",
					  "Config9",
						"Config10",
						"Config11",
						"Config12",
						"Config13",
						"Config14",
						"Config15",
						"Config16",
						"Config17",
						"Config18",
						"Config19",
						"Config20",
						"Config21",
						"Config22",
						"Config23",
						"Config24",
						"Config25",
};


int TAB_boutton;




