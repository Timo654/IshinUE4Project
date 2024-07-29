#include "MacanUIDataMainMenuTips.h"

UMacanUIDataMainMenuTips::UMacanUIDataMainMenuTips() {
    this->bfData = 0;
    this->currentCategoryIndex = 0;
    this->currentTipsIndex = 0;
    this->isFocusTipsList = false;
    this->p_uiDataTipsDetail = NULL;
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
    this->playingAnimBlink = 0;
}

void UMacanUIDataMainMenuTips::SetFlag(EUIMMTipsBfType Type) {
}

void UMacanUIDataMainMenuTips::OpenWidget(EUIMMTipsBfType inType, bool isQuick) {
}

bool UMacanUIDataMainMenuTips::IsOnFlag(EUIResultOnOrOff& result, EUIMMTipsBfType Type) {
    return false;
}

bool UMacanUIDataMainMenuTips::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataMainMenuTips::Initialize() {
}

EUIState UMacanUIDataMainMenuTips::FindUIState(EUIResultSuccessOrFailed& result, EUIMMTipsBfType inType) {
    return EUIState::NotSet;
}

void UMacanUIDataMainMenuTips::DelFlag(EUIMMTipsBfType Type) {
}

void UMacanUIDataMainMenuTips::CloseWidget(EUIMMTipsBfType inType, bool isQuick) {
}


