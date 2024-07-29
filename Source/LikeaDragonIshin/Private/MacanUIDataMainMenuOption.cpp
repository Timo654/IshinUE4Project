#include "MacanUIDataMainMenuOption.h"

UMacanUIDataMainMenuOption::UMacanUIDataMainMenuOption() {
    this->bfData = 0;
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
    this->playingAnimBlink = 0;
    this->Keyconfig = NULL;
}

void UMacanUIDataMainMenuOption::SetFlag(EUIMMOptionBfType Type) {
}

void UMacanUIDataMainMenuOption::OpenWidget(EUIMMOptionBfType inType, bool isQuick) {
}

bool UMacanUIDataMainMenuOption::IsOnFlag(EUIResultOnOrOff& result, EUIMMOptionBfType Type) {
    return false;
}

bool UMacanUIDataMainMenuOption::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

int32 UMacanUIDataMainMenuOption::GetColorAdjustmentValue() {
    return 0;
}

EUIState UMacanUIDataMainMenuOption::FindUIState(EUIResultSuccessOrFailed& result, EUIMMOptionBfType inType) {
    return EUIState::NotSet;
}

void UMacanUIDataMainMenuOption::DelFlag(EUIMMOptionBfType Type) {
}

void UMacanUIDataMainMenuOption::CloseWidget(EUIMMOptionBfType inType, bool isQuick) {
}


