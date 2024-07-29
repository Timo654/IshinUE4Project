#include "MacanUserWidget_BtlMain.h"

UMacanUserWidget_BtlMain::UMacanUserWidget_BtlMain() {
    this->BtlLauncher = NULL;
    this->BtlWeapon = NULL;
    this->BtlRengeki = NULL;
    this->BtlBuffDebuff = NULL;
    this->BtlResult = NULL;
    this->BtlAdmirable = NULL;
    this->BtlLevel_S = NULL;
    this->BtlLevel_A = NULL;
    this->canvas_zetsugi = NULL;
    this->BtlKillCounter = NULL;
    this->wbp_zetsugi_aim_class = NULL;
}

void UMacanUserWidget_BtlMain::VisibleOn() {
}

void UMacanUserWidget_BtlMain::VisibleOff() {
}

void UMacanUserWidget_BtlMain::OnUpdateValuation(EBtlValuation valuation) {
}

void UMacanUserWidget_BtlMain::OnUpdateScore(int32 rank) {
}

void UMacanUserWidget_BtlMain::OnRengekiUpdate(int32 Count) {
}

void UMacanUserWidget_BtlMain::OnRengekiReset() {
}

void UMacanUserWidget_BtlMain::OnPlayAdmirable() {
}

void UMacanUserWidget_BtlMain::OnKillCounterUpdate(int32 Count) {
}

void UMacanUserWidget_BtlMain::OnInputStateUpdate(FInputState in_state) {
}

void UMacanUserWidget_BtlMain::OnCardStatusUpdate(const FTaishiCardStatusList& card_status_list) {
}

void UMacanUserWidget_BtlMain::OnCardDataUpdate(const FTaishiCardDataList& card_data_list, bool isInitialize, EBtlStyle InitStyle) {
}

void UMacanUserWidget_BtlMain::OnBuffGain(EBtlBuffDebuffStatsType Type, float gauge_val) {
}

void UMacanUserWidget_BtlMain::KillCountOn() {
}

void UMacanUserWidget_BtlMain::KillCountOff() {
}

bool UMacanUserWidget_BtlMain::isPlayingScoreValuation() const {
    return false;
}

bool UMacanUserWidget_BtlMain::isPlayingAdmirable() const {
    return false;
}

void UMacanUserWidget_BtlMain::abortScoreValuation() {
}

void UMacanUserWidget_BtlMain::abortPlayAdmirable() {
}


