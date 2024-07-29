#include "MacanUIDataGameOver.h"

UMacanUIDataGameOver::UMacanUIDataGameOver() {
    this->bfData = 0;
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
}

void UMacanUIDataGameOver::SetFlag(EUIGameOverBfType Type) {
}

void UMacanUIDataGameOver::OpenWidget(EUIGameOverBfType inType, bool isQuick) {
}

bool UMacanUIDataGameOver::IsOpenAnimPlaying() {
    return false;
}

bool UMacanUIDataGameOver::IsOnFlag(EUIResultOnOrOff& result, EUIGameOverBfType Type) {
    return false;
}

bool UMacanUIDataGameOver::IsLoopAnimPlaying() {
    return false;
}

bool UMacanUIDataGameOver::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataGameOver::IsCloseAnimPlaying() {
    return false;
}

void UMacanUIDataGameOver::DelFlag(EUIGameOverBfType Type) {
}

void UMacanUIDataGameOver::CloseWidget(EUIGameOverBfType inType, bool isQuick) {
}


