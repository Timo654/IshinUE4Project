#include "MacanUIDataWandererSpeechBubble.h"

UMacanUIDataWandererSpeechBubble::UMacanUIDataWandererSpeechBubble() {
    this->animSpeedSecOpen = 1.00f;
    this->animSpeedSecClose = 1.00f;
    this->enableDefaultWakuColor = true;
    this->anchorType = EUIAnchorType::TopLeft;
}

bool UMacanUIDataWandererSpeechBubble::SetOpenSpeed(float sec) {
    return false;
}

bool UMacanUIDataWandererSpeechBubble::SetCloseSpeed(float sec) {
    return false;
}

bool UMacanUIDataWandererSpeechBubble::IsDirtyOpenSpeed(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWandererSpeechBubble::IsDirtyCloseSpeed(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataWandererSpeechBubble::DelDirtyOpenSpeed() {
}

void UMacanUIDataWandererSpeechBubble::DelDirtyCloseSpeed() {
}


