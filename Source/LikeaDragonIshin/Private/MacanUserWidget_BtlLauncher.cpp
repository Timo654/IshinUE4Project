#include "MacanUserWidget_BtlLauncher.h"

UMacanUserWidget_BtlLauncher::UMacanUserWidget_BtlLauncher() {
    this->exchange_anim = NULL;
    this->card_anim = NULL;
    this->card_in = NULL;
    this->card_out = NULL;
    this->charged_on = NULL;
    this->charged_off = NULL;
    this->ButtonGuide = NULL;
    this->playingSkillAnimation = NULL;
    this->playingSkillAvailableAnimation = NULL;
}

void UMacanUserWidget_BtlLauncher::SetState(const FInputState& in_state) {
}

void UMacanUserWidget_BtlLauncher::setDeviceMode(LauncherDeviceMode mode) {
}

void UMacanUserWidget_BtlLauncher::setCardStatus(EBtlStyle Style, EUICardLayout layout, const FTaishiCardState& card) {
}

void UMacanUserWidget_BtlLauncher::setCardData(EBtlStyle Style, EUICardLayout layout, const FTaishiCardData& card) {
}


void UMacanUserWidget_BtlLauncher::init_cards(EBtlStyle Style) {
}

LauncherDeviceMode UMacanUserWidget_BtlLauncher::getMode() const {
    return LauncherDeviceMode::LDM_CONSOLE;
}

FVector4 UMacanUserWidget_BtlLauncher::getCardRect(EUICardLayout layout) const {
    return FVector4{};
}

void UMacanUserWidget_BtlLauncher::Change2NewCard() {
}


