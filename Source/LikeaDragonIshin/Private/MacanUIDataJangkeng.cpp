#include "MacanUIDataJangkeng.h"

UMacanUIDataJangkeng::UMacanUIDataJangkeng() {
    this->m_kira_time = 0.00f;
    this->stateUIMain = EUIState::NotSet;
    this->m_player_hand_type = EUIJangkengHandType::Nothing;
    this->stateRock = EUIState::NotSet;
    this->stateScissors = EUIState::NotSet;
    this->statePaper = EUIState::NotSet;
    this->m_player_win_count = 0;
    this->m_companion_win_count = 0;
    this->stateSpecial = EUIState::NotSet;
    this->m_special_num = -1;
    this->stateSpecialIcon_0 = EUIState::NotSet;
    this->stateSpecialIcon_1 = EUIState::NotSet;
    this->stateSpecialIcon_2 = EUIState::NotSet;
    this->stateWin = EUIState::NotSet;
    this->stateLose = EUIState::NotSet;
    this->stateSpecialCount = EUIState::NotSet;
    this->stateWinCount = EUIState::NotSet;
    this->m_is_draw = false;
}

bool UMacanUIDataJangkeng::UseSpecial() {
    return false;
}

bool UMacanUIDataJangkeng::SetTime(float Time) {
    return false;
}

bool UMacanUIDataJangkeng::SetSpecialNum(int32 Num) {
    return false;
}

bool UMacanUIDataJangkeng::SetPlayerWinCount(int32 Count) {
    return false;
}

bool UMacanUIDataJangkeng::SetHand(EUIJangkengHandType hand_type) {
    return false;
}

bool UMacanUIDataJangkeng::SetCompanionWinCount(int32 Count) {
    return false;
}

bool UMacanUIDataJangkeng::OpenWin() {
    return false;
}

bool UMacanUIDataJangkeng::OpenSpecial() {
    return false;
}

bool UMacanUIDataJangkeng::OpenLose() {
    return false;
}

bool UMacanUIDataJangkeng::Open(int32 special_num, bool is_draw) {
    return false;
}

bool UMacanUIDataJangkeng::IsDirtyUseSpecial(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataJangkeng::IsDirtySetTime(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataJangkeng::IsDirtySetSpecialNum(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataJangkeng::IsDirtySetPlayerWinCount(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataJangkeng::IsDirtySetHand(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataJangkeng::IsDirtySetCompanionWinCount(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataJangkeng::IsDirtyOpenSpecial(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataJangkeng::IsDirtyOpen(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataJangkeng::IsDirtyCloseWinCount(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataJangkeng::IsDirtyCloseSpecial(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataJangkeng::IsDirtyClose(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataJangkeng::IsDirtyChangeStateWin(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataJangkeng::IsDirtyChangeStateLose(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataJangkeng::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataJangkeng::DelBfDirtyUseSpecial() {
}

void UMacanUIDataJangkeng::DelBfDirtySetTime() {
}

void UMacanUIDataJangkeng::DelBfDirtySetSpecialNum() {
}

void UMacanUIDataJangkeng::DelBfDirtySetPlayerWinCount() {
}

void UMacanUIDataJangkeng::DelBfDirtySetHand() {
}

void UMacanUIDataJangkeng::DelBfDirtySetCompanionWinCount() {
}

void UMacanUIDataJangkeng::DelBfDirtyOpenSpecial() {
}

void UMacanUIDataJangkeng::DelBfDirtyOpen() {
}

void UMacanUIDataJangkeng::DelBfDirtyCloseWinCount() {
}

void UMacanUIDataJangkeng::DelBfDirtyCloseSpecial() {
}

void UMacanUIDataJangkeng::DelBfDirtyClose() {
}

void UMacanUIDataJangkeng::DelBfDirtyChangeStateWin() {
}

void UMacanUIDataJangkeng::DelBfDirtyChangeStateLose() {
}

bool UMacanUIDataJangkeng::CloseWinCount() {
    return false;
}

bool UMacanUIDataJangkeng::CloseWin() {
    return false;
}

bool UMacanUIDataJangkeng::CloseSpecial() {
    return false;
}

bool UMacanUIDataJangkeng::CloseLose() {
    return false;
}

bool UMacanUIDataJangkeng::Close() {
    return false;
}


