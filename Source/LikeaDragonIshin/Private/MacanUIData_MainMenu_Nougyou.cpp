#include "MacanUIData_MainMenu_Nougyou.h"

UMacanUIData_MainMenu_Nougyou::UMacanUIData_MainMenu_Nougyou() {
    this->state_Base = EUIState::NotSet;
    this->m_scarecrow_level = 0;
    this->m_soid_level = 0;
    this->m_farm_level = 0;
    this->m_visible_kakashi = false;
    this->is_fade_in_ok = false;
}

bool UMacanUIData_MainMenu_Nougyou::NativeBfIsTemplate(EUIResultOnOrOff& result, int32& bf, int32 Flags) {
    return false;
}

bool UMacanUIData_MainMenu_Nougyou::IsDirty_Info(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Nougyou::IsDirty_Base(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Nougyou::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIData_MainMenu_Nougyou::DelDirty_Info() {
}

void UMacanUIData_MainMenu_Nougyou::DelDirty_Base() {
}


