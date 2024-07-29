#include "MacanUIDataAlcoholGauge.h"

UMacanUIDataAlcoholGauge::UMacanUIDataAlcoholGauge() {
    this->windowUIState = EUIState::NotSet;
    this->drunkRank = 0;
}

void UMacanUIDataAlcoholGauge::TestDrunk(int32 rank) {
}

bool UMacanUIDataAlcoholGauge::SetStateOn() {
    return false;
}

bool UMacanUIDataAlcoholGauge::SetStateOff() {
    return false;
}

bool UMacanUIDataAlcoholGauge::SetRank(int32 rank) {
    return false;
}

bool UMacanUIDataAlcoholGauge::Open() {
    return false;
}

bool UMacanUIDataAlcoholGauge::IsDirtyRank(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataAlcoholGauge::IsDirtyHide(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataAlcoholGauge::IsDirtyGaugeVisible(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataAlcoholGauge::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataAlcoholGauge::DelBfDirtyRank() {
}

void UMacanUIDataAlcoholGauge::DelBfDirtyHide() {
}

void UMacanUIDataAlcoholGauge::DelBfDirtyGaugeVisible() {
}

bool UMacanUIDataAlcoholGauge::Close() {
    return false;
}


