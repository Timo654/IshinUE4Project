#include "MacanUIDataBattleCaptionBoss.h"

UMacanUIDataBattleCaptionBoss::UMacanUIDataBattleCaptionBoss() {
    this->daimonTexture = NULL;
    this->sb2Texture = NULL;
    this->sb2KatagakiTexture = NULL;
    this->sb3Texture = NULL;
}

void UMacanUIDataBattleCaptionBoss::StopCation() {
}

void UMacanUIDataBattleCaptionBoss::SetSB3(UTexture2D* tex) {
}

void UMacanUIDataBattleCaptionBoss::SetSB2TextNameOnle(FText text) {
}

void UMacanUIDataBattleCaptionBoss::SetSB2Text(FText text, FText kata) {
}

void UMacanUIDataBattleCaptionBoss::SetSB2NameOnle(UTexture2D* tex) {
}

void UMacanUIDataBattleCaptionBoss::SetSB2(UTexture2D* tex, UTexture2D* kata) {
}

void UMacanUIDataBattleCaptionBoss::SetLong(FText text) {
}

void UMacanUIDataBattleCaptionBoss::SetDaimon(UTexture2D* tex) {
}

void UMacanUIDataBattleCaptionBoss::ReleaseWidget() {
}

void UMacanUIDataBattleCaptionBoss::PlaySB3() {
}

void UMacanUIDataBattleCaptionBoss::PlaySB2() {
}

void UMacanUIDataBattleCaptionBoss::PlayLong() {
}

void UMacanUIDataBattleCaptionBoss::PlayDaimon() {
}

bool UMacanUIDataBattleCaptionBoss::IsNeedUpdateThisUI(EBattleCaptionBossUI uiType, EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataBattleCaptionBoss::IsNeedUpdate(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataBattleCaptionBoss::FinishUpdateUI(EBattleCaptionBossUI uiType) {
}


