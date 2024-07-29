#include "MacanUIDataHarukaOnedari.h"

UMacanUIDataHarukaOnedari::UMacanUIDataHarukaOnedari() {
    this->IsPrepared = true;
    this->isVisibleGauge = false;
    this->isUpdateGauge = false;
    this->isRankUp = false;
    this->isPlayingGauge = false;
}

void UMacanUIDataHarukaOnedari::SetVisibleGauge(bool IsVisible) {
}

void UMacanUIDataHarukaOnedari::SetPlayingRankUp(bool in) {
}

void UMacanUIDataHarukaOnedari::ResetUpdateGaugeFlag() {
}

void UMacanUIDataHarukaOnedari::ResetLevelUpFlag() {
}

int32 UMacanUIDataHarukaOnedari::GetRank() {
    return 0;
}

float UMacanUIDataHarukaOnedari::GetGauge() {
    return 0.0f;
}


