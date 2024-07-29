#include "MacanUIDataBattleMain.h"

UMacanUIDataBattleMain::UMacanUIDataBattleMain() {
    this->logical_HP_max = 1000;
}

void UMacanUIDataBattleMain::updateEnemyFull(int32 idx, FEnemyUIData& en) {
}

void UMacanUIDataBattleMain::updateEnemy(int32 idx, bool isInVP, const FVector2D& Pos, const FVector2D& d_pos, int32 hp, int32 Armor, bool isInVP_OSM, float OSMarkerAngle, bool _isVisibleBossDisp) {
}

void UMacanUIDataBattleMain::setWeapon_Special(const FWeaponUIData& weapon) {
}

void UMacanUIDataBattleMain::setWeapon_Ranbu(const FWeaponUIData& weapon1, const FWeaponUIData& weapon2) {
}

void UMacanUIDataBattleMain::setWeapon_Katana(const FWeaponUIData& weapon) {
}

void UMacanUIDataBattleMain::setWeapon_Gun(const FWeaponUIData& weapon, const FBulletUIData& bullet) {
}

void UMacanUIDataBattleMain::setValuation(EBtlValuation in_val) {
}

void UMacanUIDataBattleMain::SetStyle(EBtlStyle in_style, bool is_initialize) {
}

void UMacanUIDataBattleMain::setScoreRank(int32 in_rank) {
}

void UMacanUIDataBattleMain::setRengekiCount(int32 in_count) {
}

void UMacanUIDataBattleMain::setLv_Style(EBtlStyle in_style, int32 in_Lv) {
}

void UMacanUIDataBattleMain::setLv_PL(int32 in_Lv) {
}

void UMacanUIDataBattleMain::setKillCount(int32 in_count) {
}

void UMacanUIDataBattleMain::setInputState(const FInputState& in_state) {
}

void UMacanUIDataBattleMain::setInHact(bool isIn) {
}

void UMacanUIDataBattleMain::setCardStatus_layout(EBtlStyle Style, const FTaishiCardStatusLayout& in_status) {
}

void UMacanUIDataBattleMain::setCardStatus_detail(EBtlStyle Style, EUICardLayout layout, const FTaishiCardState& in_status) {
}

void UMacanUIDataBattleMain::setCardStatus(const FTaishiCardStatusList& in_status) {
}

void UMacanUIDataBattleMain::setCardData_layout(EBtlStyle Style, const FTaishiCardDataLayout& in_data) {
}

void UMacanUIDataBattleMain::setCardData_detail(EBtlStyle Style, EUICardLayout layout, const FTaishiCardData& in_data) {
}

void UMacanUIDataBattleMain::setCardData(const FTaishiCardDataList& in_data) {
}

void UMacanUIDataBattleMain::setBullet(const FBulletUIData& bullet) {
}

void UMacanUIDataBattleMain::setBuffDebuff(EBtlBuffDebuffStatsType Type, float gauge_val) {
}

void UMacanUIDataBattleMain::resetEnemyHactGauge() {
}

void UMacanUIDataBattleMain::Reset() {
}

void UMacanUIDataBattleMain::removeEnemy(int32 idx) {
}

void UMacanUIDataBattleMain::removeBuffDebuff(EBtlBuffDebuffStatsType Type) {
}

void UMacanUIDataBattleMain::playAdmirable() {
}

void UMacanUIDataBattleMain::on() {
}

void UMacanUIDataBattleMain::off() {
}

void UMacanUIDataBattleMain::KillCountOn() {
}

void UMacanUIDataBattleMain::KillCountOff() {
}

bool UMacanUIDataBattleMain::isSetWeapon_Special() const {
    return false;
}

bool UMacanUIDataBattleMain::isSetWeapon_Ranbu() const {
    return false;
}

bool UMacanUIDataBattleMain::isSetWeapon_Katana() const {
    return false;
}

bool UMacanUIDataBattleMain::isSetWeapon_Gun() const {
    return false;
}

bool UMacanUIDataBattleMain::isResetEnemyHactGauge() {
    return false;
}

bool UMacanUIDataBattleMain::isPlayingScoreValuation() const {
    return false;
}

bool UMacanUIDataBattleMain::isHactNow() const {
    return false;
}

bool UMacanUIDataBattleMain::isCardInit() const {
    return false;
}

