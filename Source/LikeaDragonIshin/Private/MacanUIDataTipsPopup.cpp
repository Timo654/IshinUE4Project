#include "MacanUIDataTipsPopup.h"

UMacanUIDataTipsPopup::UMacanUIDataTipsPopup() {
    this->bfData = 0;
    this->currentIndex = 0;
    this->isBattle = false;
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
    this->m_pTipsDetailUI = NULL;
}

void UMacanUIDataTipsPopup::SetUIStateManual(EUITipsPopupBfType inType, EUIState inState) {
}

void UMacanUIDataTipsPopup::SetFlag(EUITipsPopupBfType Type) {
}

void UMacanUIDataTipsPopup::OpenWidget(EUITipsPopupBfType inType, bool isQuick) {
}

bool UMacanUIDataTipsPopup::IsOnFlag(EUIResultOnOrOff& result, EUITipsPopupBfType Type) {
    return false;
}

bool UMacanUIDataTipsPopup::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataTipsPopup::Initialize() {
}

EUIState UMacanUIDataTipsPopup::FindUIState(EUIResultSuccessOrFailed& result, EUITipsPopupBfType inType) {
    return EUIState::NotSet;
}

void UMacanUIDataTipsPopup::DelFlag(EUITipsPopupBfType Type) {
}

void UMacanUIDataTipsPopup::CloseWidget(EUITipsPopupBfType inType, bool isQuick) {
}


