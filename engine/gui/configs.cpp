#include "configs.h"
#include "gui.h"

CConfig* ConfigSystem = new CConfig();

void CConfig::Setup()
{
    // ESP Variables
    SetupValue(g_pGui->m_Vars.m_ESP.players,true, "esp_player", "enable");
    SetupValue(g_pGui->m_Vars.m_ESP.name,true, "esp_player", "name");
    SetupValue(g_pGui->m_Vars.m_ESP.team, false, "esp_player", "team");
    SetupValue(g_pGui->m_Vars.m_ESP.localplayer, true, "esp_player", "localplayer");
    SetupValue(g_pGui->m_Vars.m_ESP.boxes, true, "esp_player", "boxes");
    SetupValue(g_pGui->m_Vars.m_ESP.health, false, "esp_player", "health");
    SetupValue(g_pGui->m_Vars.m_ESP.weapon, false, "esp_player", "weapon");
    SetupValue(g_pGui->m_Vars.m_ESP.distance, false, "esp_player", "distance");
    SetupValue(g_pGui->m_Vars.m_ESP.ammo, false, "esp_player", "ammo");
    SetupValue(g_pGui->m_Vars.m_ESP.flags, false, "esp_player", "flags");
    SetupValue(g_pGui->m_Vars.m_ESP.money, false, "esp_player", "money");
    SetupValue(g_pGui->m_Vars.m_ESP.glow, false, "esp_player", "glow");
    SetupValue(g_pGui->m_Vars.m_ESP.GlowColor.x, 1.f, "esp_player", "glow_r");
    SetupValue(g_pGui->m_Vars.m_ESP.GlowColor.y, 1.f, "esp_player", "glow_g");
    SetupValue(g_pGui->m_Vars.m_ESP.GlowColor.z, 1.f, "esp_player", "glow_b");
    SetupValue(g_pGui->m_Vars.m_ESP.GlowColor.w, 1.f, "esp_player", "glow_a");

    SetupValue(g_pGui->m_Vars.m_ESP.AmmoColor.x, 1.f, "esp_player", "ammobar_r");
    SetupValue(g_pGui->m_Vars.m_ESP.AmmoColor.y, 1.f, "esp_player", "ammobar_g");
    SetupValue(g_pGui->m_Vars.m_ESP.AmmoColor.z, 1.f, "esp_player", "ammobar_b");
    SetupValue(g_pGui->m_Vars.m_ESP.AmmoColor.w, 1.f, "esp_player", "ammobar_a");



    SetupValue(g_pGui->m_Vars.m_ESP.snaplines, false, "esp_player", "snaplines");
    SetupValue(g_pGui->m_Vars.m_ESP.skeletons, false, "esp_player", "skeletons");
    SetupValue(g_pGui->m_Vars.m_ESP.world, false, "esp_world", "world");
    SetupValue(g_pGui->m_Vars.m_ESP.droppedweapons, false, "esp_world", "droppedweapons");
    SetupValue(g_pGui->m_Vars.m_ESP.plantedc4, false, "esp_world", "plantedc4");
    SetupValue(g_pGui->m_Vars.m_ESP.projectiles, false, "esp_world", "projectiles");
    SetupValue(g_pGui->m_Vars.m_ESP.droppedbomb, false, "esp_world", "droppedbomb");
    SetupValue(g_pGui->m_Vars.m_ESP.defusekit, false, "esp_world", "defusekit");
    SetupValue(g_pGui->m_Vars.m_ESP.healthshot, false, "esp_world", "healthshot");
    SetupValue(g_pGui->m_Vars.m_ESP.chicken, false, "esp_world", "chicken");
    SetupValue(g_pGui->m_Vars.m_ESP.droppednades, false, "esp_world", "droppednades");
    SetupValue(g_pGui->m_Vars.m_ESP.hostages, false, "esp_world", "hostages");

    // ESP Colors
    SetupValue(g_pGui->m_Vars.m_ESP.NameColor.x, 1.f, "esp_color", "name_x");
    SetupValue(g_pGui->m_Vars.m_ESP.NameColor.y, 1.f, "esp_color", "name_y");
    SetupValue(g_pGui->m_Vars.m_ESP.NameColor.z, 1.f, "esp_color", "name_z");
    SetupValue(g_pGui->m_Vars.m_ESP.NameColor.w, 1.f, "esp_color", "name_w");

    // Repeat for BoxesColor, SnapLinesColor, WeaponColor, SkeletonsColor, GlowColor, AmmoColor

    SetupValue(g_pGui->m_Vars.m_ESP.SnaplinesRadius, 0, "esp_snaplines", "radius");
    SetupValue(g_pGui->m_Vars.m_ESP.SnaplinesPosition, 0, "esp_snaplines", "position");

    // Models Variables
    SetupValue(g_pGui->m_Vars.m_Models.enable, false, "models", "enable");
    SetupValue(g_pGui->m_Vars.m_Models.ignorez, false, "models", "ignorez");
    SetupValue(g_pGui->m_Vars.m_Models.SelectedTextureLocal, 0, "models", "texture_local");
    SetupValue(g_pGui->m_Vars.m_Models.SelectedTextureEnemy, 0, "models", "texture_enemy");
    SetupValue(g_pGui->m_Vars.m_Models.SelectedTextureTeam, 0, "models", "texture_team");
    SetupValue(g_pGui->m_Vars.m_Models.localPlayer, false, "models", "local_player");
    SetupValue(g_pGui->m_Vars.m_Models.team, false, "models", "team");
    SetupValue(g_pGui->m_Vars.m_Models.teaminvisible, false, "models", "team_invisible");
    SetupValue(g_pGui->m_Vars.m_Models.enemy, false, "models", "enemy");
    SetupValue(g_pGui->m_Vars.m_Models.enemyinvisible, false, "models", "enemy_invisible");

    // Models Colors
    SetupValue(g_pGui->m_Vars.m_Models.LocalPlayerColor.x, 1.f, "models_color", "local_player_x");
    SetupValue(g_pGui->m_Vars.m_Models.LocalPlayerColor.y, 1.f, "models_color", "local_player_y");
    SetupValue(g_pGui->m_Vars.m_Models.LocalPlayerColor.z, 1.f, "models_color", "local_player_z");
    SetupValue(g_pGui->m_Vars.m_Models.LocalPlayerColor.w, 1.f, "models_color", "local_player_w");

    // Repeat for EnemyColor, EnemyColorInvisible, TeamColor, TeamColorInvisible

    // World Modulation Variables
    SetupValue(g_pGui->m_Vars.m_WorldModulation.lighting, false, "world_modulation", "lighting");
    SetupValue(g_pGui->m_Vars.m_WorldModulation.worldcolor, false, "world_modulation", "worldcolor");
    SetupValue(g_pGui->m_Vars.m_WorldModulation.LightingColor.x, 1.f, "world_modulation_color", "lighting_x");
    SetupValue(g_pGui->m_Vars.m_WorldModulation.LightingColor.y, 1.f, "world_modulation_color", "lighting_y");
    SetupValue(g_pGui->m_Vars.m_WorldModulation.LightingColor.z, 1.f, "world_modulation_color", "lighting_z");
    SetupValue(g_pGui->m_Vars.m_WorldModulation.LightingColor.w, 1.f, "world_modulation_color", "lighting_w");
    SetupValue(g_pGui->m_Vars.m_WorldModulation.LightingIntensity, 1, "world_modulation", "lighting_intensity");
    SetupValue(g_pGui->m_Vars.m_WorldModulation.WorldColor.x, 1.f, "world_modulation_color", "world_x");
    SetupValue(g_pGui->m_Vars.m_WorldModulation.WorldColor.y, 1.f, "world_modulation_color", "world_y");
    SetupValue(g_pGui->m_Vars.m_WorldModulation.WorldColor.z, 1.f, "world_modulation_color", "world_z");
    SetupValue(g_pGui->m_Vars.m_WorldModulation.WorldColor.w, 1.f, "world_modulation_color", "world_w");
    SetupValue(g_pGui->m_Vars.m_WorldModulation.WorldIntensity, 1, "world_modulation", "world_intensity");

    // Other Visuals Variables
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.Watermark, false, "other_visuals", "watermark");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.InfoPanel, false, "other_visuals", "info_panel");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.CustomMenuTheme, false, "other_visuals", "custom_menu_theme");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.MenuThemeColor.x, 1.f, "other_visuals_color", "menu_theme_x");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.MenuThemeColor.y, 1.f, "other_visuals_color", "menu_theme_y");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.MenuThemeColor.z, 1.f, "other_visuals_color", "menu_theme_z");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.MenuThemeColor.w, 1.f, "other_visuals_color", "menu_theme_w");


    SetupValue(g_pGui->m_Vars.m_Aimbot.enable, false, "aimbot", "enable");
    SetupValue(g_pGui->m_Vars.m_Aimbot.fov, 0, "aimbot", "fov");
    SetupValue(g_pGui->m_Vars.m_Aimbot.ignoreteam, false, "aimbot", "ignoreteam");
    SetupValue(g_pGui->m_Vars.m_Aimbot.silentaim, false, "aimbot", "silentaim");
    SetupValue(g_pGui->m_Vars.m_Aimbot.autowall, false, "aimbot", "autowall");
    SetupValue(g_pGui->m_Vars.m_Aimbot.autostop, false, "aimbot", "autostop");
    SetupValue(g_pGui->m_Vars.m_Aimbot.removerecoil, false, "aimbot", "removerecoil");
    SetupValue(g_pGui->m_Vars.m_Aimbot.smoothness, false, "aimbot", "smoothness");
    SetupValue(g_pGui->m_Vars.m_Aimbot.smoothnessvalue, 0, "aimbot", "smoothnessvalue");
    SetupValue(g_pGui->m_Vars.m_Aimbot.selectedautostop, 0, "aimbot", "selectedautostop");
    SetupValue(g_pGui->m_Vars.m_Aimbot.selectedhitbox, 0, "aimbot", "selectedhitbox");
    SetupValue(g_pGui->m_Vars.m_Aimbot.multipoint, 0, "aimbot", "multipoint");
    SetupValue(g_pGui->m_Vars.m_Aimbot.selectedweaponslot, 0, "aimbot", "selectedweaponslot");

    // Hitchance and Minimal Damage
    SetupValue(g_pGui->m_Vars.m_Aimbot.hitchancePistol, 0, "aimbot", "hitchance_pistol");
    SetupValue(g_pGui->m_Vars.m_Aimbot.hitchanceRifle, 0, "aimbot", "hitchance_rifle");
    SetupValue(g_pGui->m_Vars.m_Aimbot.hitchanceSniper, 0, "aimbot", "hitchance_sniper");
    SetupValue(g_pGui->m_Vars.m_Aimbot.hitchanceSmg, 0, "aimbot", "hitchance_smg");
    SetupValue(g_pGui->m_Vars.m_Aimbot.hitchanceAuto, 0, "aimbot", "hitchance_auto");
    SetupValue(g_pGui->m_Vars.m_Aimbot.hitchanceHeavy, 0, "aimbot", "hitchance_heavy");
    SetupValue(g_pGui->m_Vars.m_Aimbot.hitchanceZeus, 0, "aimbot", "hitchance_zeus");

    SetupValue(g_pGui->m_Vars.m_Aimbot.minimaldamagePistol, 0, "aimbot", "minimaldamage_pistol");
    SetupValue(g_pGui->m_Vars.m_Aimbot.minimaldamageRifle, 0, "aimbot", "minimaldamage_rifle");
    SetupValue(g_pGui->m_Vars.m_Aimbot.minimaldamageSniper, 0, "aimbot", "minimaldamage_sniper");
    SetupValue(g_pGui->m_Vars.m_Aimbot.minimaldamageSmg, 0, "aimbot", "minimaldamage_smg");
    SetupValue(g_pGui->m_Vars.m_Aimbot.minimaldamageAuto, 0, "aimbot", "minimaldamage_auto");
    SetupValue(g_pGui->m_Vars.m_Aimbot.minimaldamageHeavy, 0, "aimbot", "minimaldamage_heavy");
    SetupValue(g_pGui->m_Vars.m_Aimbot.minimaldamageZeus, 0, "aimbot", "minimaldamage_zeus");

    // Other Visuals
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.ForceCrosshair, false, "other_visuals", "force_crosshair");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.SniperZoom, false, "other_visuals", "sniper_zoom");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.SniperZoomType, 0, "other_visuals", "sniper_zoom_type");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.SniperZoomColor.x, 0.f, "other_visuals_color", "sniper_zoom_x");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.SniperZoomColor.y, 0.f, "other_visuals_color", "sniper_zoom_y");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.SniperZoomColor.z, 0.f, "other_visuals_color", "sniper_zoom_z");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.SniperZoomColor.w, 1.f, "other_visuals_color", "sniper_zoom_w");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.SniperZoomColorGradient.x, 0.f, "other_visuals_color", "sniper_zoom_gradient_x");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.SniperZoomColorGradient.y, 0.f, "other_visuals_color", "sniper_zoom_gradient_y");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.SniperZoomColorGradient.z, 0.f, "other_visuals_color", "sniper_zoom_gradient_z");
    SetupValue(g_pGui->m_Vars.m_OtherVisuals.SniperZoomColorGradient.w, 1.f, "other_visuals_color", "sniper_zoom_gradient_w");

    // Removals 
    SetupValue(g_pGui->m_Vars.m_Removals.nosmoke, false, "removals", "nosmoke");
    SetupValue(g_pGui->m_Vars.m_Removals.nolegspreview, false, "removals", "nolegspreview");
    SetupValue(g_pGui->m_Vars.m_Removals.nozoom, false, "removals", "nozoom");
    SetupValue(g_pGui->m_Vars.m_Removals.noflash, false, "removals", "noflash");
	SetupValue(g_pGui->m_Vars.m_Removals.norecoil, false, "removals", "norecoil");

    // View
    SetupValue(g_pGui->m_Vars.m_View.fovchanger, false, "view", "fovchanger");
    SetupValue(g_pGui->m_Vars.m_View.fovwhilescoped, false, "view", "fovwhilescoped");
    SetupValue(g_pGui->m_Vars.m_View.fov,0, "view", "fov");
    SetupValue(g_pGui->m_Vars.m_View.viewmodelchanger, false, "view", "viewmodelchanger");
    SetupValue(g_pGui->m_Vars.m_View.viewmodelx, 0, "view", "viewmodelx");
    SetupValue(g_pGui->m_Vars.m_View.viewmodely, 0, "view", "viewmodely");
    SetupValue(g_pGui->m_Vars.m_View.viewmodelz, 0, "view", "viewmodelz");
    SetupValue(g_pGui->m_Vars.m_View.viewmodelfov, 0, "view", "viewmodelfov");

    // Movement
    SetupValue(g_pGui->m_Vars.m_Movement.bunnyhop, false, "movement", "bunnyhop");
    SetupValue(g_pGui->m_Vars.m_Movement.autostrafe, false, "movement", "autostrafe");
    SetupValue(g_pGui->m_Vars.m_Movement.duckinair, false, "movement", "duckinair");
    SetupValue(g_pGui->m_Vars.m_Movement.crouchjump, false, "movement", "crouchjump");
}

