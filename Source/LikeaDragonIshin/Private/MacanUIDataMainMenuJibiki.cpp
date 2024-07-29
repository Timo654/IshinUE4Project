#include "MacanUIDataMainMenuJibiki.h"

UMacanUIDataMainMenuJibiki::UMacanUIDataMainMenuJibiki() {
    this->bfData = 0;
    this->currentIndex = 0;
    this->scrollRate = 0.00f;
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
    this->playingAnimBlink = 0;
}

void UMacanUIDataMainMenuJibiki::SetFlag(EUIMMJibikiBfType Type) {
}

void UMacanUIDataMainMenuJibiki::SetCurrent(int32 newIndex) {
}

void UMacanUIDataMainMenuJibiki::OpenWidget(EUIMMJibikiBfType inType, bool isQuick) {
}

bool UMacanUIDataMainMenuJibiki::IsOnFlag(EUIResultOnOrOff& result, EUIMMJibikiBfType Type) {
    return false;
}

bool UMacanUIDataMainMenuJibiki::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataMainMenuJibiki::Initialize() {
}

EUIState UMacanUIDataMainMenuJibiki::FindUIState(EUIResultSuccessOrFailed& result, EUIMMJibikiBfType inType) {
    return EUIState::NotSet;
}

void UMacanUIDataMainMenuJibiki::DelFlag(EUIMMJibikiBfType Type) {
}

void UMacanUIDataMainMenuJibiki::CloseWidget(EUIMMJibikiBfType inType, bool isQuick) {
}


