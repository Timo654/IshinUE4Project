#include "MacanUIDataFishing.h"

UMacanUIDataFishing::UMacanUIDataFishing() {
    this->state_awase_button = EUIState::NotSet;
    this->state_botton = EUIState::NotSet;
    this->state_esa = EUIState::NotSet;
    this->state_hyouka_window = EUIState::NotSet;
    this->state_junbi_window = EUIState::In;
    this->state_machi = EUIState::NotSet;
    this->state_seikou = EUIState::NotSet;
    this->state_sippai = EUIState::NotSet;
    this->state_sippai_win = EUIState::NotSet;
    this->state_soubi = EUIState::NotSet;
    this->state_turi_window = EUIState::NotSet;
    this->IsPlaying_BACK_TURI = false;
    this->Isfinish_fade_in_back_turi = false;
    this->Is_playing_seikou = false;
    this->Is_playing_sippai = false;
    this->Is_playing_awase_button = false;
    this->Is_finish_fade_in_sippai_win = false;
    this->Is_finish_fade_out_sippai_win = false;
    this->Is_finish_fade_in_awase_button = false;
    this->Is_finish_fade_out_awase_button = true;
    this->Is_finish_fade_out_esa = false;
    this->Is_finish_fade_in_esa = false;
    this->Is_finish_fade_in_button = false;
    this->Is_finish_fade_out_button = true;
    this->Is_finish_fade_in_back_soubi = false;
    this->Is_finish_fade_out_back_soubi = true;
    this->Is_finish_fade_out_back_turi = true;
    this->Is_finish_fade_in_soubi = false;
    this->Is_finish_fade_out_soubi = true;
    this->Is_finish_fade_out_back_hyoka = true;
    this->Is_finish_fade_in_back_hyoka = false;
    this->Is_playing_hyoka = false;
    this->set_play_esa_anm_defaultanim = false;
    this->m_item_id = 0;
    this->m_item_cursor_id = 0;
    this->m_fish_size = 0;
    this->m_fish_grade = 0;
    this->m_fish_size_rank = 0;
    this->m_sao_now_distance = 0;
    this->m_sao_now_river_hit_ratio_revise = 0.00f;
    this->m_sao_now_sea_hit_ratio_revise = 0.00f;
    this->m_sao_now_hit_speed_revise = 0.00f;
    this->m_sao_choice_distance = 0;
    this->m_sao_choice_river_hit_ratio_revise = 0.00f;
    this->m_sao_choice_sea_hit_ratio_revise = 0.00f;
    this->m_sao_choice_hit_speed_revise = 0.00f;
}

bool UMacanUIDataFishing::IsDirtySippai(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFishing::IsDirtySeikou(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFishing::IsDirtySaoChoice(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFishing::IsDirtySao(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFishing::IsDirtyPlace(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFishing::IsDirtyJunbi(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFishing::IsDirtyHyoka(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFishing::IsDirtyEsa(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFishing::IsDirtyButton(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFishing::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFishing::GetSoubiItemNum(int32 Index) {
    return false;
}

bool UMacanUIDataFishing::GetSoubiCursorNum(int32 Index) {
    return false;
}

bool UMacanUIDataFishing::GetHasSoubiItemNum(int32 Index) {
    return false;
}

void UMacanUIDataFishing::DelSippai() {
}

void UMacanUIDataFishing::DelSeikou() {
}

void UMacanUIDataFishing::DelSaoChoice() {
}

void UMacanUIDataFishing::DelSao() {
}

void UMacanUIDataFishing::DelPlace() {
}

void UMacanUIDataFishing::DelJunbiWin() {
}

void UMacanUIDataFishing::DelHyoka() {
}

void UMacanUIDataFishing::DelEsa() {
}

void UMacanUIDataFishing::DelButton() {
}


