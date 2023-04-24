
static BOOL WritePrivateProfileInt(LPCSTR lpAppName, LPCSTR lpKeyName, int nInteger, LPCSTR lpFileName) {
    char lpString[1024];
    sprintf(lpString, "%d", nInteger);
    return WritePrivateProfileStringA(lpAppName, lpKeyName, lpString, lpFileName);
}
static BOOL WritePrivateProfileFloat(LPCSTR lpAppName, LPCSTR lpKeyName, float nInteger, LPCSTR lpFileName) {
    char lpString[1024];
    sprintf(lpString, "%f", nInteger);
    return WritePrivateProfileStringA(lpAppName, lpKeyName, lpString, lpFileName);
}
static float GetPrivateProfileFloat(LPCSTR lpAppName, LPCSTR lpKeyName, FLOAT flDefault, LPCSTR lpFileName)
{
    char szData[32];

    GetPrivateProfileStringA(lpAppName, lpKeyName, std::to_string(flDefault).c_str(), szData, 32, lpFileName);

    return (float)atof(szData);
}

static void SaveConfiguration(LPCSTR destination)
{
    WritePrivateProfileInt("Player", "Chams", Var::BCustom_chams, destination);
    WritePrivateProfileFloat("Player", "Chams a1", Var::chams_a1, destination);
    WritePrivateProfileFloat("Player", "Chams a2", Var::chams_a2, destination);
    WritePrivateProfileFloat("Player", "Chams a3", Var::chams_a3, destination);

    WritePrivateProfileInt("View", "FOVMIN", Var::BCustom_FOVMIN, destination);
    WritePrivateProfileInt("View", "FOV", Var::BFieldOfView, destination);
    WritePrivateProfileFloat("View", "FOVMIN VALUE", Var::FFOVMINValue, destination);
    WritePrivateProfileFloat("View", "FOV VALUE", Var::FFOVValue, destination);

    WritePrivateProfileInt("VC_Fonction", "VC_FBM", Var::BCustom_vc_fbm, destination);
    WritePrivateProfileInt("VC_Fonction", "VC_FSM", Var::BCustom_vc_fsm, destination);
    WritePrivateProfileInt("VC_Fonction", "VC_RGBH", Var::BCustom_vc_rgbh, destination);
    WritePrivateProfileInt("VC_Fonction", "VC_RGBL", Var::BCustom_vc_rgbl, destination);
    WritePrivateProfileInt("VC_Fonction", "VC_YH", Var::BCustom_vc_yh, destination);
    WritePrivateProfileInt("VC_Fonction", "VC_YL", Var::BCustom_vc_yl, destination);
    WritePrivateProfileFloat("VC_Fonction", "FBM_A1", Var::vc_fbm_a1, destination);
    WritePrivateProfileFloat("VC_Fonction", "FBM_A2", Var::vc_fbm_a2, destination);
    WritePrivateProfileFloat("VC_Fonction", "FBM_A3", Var::vc_fbm_a3, destination);
    WritePrivateProfileFloat("VC_Fonction", "FBM_A4", Var::vc_fbm_a4, destination);
    WritePrivateProfileFloat("VC_Fonction", "FSM_A1", Var::vc_fsm_a1, destination);
    WritePrivateProfileFloat("VC_Fonction", "FSM_A2", Var::vc_fsm_a2, destination);
    WritePrivateProfileFloat("VC_Fonction", "FSM_A3", Var::vc_fsm_a3, destination);
    WritePrivateProfileFloat("VC_Fonction", "FSM_A4", Var::vc_fsm_a4, destination);
    WritePrivateProfileFloat("VC_Fonction", "RGBH_A1", Var::vc_rgbh_a1, destination);
    WritePrivateProfileFloat("VC_Fonction", "RGBH_A2", Var::vc_rgbh_a2, destination);
    WritePrivateProfileFloat("VC_Fonction", "RGBH_A3", Var::vc_rgbh_a3, destination);
    WritePrivateProfileFloat("VC_Fonction", "RGBH_A4", Var::vc_rgbh_a4, destination);
    WritePrivateProfileFloat("VC_Fonction", "RGBL_A1", Var::vc_rgbl_a1, destination);
    WritePrivateProfileFloat("VC_Fonction", "RGBL_A2", Var::vc_rgbl_a2, destination);
    WritePrivateProfileFloat("VC_Fonction", "RGBL_A3", Var::vc_rgbl_a3, destination);
    WritePrivateProfileFloat("VC_Fonction", "RGBL_A4", Var::vc_rgbl_a4, destination);
    WritePrivateProfileFloat("VC_Fonction", "YH_A1", Var::vc_yh_a1, destination);
    WritePrivateProfileFloat("VC_Fonction", "YH_A2", Var::vc_yh_a2, destination);
    WritePrivateProfileFloat("VC_Fonction", "YH_A3", Var::vc_yh_a3, destination);
    WritePrivateProfileFloat("VC_Fonction", "YH_A4", Var::vc_yh_a4, destination);
    WritePrivateProfileFloat("VC_Fonction", "YL_A1", Var::vc_yl_a1, destination);
    WritePrivateProfileFloat("VC_Fonction", "YL_A2", Var::vc_yl_a2, destination);
    WritePrivateProfileFloat("VC_Fonction", "YL_A3", Var::vc_yl_a3, destination);
    WritePrivateProfileFloat("VC_Fonction", "YL_A4", Var::vc_yl_a4, destination);

    WritePrivateProfileInt("Sky_Fonction", "SunLight_bool", Var::BCustom_Lightsun, destination);
    WritePrivateProfileFloat("Sky_Fonction", "SunLight", Var::SkyLight_a1, destination);

}


