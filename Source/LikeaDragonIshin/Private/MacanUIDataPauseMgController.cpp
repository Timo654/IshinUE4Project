#include "MacanUIDataPauseMgController.h"

UMacanUIDataPauseMgController::UMacanUIDataPauseMgController() {
    this->bfData = 0;
    this->currentIndex = 0;
    this->uiState = EUIState::NotSet;
    this->IsPlatformPC = false;
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
    this->playingPCAnimOpen = 0;
    this->playingPCAnimClose = 0;
}

void UMacanUIDataPauseMgController::SetFlag(EUIPauseMgControllerBfType Type) {
}

void UMacanUIDataPauseMgController::OpenWidget(EUIPauseMgControllerBfType inType, bool isQuick) {
}

void UMacanUIDataPauseMgController::OnChangeInputDevice() {
}

bool UMacanUIDataPauseMgController::IsOnFlag(EUIResultOnOrOff& result, EUIPauseMgControllerBfType Type) {
    return false;
}

bool UMacanUIDataPauseMgController::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataPauseMgController::Initialize() {
}

void UMacanUIDataPauseMgController::DelFlag(EUIPauseMgControllerBfType Type) {
}

void UMacanUIDataPauseMgController::CloseWidget(EUIPauseMgControllerBfType inType, bool isQuick) {
}


