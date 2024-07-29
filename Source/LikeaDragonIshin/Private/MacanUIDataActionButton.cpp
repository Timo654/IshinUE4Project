#include "MacanUIDataActionButton.h"

UMacanUIDataActionButton::UMacanUIDataActionButton() {
    this->NormalButtonState = EUIState::NotSet;
    this->IsKyougeki = false;
    this->KiwamiButtonState = EUIState::NotSet;
    this->KiwamiExButtonState = EUIState::NotSet;
    this->RendaButtonState = EUIState::NotSet;
    this->IsPlayingRendaEffect = false;
    this->RendaButtonType = EWBPButtoniconType::CANCEL;
    this->CenterButtonState = EUIState::NotSet;
    this->CenterButtonType = EWBPButtoniconType::CANCEL;
    this->IsPlayKiwami = false;
    this->IsPlayPressedKiwami = false;
    this->IsPlayKiwamiEx = false;
    this->IsHideKiwami = false;
    this->IsHideKiwamiEx = false;
    this->IsPlayingKyogeki = false;
    this->NormalButtonWidget = NULL;
    this->KiwamiButtonWidget = NULL;
    this->KiwamiExButtonWidget = NULL;
}

bool UMacanUIDataActionButton::IsDirtyRendaButton(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataActionButton::IsDirtyNormalButton(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataActionButton::IsDirtyKiwamiExButton(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataActionButton::IsDirtyKiwamiButton(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataActionButton::IsDirtyCenterButton(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataActionButton::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataActionButton::DelBfDirtyRendaButton() {
}

void UMacanUIDataActionButton::DelBfDirtyNormalButton() {
}

void UMacanUIDataActionButton::DelBfDirtyKiwamiExButton() {
}

void UMacanUIDataActionButton::DelBfDirtyKiwamiButton() {
}

void UMacanUIDataActionButton::DelBfDirtyCenterButton() {
}