bool UMacanUIDataBattleMain::isAdmirablePlaying() const {
    return false;
}

FWeaponUIData UMacanUIDataBattleMain::getWeapon_Special() const {
    return FWeaponUIData{};
}

FWeaponUIData UMacanUIDataBattleMain::getWeapon_Ranbu2() const {
    return FWeaponUIData{};
}

FWeaponUIData UMacanUIDataBattleMain::getWeapon_Ranbu1() const {
    return FWeaponUIData{};
}

FWeaponUIData UMacanUIDataBattleMain::getWeapon_Katana() const {
    return FWeaponUIData{};
}

FWeaponUIData UMacanUIDataBattleMain::getWeapon_Gun() const {
    return FWeaponUIData{};
}

EBtlValuation UMacanUIDataBattleMain::getValuation() const {
    return EBtlValuation::None;
}

int32 UMacanUIDataBattleMain::getScoreRank() const {
    return 0;
}

int32 UMacanUIDataBattleMain::getRengekiCount() const {
    return 0;
}

FDamageDisp UMacanUIDataBattleMain::getPlDamage() const {
    return FDamageDisp{};
}

int32 UMacanUIDataBattleMain::getNowHP() const {
    return 0;
}

int32 UMacanUIDataBattleMain::getMAXHP() const {
    return 0;
}

int32 UMacanUIDataBattleMain::getLv(EBtlStyle Style) const {
    return 0;
}

int32 UMacanUIDataBattleMain::getLogicalHPMax() const {
    return 0;
}

int32 UMacanUIDataBattleMain::getKillCount() const {
    return 0;
}

FInputState UMacanUIDataBattleMain::getInputState() const {
    return FInputState{};
}

float UMacanUIDataBattleMain::getHEAT() const {
    return 0.0f;
}

bool UMacanUIDataBattleMain::getFocusedEnemyData(FEnemyUIDispData& Data) const {
    return false;
}

FVector2D UMacanUIDataBattleMain::getEnPos(int32 idx) const {
    return FVector2D{};
}

int32 UMacanUIDataBattleMain::getEnMaxHP(int32 idx) const {
    return 0;
}

int32 UMacanUIDataBattleMain::getEnHP(int32 idx) const {
    return 0;
}

TArray<int32> UMacanUIDataBattleMain::getEnemyHactGaugeList() const {
    return TArray<int32>();
}

void UMacanUIDataBattleMain::getEnemyData(TArray<FEnemyUIDispData>& data_list) const {
}

TMap<int32, FDamageDisp> UMacanUIDataBattleMain::getEnDamage() const {
    return TMap<int32, FDamageDisp>();
}

FTaishiCardStatusList UMacanUIDataBattleMain::getCardStatusList() const {
    return FTaishiCardStatusList{};
}

FVector4 UMacanUIDataBattleMain::getCardRect(EUICardLayout layout) const {
    return FVector4{};
}

FVector2D UMacanUIDataBattleMain::getCardPosition(EUICardLayout layout) const {
    return FVector2D{};
}

FTaishiCardDataList UMacanUIDataBattleMain::getCardDataList() const {
    return FTaishiCardDataList{};
}

FBulletUIData UMacanUIDataBattleMain::getBullet_Gun() const {
    return FBulletUIData{};
}

TMap<EBtlBuffDebuffStatsType, float> UMacanUIDataBattleMain::getBuffDebuff() const {
    return TMap<EBtlBuffDebuffStatsType, float>();
}

int32 UMacanUIDataBattleMain::getBonusHP() const {
    return 0;
}

void UMacanUIDataBattleMain::clearEnemyHactGaugeList() {
}

void UMacanUIDataBattleMain::addPlDamage(const FVector2D& damage_pos, EBtlDamageType Type, int32 Damage, float in_fFollowTime, const FVector2D& Offset) {
}

void UMacanUIDataBattleMain::addEnemyHactGauge(int32 idx) {
}

int32 UMacanUIDataBattleMain::addEnemy(FEnemyUIData& en) {
    return 0;
}

void UMacanUIDataBattleMain::addEnDamage(int32 idx, EBtlDamageType Type, int32 Damage, float in_fFollowTime, const FVector2D& Offset) {
}

void UMacanUIDataBattleMain::abortScoreValuation() {
}

void UMacanUIDataBattleMain::abortAdmirable() {
}


