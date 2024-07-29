#include "MacanUserWidget_BtlEnemySubLife.h"

UMacanUserWidget_BtlEnemySubLife::UMacanUserWidget_BtlEnemySubLife() {
    this->elem_name = NULL;
    this->anim_damage = NULL;
    this->anim_damage_guard = NULL;
    this->gauge = NULL;
    this->anim_armor_on = NULL;
    this->anim_armor_off = NULL;
    this->anim_armor_break = NULL;
    this->armor_gauge = NULL;
}

void UMacanUserWidget_BtlEnemySubLife::setWarn(bool _isWarn) {
}

void UMacanUserWidget_BtlEnemySubLife::setupArmor(bool hasArmor) {
}

void UMacanUserWidget_BtlEnemySubLife::SetName(const FText& Name) {
}

void UMacanUserWidget_BtlEnemySubLife::setHP(float Value, float diff) {
}

void UMacanUserWidget_BtlEnemySubLife::setArmor(float Value, float diff) {
}

void UMacanUserWidget_BtlEnemySubLife::onDamage(bool isGuard) {
}

bool UMacanUserWidget_BtlEnemySubLife::isGaugeBreak() const {
    return false;
}

bool UMacanUserWidget_BtlEnemySubLife::isDeadEnd() const {
    return false;
}