static void LoadConfiguration(LPCSTR destination)
{
    Var::BCustom_chams = GetPrivateProfileInt("Player", "Chams", Var::BCustom_chams, destination);
    Var::chams_a1 = GetPrivateProfileFloat("Player", "Chams a1", Var::chams_a1, destination);
    Var::chams_a2 = GetPrivateProfileFloat("Player", "Chams a2", Var::chams_a2, destination);
    Var::chams_a3 = GetPrivateProfileFloat("Player", "Chams a3", Var::chams_a3, destination);

    Var::BCustom_FOVMIN  = GetPrivateProfileInt("View", "FOVMIN", Var::BCustom_FOVMIN, destination);
    Var::BFieldOfView = GetPrivateProfileInt("View", "FOV", Var::BFieldOfView, destination);
    Var::FFOVMINValue = GetPrivateProfileFloat("View", "FOVMIN VALUE", Var::FFOVMINValue, destination);
    Var::FFOVValue = GetPrivateProfileFloat("View", "FOV VALUE", Var::FFOVValue, destination);

    Var::BCustom_vc_fbm = GetPrivateProfileInt("VC_Fonction", "VC_FBM", Var::BCustom_vc_fbm, destination);
    Var::BCustom_vc_fsm = GetPrivateProfileInt("VC_Fonction", "VC_FSM", Var::BCustom_vc_fsm, destination);
    Var::BCustom_vc_rgbh = GetPrivateProfileInt("VC_Fonction", "VC_RGBH", Var::BCustom_vc_rgbh, destination);
    Var::BCustom_vc_rgbl = GetPrivateProfileInt("VC_Fonction", "VC_RGBL", Var::BCustom_vc_rgbl, destination);
    Var::BCustom_vc_yh = GetPrivateProfileInt("VC_Fonction", "VC_YH", Var::BCustom_vc_yh, destination);
    Var::BCustom_vc_yl = GetPrivateProfileInt("VC_Fonction", "VC_YL", Var::BCustom_vc_yl, destination);
    Var::vc_fbm_a1 = GetPrivateProfileFloat("VC_Fonction", "FBM_A1", Var::vc_fbm_a1, destination);
    Var::vc_fbm_a2 = GetPrivateProfileFloat("VC_Fonction", "FBM_A2", Var::vc_fbm_a2, destination);
    Var::vc_fbm_a3 = GetPrivateProfileFloat("VC_Fonction", "FBM_A3", Var::vc_fbm_a3, destination);
    Var::vc_fbm_a4 = GetPrivateProfileFloat("VC_Fonction", "FBM_A4", Var::vc_fbm_a4, destination);
    Var::vc_fsm_a1 = GetPrivateProfileFloat("VC_Fonction", "FSM_A1", Var::vc_fsm_a1, destination);
    Var::vc_fsm_a2 = GetPrivateProfileFloat("VC_Fonction", "FSM_A2", Var::vc_fsm_a2, destination);
    Var::vc_fsm_a3 = GetPrivateProfileFloat("VC_Fonction", "FSM_A3", Var::vc_fsm_a3, destination);
    Var::vc_fsm_a4 = GetPrivateProfileFloat("VC_Fonction", "FSM_A4", Var::vc_fsm_a4, destination);
    Var::vc_rgbh_a1 = GetPrivateProfileFloat("VC_Fonction", "RGBH_A1", Var::vc_rgbh_a1, destination);
    Var::vc_rgbh_a2 = GetPrivateProfileFloat("VC_Fonction", "RGBH_A2", Var::vc_rgbh_a2, destination);
    Var::vc_rgbh_a3 = GetPrivateProfileFloat("VC_Fonction", "RGBH_A3", Var::vc_rgbh_a3, destination);
    Var::vc_rgbh_a4 = GetPrivateProfileFloat("VC_Fonction", "RGBH_A4", Var::vc_rgbh_a4, destination);
    Var::vc_rgbl_a1 = GetPrivateProfileFloat("VC_Fonction", "RGBL_A1", Var::vc_rgbl_a1, destination);
    Var::vc_rgbl_a2 = GetPrivateProfileFloat("VC_Fonction", "RGBL_A2", Var::vc_rgbl_a2, destination);
    Var::vc_rgbl_a3 = GetPrivateProfileFloat("VC_Fonction", "RGBL_A3", Var::vc_rgbl_a3, destination);
    Var::vc_rgbl_a4 = GetPrivateProfileFloat("VC_Fonction", "RGBL_A4", Var::vc_rgbl_a4, destination);
    Var::vc_yh_a1 = GetPrivateProfileFloat("VC_Fonction", "YH_A1", Var::vc_yh_a1, destination);
    Var::vc_yh_a2 = GetPrivateProfileFloat("VC_Fonction", "YH_A2", Var::vc_yh_a2, destination);
    Var::vc_yh_a3 = GetPrivateProfileFloat("VC_Fonction", "YH_A3", Var::vc_yh_a3, destination);
    Var::vc_yh_a4 = GetPrivateProfileFloat("VC_Fonction", "YH_A4", Var::vc_yh_a4, destination);
    Var::vc_yl_a1 = GetPrivateProfileFloat("VC_Fonction", "YL_A1", Var::vc_yl_a1, destination);
    Var::vc_yl_a2 = GetPrivateProfileFloat("VC_Fonction", "YL_A2", Var::vc_yl_a2, destination);
    Var::vc_yl_a3 = GetPrivateProfileFloat("VC_Fonction", "YL_A3", Var::vc_yl_a3, destination);
    Var::vc_yl_a4 = GetPrivateProfileFloat("VC_Fonction", "YL_A4", Var::vc_yl_a4, destination);

    WritePrivateProfileInt("Sky_Fonction", "SunLight_bool", Var::BCustom_Lightsun, destination);
    Var::SkyLight_a1 =  GetPrivateProfileFloat("Sky_Fonction", "SunLight", Var::SkyLight_a1, destination);

    //Reactive les fonction après le chargement
    Function::vc_fbm(Var::vc_fbm_a1, Var::vc_fbm_a2, Var::vc_fbm_a3, Var::vc_fbm_a4);
    Function::vc_fsm(Var::vc_fsm_a1, Var::vc_fsm_a2, Var::vc_fsm_a3, Var::vc_fsm_a4);
    Function::vc_rgbh(Var::vc_rgbh_a1, Var::vc_rgbh_a2, Var::vc_rgbh_a3, Var::vc_rgbh_a4);
    Function::vc_rgbl(Var::vc_rgbl_a1, Var::vc_rgbl_a2, Var::vc_rgbl_a3, Var::vc_rgbl_a4);
    Function::vc_yh(Var::vc_yh_a1, Var::vc_yh_a2, Var::vc_yh_a3, Var::vc_yh_a4);
    Function::vc_yl(Var::vc_yl_a1, Var::vc_yl_a2, Var::vc_yl_a3, Var::vc_yl_a4);
    Function::SunLight(Var::SkyLight_a1);

}
