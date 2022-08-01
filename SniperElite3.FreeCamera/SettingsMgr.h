#pragma once

class eSettingsManager {
public:
	eSettingsManager();
	
	// free camera keys
	int iFreeCameraEnableKey;
	int iFreeCameraKeyForward;
	int iFreeCameraKeyBack;
	int iFreeCameraKeyLeft;
	int iFreeCameraKeyRight;
	int iFreeCameraKeyUp;
	int iFreeCameraKeyDown;
	int iFreeCameraKeySlowDown;
	int iFreeCameraKeySpeedUp;



	float fFreeCameraSpeed;
	float fFreeCameraModifierScale;

	void SaveSettings();
	void ResetKeys();
};

extern eSettingsManager* SettingsMgr;