#include "PostEffectEditorSetting.h"

UPostEffectEditorSetting::UPostEffectEditorSetting() {
    this->DisableNearClip = false;
    this->DisableColorCorrectionElement = false;
    this->EnableColorCorrectionAdjustTest = false;
    this->ColorCorrectionSaturateAdjust = 1.00f;
    this->ColorCorrectionContrastAdjust = 1.00f;
    this->ColorCorrectionGammaAdjust = 1.00f;
    this->ColorCorrectionGainAdjust = 1.00f;
    this->ColorCorrectionOffsetAdjust = 1.00f;
    this->DisableGradationElement = false;
    this->DisableBlurElement = false;
    this->VisibleSetFocusPos = false;
    this->EditFocusPos = false;
    this->DebugFocusCameraDirectionAdd = 0.00f;
    this->EnableDebugExposure = false;
    this->EnableDebugExposureManual = false;
    this->DebugExposure = 0.00f;
    this->EnableDebugTrackGlare = false;
    this->DebugTrackGlarePower = 1.40f;
    this->DebugTrackGlareIntensity = 18.00f;
    this->DispHumanEventInfo = false;
    this->DispEffectEventInfo = false;
}


