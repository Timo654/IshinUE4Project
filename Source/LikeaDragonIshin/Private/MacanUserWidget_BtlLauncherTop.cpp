#include "MacanUserWidget_BtlLauncherTop.h"

UMacanUserWidget_BtlLauncherTop::UMacanUserWidget_BtlLauncherTop() {
    this->launcher = NULL;
    this->skill_EL = NULL;
    this->skill_CUR = NULL;
    this->skillDetailPanel = NULL;
    this->wbp_skillDetail_class = NULL;
}

void UMacanUserWidget_BtlLauncherTop::Update(const FInputState& State) {
}

void UMacanUserWidget_BtlLauncherTop::on() {
}

void UMacanUserWidget_BtlLauncherTop::off() {
}

void UMacanUserWidget_BtlLauncherTop::initCards(EBtlStyle InitializeStyle) {
}

FVector4 UMacanUserWidget_BtlLauncherTop::getCardRect(EUICardLayout layout) const {
    return FVector4{};
}

void UMacanUserWidget_BtlLauncherTop::CardStateUpdate(const FTaishiCardStatusList& card_state_list) {
}

void UMacanUserWidget_BtlLauncherTop::CardDataUpdate(const FTaishiCardDataList& card_data_list) {
}


