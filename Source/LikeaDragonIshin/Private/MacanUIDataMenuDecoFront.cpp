#include "MacanUIDataMenuDecoFront.h"

UMacanUIDataMenuDecoFront::UMacanUIDataMenuDecoFront() {
    this->bfData = 0;
    this->mainUIState = EUIState::NotSet;
    this->isInvisibleMenuInfoText = false;
    this->isInvisibleAddressText = false;
    this->isInvisibleArrayBtnGuideItems = false;
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
}

void UMacanUIDataMenuDecoFront::SetFlag(EMUIDMenuDecoFrontBfType Type) {
}

void UMacanUIDataMenuDecoFront::OpenWidget() {
}

bool UMacanUIDataMenuDecoFront::IsOnFlag(EUIResultOnOrOff& result, EMUIDMenuDecoFrontBfType Type) {
    return false;
}

bool UMacanUIDataMenuDecoFront::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataMenuDecoFront::DelFlag(EMUIDMenuDecoFrontBfType Type) {
}

void UMacanUIDataMenuDecoFront::CloseWidget() {
}


