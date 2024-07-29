#include "MacanUIDataShogiEnemySelect.h"

UMacanUIDataShogiEnemySelect::UMacanUIDataShogiEnemySelect() {
    this->YesNoWindowState = EUIState::NotSet;
    this->IsYesCursor = false;
    this->IsUpdateDispData = false;
    this->IsUpdateCursor = false;
    this->IsUpdateEnterCursor = false;
}

bool UMacanUIDataShogiEnemySelect::IsDirtyYesNoWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogiEnemySelect::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataShogiEnemySelect::DelBfDirtyYesNoWindow() {
}


