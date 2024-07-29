#include "MacanUIDataPhotoMode.h"

UMacanUIDataPhotoMode::UMacanUIDataPhotoMode() {
    this->bfData = 0;
    this->arrayTabData.AddDefaulted(3);
    this->arrayStampDataList.AddDefaulted(100);
    this->arrayStampDataDeploy.AddDefaulted(4);
    this->arraySliderOrFilterData.AddDefaulted(4);
}

void UMacanUIDataPhotoMode::UpdateTabData(TArray<FUIPhotoModeTabData>& inArray) {
}

void UMacanUIDataPhotoMode::UpdateStampDataList(TArray<FUIPhotoModeStampDataList>& inArray) {
}

void UMacanUIDataPhotoMode::UpdateStampDataDeploy(TArray<FUIPhotoModeStampDataDeploy>& inArray) {
}

void UMacanUIDataPhotoMode::UpdateSliderOrFilterData(TArray<FUIPhotoModeSliderOrFilterData>& inArray) {
}

void UMacanUIDataPhotoMode::SetFlag(EUIPhotoModeBfType Type) {
}

void UMacanUIDataPhotoMode::OpenWidget(EUIPhotoModeBfType inType, bool isQuick) {
}

bool UMacanUIDataPhotoMode::IsOnFlag(EUIResultOnOrOff& result, EUIPhotoModeBfType Type) {
    return false;
}

bool UMacanUIDataPhotoMode::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

EUIState UMacanUIDataPhotoMode::GetUIState(EUIResultSuccessOrFailed& result, EUIPhotoModeBfType inType) {
    return EUIState::NotSet;
}

void UMacanUIDataPhotoMode::DelFlag(EUIPhotoModeBfType Type) {
}

void UMacanUIDataPhotoMode::CloseWidget(EUIPhotoModeBfType inType, bool isQuick) {
}


