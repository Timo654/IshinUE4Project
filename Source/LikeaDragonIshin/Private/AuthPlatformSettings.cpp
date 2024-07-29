#include "AuthPlatformSettings.h"

FAuthPlatformSettings::FAuthPlatformSettings() {
    this->bLightMode_PS4 = false;
    this->bLightMode_PS5 = false;
    this->bSSSHalfRes = false;
    this->DOFRecombineQuality = 0;
    this->AmbientOcclusionLevels_PS4 = 0;
    this->MipmapLodBias = 0.00f;
    this->bDLCKiryuSaya = false;
    this->AfterDOFRes = 0;
    this->bLightMapForceMip = false;
}

