#include "MacanUserWidget_BtlMainLife.h"

UMacanUserWidget_BtlMainLife::UMacanUserWidget_BtlMainLife() {
    this->gauge_Delta = NULL;
    this->gauge_TaishiAdd = NULL;
    this->gauge_Base = NULL;
    this->gauge_Now = NULL;
    this->gauge_divider = NULL;
    this->gauge_panel = NULL;
    this->elem_bonus = NULL;
    this->elem_hact = NULL;
    this->gauge_Heal2 = NULL;
    this->lifeGaugeSizeMax = 2300.00f;
    this->lifeGaugeSizeMin = 685.00f;
    this->lifeGaugeSizeOffset_L = 110.00f;
    this->lifeGaugeSizeOffset_R = 150.00f;
    this->Gauge_Decrease_wait_time = 0.00f;
    this->Gauge_Decrease_Speed = 0.00f;
}

void UMacanUserWidget_BtlMainLife::updateHPPercent() {
}

void UMacanUserWidget_BtlMainLife::setLogicalHPMax(int32 Max) {
}


void UMacanUserWidget_BtlMainLife::setHPMAX(int32 Base, int32 bonus) {
}

void UMacanUserWidget_BtlMainLife::setHPBarMode(bool _isEditMode, bool isExtend) {
}

void UMacanUserWidget_BtlMainLife::setHP(int32 _nowHP) {
}

void UMacanUserWidget_BtlMainLife::setHeal(int32 _nowHeal) {
}

void UMacanUserWidget_BtlMainLife::on(bool LifeOnly) {
}

void UMacanUserWidget_BtlMainLife::off(bool LifeOnly) {
}

bool UMacanUserWidget_BtlMainLife::isVisibleEditLife() const {
    return false;
}

void UMacanUserWidget_BtlMainLife::HactOn() {
}

void UMacanUserWidget_BtlMainLife::ApplyHactImmidiateWithoutPerform(float _hact, float Max) {
}

void UMacanUserWidget_BtlMainLife::ApplyHact(float _hact, float Max) {
}


