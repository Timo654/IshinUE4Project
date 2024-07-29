#include "MacanUserWidget_BtlBossDisp.h"

UMacanUserWidget_BtlBossDisp::UMacanUserWidget_BtlBossDisp() {
    this->elem_name = NULL;
    this->anim_in = NULL;
    this->anim_in2 = NULL;
    this->anim_stay = NULL;
    this->anim_out = NULL;
    this->anim_damage = NULL;
    this->anim_damage_guard = NULL;
    this->gauge = NULL;
    this->elem_gauge_break_eff = NULL;
    this->anim_armor_on = NULL;
    this->anim_armor_off = NULL;
    this->anim_armor_break = NULL;
    this->armor_gauge = NULL;
    this->InvalidationBox_0 = NULL;
}

void UMacanUserWidget_BtlBossDisp::setWarn(bool _isWarn) {
}

void UMacanUserWidget_BtlBossDisp::setupArmor(bool hasArmor) {
}

void UMacanUserWidget_BtlBossDisp::SetName(const FText& Name) {
}

void UMacanUserWidget_BtlBossDisp::setHP(float Value, float diff) {
}

void UMacanUserWidget_BtlBossDisp::setArmor(float Value, float diff) {
}

void UMacanUserWidget_BtlBossDisp::onDamage(bool isGuard) {
}

void UMacanUserWidget_BtlBossDisp::on(bool isNew) {
}

void UMacanUserWidget_BtlBossDisp::off() {
}

bool UMacanUserWidget_BtlBossDisp::isGaugeBreak() const {
    return false;
}

bool UMacanUserWidget_BtlBossDisp::isDeadEnd() const {
    return false;
}