void CConfig::SetupValue(int& value, int def, std::string category, std::string name)
{
	value = def;
	ints.push_back(new ConfigValue< int >(category, name, &value));
}

void CConfig::SetupValue(float& value, float def, std::string category, std::string name)
{
	value = def;
	floats.push_back(new ConfigValue< float >(category, name, &value));
}

void CConfig::SetupValue(bool& value, bool def, std::string category, std::string name)
{
	value = def;
	bools.push_back(new ConfigValue< bool >(category, name, &value));
}

void CConfig::SetupValue(bool* value, bool def, int size, std::string category, std::string name) // for multiboxes
{
	for (int c = 0; c < size; c++)
	{
		value[c] = def;

		name += std::to_string(c);

		bools.push_back(new ConfigValue< bool >(category, name, &value[c]));
	}
}

void CConfig::Save(std::string ConfigName)
{
	static TCHAR path[MAX_PATH];
	std::string folder, file;

	if (SUCCEEDED(SHGetFolderPath(NULL, CSIDL_APPDATA, NULL, 0, path)))
	{
		folder = std::string(path) + "\\poseidon\\";
		file = std::string(path) + "\\poseidon\\" + ConfigName + ".ini";
	}

	CreateDirectory(folder.c_str(), NULL);

	for (auto value : ints)
		WritePrivateProfileString(value->category.c_str(), value->name.c_str(), std::to_string(*value->value).c_str(), file.c_str());

	for (auto value : floats)
		WritePrivateProfileString(value->category.c_str(), value->name.c_str(), std::to_string(*value->value).c_str(), file.c_str());

	for (auto value : bools)
		WritePrivateProfileString(value->category.c_str(), value->name.c_str(), *value->value ? "true" : "false", file.c_str());
}

