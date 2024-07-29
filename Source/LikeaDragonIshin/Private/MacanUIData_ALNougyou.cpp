#include "MacanUIData_ALNougyou.h"

UMacanUIData_ALNougyou::UMacanUIData_ALNougyou() {
    this->state_Main = EUIState::NotSet;
    this->state_shuukaku = EUIState::NotSet;
    this->state_Base = EUIState::NotSet;
    this->state_Button_00 = EUIState::NotSet;
    this->state_Kanri = EUIState::NotSet;
    this->state_Sakutuke = EUIState::NotSet;
    this->state_Yasai_Sentaku = EUIState::NotSet;
    this->state_Win_01 = EUIState::NotSet;
    this->is_finish_fade_in = false;
    this->is_finish_fade_out = false;
    this->m_select_crop_index = 0;
    this->m_mode_top_cursor = 0;
    this->m_mode_plan_crop_index = 0;
    this->m_popup_confirm_cursor = 0;
    this->m_scarecrow_level = 0;
    this->m_farm_level = 0;
    this->m_soil_level = 0;
    this->m_yasai_id = 0;
    this->m_is_draw_yasai_sakutuke = false;
    this->m_b_is_finish_fade_out_win_shuukaku = true;
    this->m_b_is_finish_fade_in_win_01 = false;
    this->m_b_is_finish_fade_out_win_01 = true;
    this->m_b_is_finish_fade_in_sakutuke = false;
    this->m_b_is_draw_sentakushi = false;
    this->m_b_is_draw_exp = false;
    this->m_b_is_draw_item = false;
    this->m_b_is_draw_daihousaku = false;
    this->m_b_is_draw_housaku = false;
    this->m_b_is_draw_kakashi = false;
    this->m_b_is_finish_fade_in_yasai_sentaku = false;
    this->m_b_is_finish_fade_out_yasai_sentaku = true;
    this->m_yasai_sentaku_cursor = 0;
    this->m_sakutuke_cursor_x = 0;
    this->m_sakutuke_cursor_y = 0;
    this->is_masu_visible = false;
}

bool UMacanUIData_ALNougyou::IsDirty_Yasai_Sentaku(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_ALNougyou::IsDirty_Win_01(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_ALNougyou::IsDirty_Shuukaku(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_ALNougyou::IsDirty_Sakutuke(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_ALNougyou::IsDirty_Kanri(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_ALNougyou::IsDirty_Button_00(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_ALNougyou::IsDirty_Base(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_ALNougyou::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIData_ALNougyou::DelDirty_Yasai_Sentaku() {
}

void UMacanUIData_ALNougyou::DelDirty_Win_01() {
}

void UMacanUIData_ALNougyou::DelDirty_Shuukaku() {
}

void UMacanUIData_ALNougyou::DelDirty_Sakutuke() {
}

void UMacanUIData_ALNougyou::DelDirty_Kanri() {
}

void UMacanUIData_ALNougyou::DelDirty_Button_00() {
}

void UMacanUIData_ALNougyou::DelDirty_Base() {
}


