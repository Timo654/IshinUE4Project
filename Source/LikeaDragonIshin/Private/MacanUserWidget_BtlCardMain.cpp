#include "MacanUserWidget_BtlCardMain.h"

UMacanUserWidget_BtlCardMain::UMacanUserWidget_BtlCardMain() {
    this->main_card = NULL;
    this->switcher_front = NULL;
    this->switcher_back = NULL;
    this->elem_desert = NULL;
}

void UMacanUserWidget_BtlCardMain::skillUsed() {
}

void UMacanUserWidget_BtlCardMain::setDesert(bool _isDesert) {
}

void UMacanUserWidget_BtlCardMain::on() {
}

void UMacanUserWidget_BtlCardMain::off() {
}

ETaishiType UMacanUserWidget_BtlCardMain::getType() const {
    return ETaishiType::Attack;
}

ETaishiRarity UMacanUserWidget_BtlCardMain::getRarity() const {
    return ETaishiRarity::COMMON;
}

void UMacanUserWidget_BtlCardMain::cardUpdate(const FTaishiCardState& card) {
}

void UMacanUserWidget_BtlCardMain::cardChange(const FTaishiCardData& card) {
}


