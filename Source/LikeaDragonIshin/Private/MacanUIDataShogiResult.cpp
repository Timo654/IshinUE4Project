#include "MacanUIDataShogiResult.h"

UMacanUIDataShogiResult::UMacanUIDataShogiResult() {
    this->BattlePoint = 0;
    this->MattaPoint = 0;
    this->mattaNum = 0;
    this->SuperMattaPoint = 0;
    this->totalPoint = 0;
    this->myState = EUIState::NotSet;
}

bool UMacanUIDataShogiResult::ShowTotalPoint(int32 Point) {
    return false;
}

bool UMacanUIDataShogiResult::ShowSuperMattaPoint(int32 Point) {
    return false;
}

bool UMacanUIDataShogiResult::ShowMattaPoint(int32 Point, int32 Num) {
    return false;
}

bool UMacanUIDataShogiResult::ShowBattlePoint(int32 Point) {
    return false;
}

bool UMacanUIDataShogiResult::OutWindow() {
    return false;
}

bool UMacanUIDataShogiResult::IsDirtyWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogiResult::IsDirtyTotalPoint(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogiResult::IsDirtySuperMattaPoint(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogiResult::IsDirtyMattaPoint(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogiResult::IsDirtyBattlePoint(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogiResult::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogiResult::InWindow() {
    return false;
}

void UMacanUIDataShogiResult::DelBfDirtyWindow() {
}

void UMacanUIDataShogiResult::DelBfDirtyTotalPoint() {
}

void UMacanUIDataShogiResult::DelBfDirtySuperMattaPoint() {
}

void UMacanUIDataShogiResult::DelBfDirtyMattaPoint() {
}

void UMacanUIDataShogiResult::DelBfDirtyBattlePoint() {
}


