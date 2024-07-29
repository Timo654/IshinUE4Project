#include "MacanUIDataMenuDecoBack.h"

UMacanUIDataMenuDecoBack::UMacanUIDataMenuDecoBack() {
    this->bfData = 0;
    this->mainUIState = EUIState::NotSet;
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
}

void UMacanUIDataMenuDecoBack::SetFlag(EMUIDMenuDecoBackBfType Type) {
}

void UMacanUIDataMenuDecoBack::OpenWidget() {
}

bool UMacanUIDataMenuDecoBack::IsOnFlag(EUIResultOnOrOff& result, EMUIDMenuDecoBackBfType Type) {
    return false;
}

bool UMacanUIDataMenuDecoBack::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataMenuDecoBack::DelFlag(EMUIDMenuDecoBackBfType Type) {
}

void UMacanUIDataMenuDecoBack::CloseWidget() {
}


