#include "MacanUIDataDrinking.h"

UMacanUIDataDrinking::UMacanUIDataDrinking() {
    this->m_player_gauge = 0.00f;
    this->statePlayerGauge = EUIState::NotSet;
    this->m_player_gauge_ratio = 0.15f;
    this->m_diff_player_gauge_ratio = 0.00f;
    this->statePlayerGaugeCursol = EUIState::NotSet;
    this->stateAnnaGauge = EUIState::NotSet;
    this->m_anna_gauge_ratio = 0.00f;
    this->stateCutIn = EUIState::NotSet;
    this->m_cut_in_num = 0;
    this->m_player_sake_amount = 0.00f;
    this->m_player_sake_bottle_count = 0;
    this->m_player_sake_bottle_count_new = 0;
    this->stateEffRed = EUIState::NotSet;
    this->stateEffBlue = EUIState::NotSet;
    this->stateDrunkFlash = EUIState::NotSet;
    this->stateWin = EUIState::NotSet;
    this->stateLose = EUIState::NotSet;
    this->m_drunk = 0.00f;
    this->m_drunk_ratio = 0.00f;
}

bool UMacanUIDataDrinking::SetPlayerSakeBottleCount(int32 Count) {
    return false;
}

bool UMacanUIDataDrinking::SetPlayerSakeAmount(float Amount) {
    return false;
}

bool UMacanUIDataDrinking::SetPlayerGaugeRatio(float ratio) {
    return false;
}

bool UMacanUIDataDrinking::SetDrunk(float drunk) {
    return false;
}

bool UMacanUIDataDrinking::SetCompanionGaugeDrunkRatio(float ratio) {
    return false;
}

bool UMacanUIDataDrinking::ReactionUp() {
    return false;
}

bool UMacanUIDataDrinking::ReactionDown() {
    return false;
}

bool UMacanUIDataDrinking::PlayWarning(EUIDrinkingWarningType Type) {
    return false;
}

bool UMacanUIDataDrinking::PlayCutin(int32 Num) {
    return false;
}

bool UMacanUIDataDrinking::OpenWin() {
    return false;
}

bool UMacanUIDataDrinking::OpenPlayerGause() {
    return false;
}

bool UMacanUIDataDrinking::OpenLose() {
    return false;
}

bool UMacanUIDataDrinking::OpenCompanionGause() {
    return false;
}

bool UMacanUIDataDrinking::IsDirtySetPlayerSakeBottleCount(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtySetPlayerSakeAmount(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtySetPlayerGaugeRatio(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtySetCompanionGauge(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtySetAnnaGaugeRatio(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtyPlayWarning(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtyPlayMaruAnim(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtyPlayCutIn(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtyPlayBatsuAnim(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtyOpenCloseCompanionGauge(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtyFadeOutPlayerGause(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtyFadeOutAnnaGause(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtyFadeInPlayerGause(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtyFadeInAnnaGause(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtyDrunkFlash(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtyChangeStateWin(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirtyChangeStateLose(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataDrinking::DrunkFlashOn() {
    return false;
}

bool UMacanUIDataDrinking::DrunkFlashOff() {
    return false;
}

void UMacanUIDataDrinking::DelBfDirtySetPlayerSakeBottleCount() {
}

void UMacanUIDataDrinking::DelBfDirtySetPlayerSakeAmount() {
}

void UMacanUIDataDrinking::DelBfDirtySetPlayerGaugeRatio() {
}

void UMacanUIDataDrinking::DelBfDirtySetCompanionGauge() {
}

void UMacanUIDataDrinking::DelBfDirtySetAnnaGaugeRatio() {
}

void UMacanUIDataDrinking::DelBfDirtyPlayWarning() {
}

void UMacanUIDataDrinking::DelBfDirtyPlayMaruAnim() {
}

void UMacanUIDataDrinking::DelBfDirtyPlayCutIn() {
}

void UMacanUIDataDrinking::DelBfDirtyPlayBatsuAnim() {
}

void UMacanUIDataDrinking::DelBfDirtyOpenCloseCompanionGauge() {
}

void UMacanUIDataDrinking::DelBfDirtyFadeOutPlayerGause() {
}

void UMacanUIDataDrinking::DelBfDirtyFadeOutAnnaGause() {
}

void UMacanUIDataDrinking::DelBfDirtyFadeInPlayerGause() {
}

void UMacanUIDataDrinking::DelBfDirtyFadeInAnnaGause() {
}

void UMacanUIDataDrinking::DelBfDirtyDrunkFlash() {
}

void UMacanUIDataDrinking::DelBfDirtyChangeStateWin() {
}

void UMacanUIDataDrinking::DelBfDirtyChangeStateLose() {
}

bool UMacanUIDataDrinking::CloseWin() {
    return false;
}

bool UMacanUIDataDrinking::ClosePlayerGause() {
    return false;
}

bool UMacanUIDataDrinking::CloseLose() {
    return false;
}

bool UMacanUIDataDrinking::CloseCompanionGause() {
    return false;
}


