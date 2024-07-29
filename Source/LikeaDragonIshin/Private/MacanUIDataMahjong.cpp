#include "MacanUIDataMahjong.h"

UMacanUIDataMahjong::UMacanUIDataMahjong() {
    this->CenterUserInfoState = EUIState::NotSet;
    this->RuleWindowState = EUIState::NotSet;
    this->RuleSelectCursor = 0;
    this->IsHanchan = false;
    this->IsKuitan = false;
    this->IsNifanShibari = false;
    this->IsAkaDora = false;
    this->CutInMessageType = EUIMahjongCutInMessageType::None;
    this->PonEffectState = EUIState::NotSet;
    this->ChiiEffectState = EUIState::NotSet;
    this->KanEffectState = EUIState::NotSet;
    this->RiichiEffectState = EUIState::NotSet;
    this->TsumoEffectState = EUIState::NotSet;
    this->RonEffectState = EUIState::NotSet;
    this->RyuukyokuEffectState = EUIState::NotSet;
    this->NakiButtonInfoState = EUIState::NotSet;
    this->DialogMessageType = EUIMahjongDialogMessageType::None;
    this->ProgressWindowState = EUIState::NotSet;
    this->GuideNextButtonState = EUIState::NotSet;
    this->GuideBackButtonState = EUIState::NotSet;
    this->ResultWindowState = EUIState::NotSet;
    this->ResultUserWindowState = EUIState::NotSet;
    this->ResultTotalHan = 0;
    this->ResultScore = 0;
    this->ResultFuNum = 0;
    this->IsDispTotalResult = false;
    this->IsMuyaku = false;
    this->IsOpenResultWindow = false;
    this->FinalResultWindowState = EUIState::NotSet;
    this->IsPlayCongratulations = false;
    this->RiichiPaiSupportWindowState = EUIState::NotSet;
    this->MoneyWindowState = EUIState::NotSet;
    this->DispMoney = 0;
    this->RankingWindowState = EUIState::NotSet;
    this->MaxDefendRankingNum = 0;
    this->CurrentDefendRankingNum = 0;
    this->IsUpdateRankingWindow = false;
    this->IsDispRankingSkipButton = false;
    this->IsOpenRankingWindow = false;
    this->IsDispAllWindow = false;
}

void UMacanUIDataMahjong::UpdateRuleWindowCursor(int32 Cursor, bool isHancha, bool isKuita, bool isNifan, bool isAka) {
}

void UMacanUIDataMahjong::UpdateCommandButton(int32 Index, bool IsSelect) {
}

void UMacanUIDataMahjong::SetSelectWindowCursor(int32 Index) {
}

void UMacanUIDataMahjong::SetBeforeAnimType(int32 Index, EUIMahjongRightButtonState State) {
}

void UMacanUIDataMahjong::OpenSelectWindow(EUIMahjongSelectMessageType Type, int32 Cursor) {
}

bool UMacanUIDataMahjong::IsDirtySelectWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMahjong::IsDirtyRuleWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMahjong::IsDirtyRiichiPaiSupportWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMahjong::IsDirtyResultWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMahjong::IsDirtyRankingWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMahjong::IsDirtyProgressWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMahjong::IsDirtyNakiButtonGuide(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMahjong::IsDirtyMoneyWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMahjong::IsDirtyGuideButton(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMahjong::IsDirtyFinalResultWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMahjong::IsDirtyCutInWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMahjong::IsDirtyCenterCharacterInfo(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMahjong::IsDirtyAllWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMahjong::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataMahjong::InitializeUser() {
}

void UMacanUIDataMahjong::InitializeRiichiPaiSupportWindow() {
}

void UMacanUIDataMahjong::InitializeResultWindowUserInfo() {
}

void UMacanUIDataMahjong::InitializeResultTextInfos() {
}

void UMacanUIDataMahjong::InitializeButtonInfos() {
}

void UMacanUIDataMahjong::EnterSelectWindowCursor() {
}

void UMacanUIDataMahjong::DelBfSelectWindow() {
}

void UMacanUIDataMahjong::DelBfRuleWindow() {
}

void UMacanUIDataMahjong::DelBfRiichiPaiSupportWindow() {
}

void UMacanUIDataMahjong::DelBfResultWindow() {
}

void UMacanUIDataMahjong::DelBfRankingWindow() {
}

void UMacanUIDataMahjong::DelBfProgressWindow() {
}

void UMacanUIDataMahjong::DelBfNakiButtonGuide() {
}

void UMacanUIDataMahjong::DelBfMoneyWindow() {
}

void UMacanUIDataMahjong::DelBfGuideButton() {
}

void UMacanUIDataMahjong::DelBfFinalResultWindow() {
}

void UMacanUIDataMahjong::DelBfCutInWindow() {
}

void UMacanUIDataMahjong::DelBfCenterCharacterInfo() {
}

void UMacanUIDataMahjong::DelBfAllWindow() {
}

void UMacanUIDataMahjong::DecideFinishSelectWindow() {
}

void UMacanUIDataMahjong::CloseSelectWindow() {
}

bool UMacanUIDataMahjong::CheckArrowDisp(int32 Index, bool isUp) {
    return false;
}