void CConfig::Load(std::string ConfigName)
{
	static TCHAR path[MAX_PATH];
	std::string folder, file;

	if (SUCCEEDED(SHGetFolderPath(NULL, CSIDL_APPDATA, NULL, 0, path)))
	{
		folder = std::string(path) + "\\poseidon\\";
		file = std::string(path) + "\\poseidon\\" + ConfigName + ".ini";
	}

	CreateDirectory(folder.c_str(), NULL);

	char value_l[32] = { '\0' };

	for (auto value : ints)
	{
		GetPrivateProfileString(value->category.c_str(), value->name.c_str(), "", value_l, 32, file.c_str());
		*value->value = atoi(value_l);
	}

	for (auto value : floats)
	{
		GetPrivateProfileString(value->category.c_str(), value->name.c_str(), "", value_l, 32, file.c_str());
		*value->value = atof(value_l);
	}

	for (auto value : bools)
	{
		GetPrivateProfileString(value->category.c_str(), value->name.c_str(), "", value_l, 32, file.c_str());
		*value->value = !strcmp(value_l, "true");
	}
}

std::string GetConfigFolderPath()
{
	static TCHAR path[MAX_PATH];

	if (SUCCEEDED(SHGetFolderPath(NULL, CSIDL_APPDATA, NULL, 0, path)))
	{
		return std::string(path) + "\\poseidon\\";
	}

	return "";
}

void CConfig::SaveConfiguarion()
{
	ConfigSystem->Save(g_pGui->m_Vars.m_Configuration.ConfigNames[g_pGui->m_Vars.m_Configuration.SelectedIndexConfig]);
};

void CConfig::LoadConfiguration(std::vector<std::string> name, int slot)
{
	ConfigSystem->Load(name[slot]);
}
void CConfig::UpdateConfiguration()
{
	for (const auto& file : std::filesystem::directory_iterator(GetConfigFolderPath())) { // dziala by rolsontvplxdd  v2
		std::filesystem::path filePath = file;
		std::string extension = filePath.extension().string();

		if (extension == ".ini" && !std::filesystem::is_directory(file.path())) {
			auto path2 = filePath.stem().string();
			g_pGui->m_Vars.m_Configuration.ConfigNames.push_back(path2);
		}
	}
}
