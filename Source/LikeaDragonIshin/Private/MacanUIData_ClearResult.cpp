#include "MacanUIData_ClearResult.h"

UMacanUIData_ClearResult::UMacanUIData_ClearResult() {
    this->state_Main = EUIState::NotSet;
    this->state_ItemWin = EUIState::NotSet;
    this->m_add_money = 0;
}

bool UMacanUIData_ClearResult::IsDirty_Result(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_ClearResult::IsDirty_ItemWin(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_ClearResult::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIData_ClearResult::DelDirty_Result() {
}

void UMacanUIData_ClearResult::DelDirty_ItemWin() {
}


