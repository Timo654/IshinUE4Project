#include "MacanUIDataMainMenuNote.h"

UMacanUIDataMainMenuNote::UMacanUIDataMainMenuNote() {
    this->bfData = 0;
    this->currentIndex = 0;
    this->scrollRate = 0.00f;
    this->maxScrollOffset = 0.00f;
    this->isNew = true;
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
    this->playingAnimBlink = 0;
}

void UMacanUIDataMainMenuNote::SetFlag(EUIMMNoteBfType Type) {
}

void UMacanUIDataMainMenuNote::OpenWidget(EUIMMNoteBfType inType, bool isQuick) {
}

bool UMacanUIDataMainMenuNote::IsOnFlag(EUIResultOnOrOff& result, EUIMMNoteBfType Type) {
    return false;
}

bool UMacanUIDataMainMenuNote::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataMainMenuNote::Initialize() {
}

EUIState UMacanUIDataMainMenuNote::FindUIState(EUIResultSuccessOrFailed& result, EUIMMNoteBfType inType) {
    return EUIState::NotSet;
}

void UMacanUIDataMainMenuNote::DelFlag(EUIMMNoteBfType Type) {
}

void UMacanUIDataMainMenuNote::CloseWidget(EUIMMNoteBfType inType, bool isQuick) {
}


