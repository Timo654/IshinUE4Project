#include "GameSettingsLocal.h"

UGameSettingsLocal::UGameSettingsLocal() {
    this->bUseVSync = true;
    this->ResolutionIndex = 21;
    this->QualityPreset = 5;
    this->SSRQuality = 3;
    this->GeometryQuality = 3;
    this->AmbientOcclusionLevels = 1;
    this->ScreenPercentage = 100.00f;
    this->FSRQuality = 1;
    this->FSRSharpness = 0.00f;
    this->XeSSQuality = 1;
    this->DLSSQuality = 1;
    this->DLSSSharpness = 0.00f;
    this->BenchMarkQualityPreset = 5;
}

void UGameSettingsLocal::OnRequestUIUpdate() {
}

UGameSettingsLocal* UGameSettingsLocal::Get() {
    return NULL;
}


