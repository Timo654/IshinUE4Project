#include "MacanUIDataActionPress.h"

UMacanUIDataActionPress::UMacanUIDataActionPress() {
    this->RendaButtonState = EUIState::NotSet;
}

void UMacanUIDataActionPress::SetTime(float normalSuccess, float normalFailure, float otherSuccess, float otherFailure) {
}

bool UMacanUIDataActionPress::IsDirtyButtons(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataActionPress::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataActionPress::Initialize() {
}

void UMacanUIDataActionPress::DrawPress(EUIPressAct eAct, EUIPressState eState, const int32 in_index, const float in_frame, const int32 button1, const int32 button2) {
}

void UMacanUIDataActionPress::DelBfDirtyButtons() {
}


