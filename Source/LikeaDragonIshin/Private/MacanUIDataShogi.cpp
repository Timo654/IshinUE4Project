#include "MacanUIDataShogi.h"

UMacanUIDataShogi::UMacanUIDataShogi() {
    this->PlayerThinkTime = 0.00f;
    this->IsUsedSuperMatta = false;
    this->MattaCount = 0;
    this->MyLevel = EUIShogiLevel::None;
    this->MyInfoWindowState = EUIState::NotSet;
    this->EnemyNameType = EUIShogiEnemyName::Juubee;
    this->EnemyLevel = EUIShogiLevel::None;
    this->EnemyHaveThinkTime = 0.00f;
    this->EnemyThinkProgressTime = 0.00f;
    this->EnemyThinkMaxTime = 0.00f;
    this->EnemyInfoWindowState = EUIState::NotSet;
    this->TeCount = 0;
    this->SuperMattaModeState = EUIState::NotSet;
    this->SuperMattaWindowState = EUIState::NotSet;
    this->SuperMattaCount = 0;
    this->SuperMattaArrowAnimType = EUIShogiArrowAnimType::None;
    this->CurrentTesuu = 0;
    this->IsSuperMattaMode = false;
    this->IsOnMatta = false;
    this->IsOnTimer = false;
    this->CurrentSelectItem = 0;
    this->RuleWindowState = EUIState::NotSet;
    this->DecidedRule = false;
    this->DispHandState = EUIState::NotSet;
    this->IsMouseControll = false;
    this->ButtonGuideState = EUIState::NotSet;
    this->GuideButtonType = EWBPButtoniconType::PS4_Sankaku;
    this->SelectWindowState = EUIState::NotSet;
    this->SelectMessageType = EUIShogiSelectMessageType::YesNo;
    this->isSelectSuperMatta = false;
    this->isOpenSelectWindow = false;
    this->WindowState = EUIState::NotSet;
    this->SelectWindowCursor = 0;
    this->IsUpdateSelectWindowCursor = false;
    this->EnterSelectWindow = false;
    this->IsUpdateSelectWindow = false;
    this->IsUpdateEnterSelectWindow = false;
    this->CommonBackWindow = EUIState::NotSet;
    this->CommonWindowMessageType = EUIShogiCommonWindowMessageType::None;
    this->LimitTesuuCount = 0;
    this->CutInBackState = EUIState::NotSet;
    this->CutInSentenceState = EUIState::NotSet;
    this->CutInMessageType = EUIShogiCutInMessageType::None;
    this->CurrentModeState = EUIState::NotSet;
    this->IsShiren = false;
    this->RemainTimeCutInState = EUIState::NotSet;
    this->RemainTimeCutInTime = 0.00f;
    this->HandKomaState = EUIState::NotSet;
    this->MouseTouchAreaState = EUIState::NotSet;
}

void UMacanUIDataShogi::UpdateHandPosition(float X, float Y) {
}

void UMacanUIDataShogi::ShowHand() {
}

void UMacanUIDataShogi::ShowButtonGuide() {
}

void UMacanUIDataShogi::SetSelectWindowCursor(int32 Index) {
}

void UMacanUIDataShogi::SetSelectRuleWindow(bool isMatta, bool isTimer, int32 currentItem) {
}

void UMacanUIDataShogi::SetPlayerInfo(float Time, bool isSuperMatta, int32 mattaNum, EUIShogiLevel Level) {
}

void UMacanUIDataShogi::SetEnemyInfo(float haveTime, float thinkTime, float thinkMaxTime, EUIShogiLevel Level, EUIShogiEnemyName nameType) {
}

void UMacanUIDataShogi::SetCurrentMode(bool shiren) {
}

void UMacanUIDataShogi::SetButtonGuide(int32 Type) {
}

void UMacanUIDataShogi::PlaySuperMattaArrow(EUIShogiArrowAnimType arrowType) {
}

void UMacanUIDataShogi::PlaySoundCursor2() {
}

void UMacanUIDataShogi::PlaySoundCursor1() {
}

void UMacanUIDataShogi::PlayCutin(EUIShogiCutInMessageType Type) {
}

void UMacanUIDataShogi::OpenSuperMattaWindow() {
}

void UMacanUIDataShogi::OpenSelectWindow(EUIShogiSelectMessageType Type) {
}

void UMacanUIDataShogi::OpenSelectRuleWindow() {
}

void UMacanUIDataShogi::OpenRemainTimeCutIn() {
}

void UMacanUIDataShogi::OpenPlayerInfo() {
}

void UMacanUIDataShogi::OpenMode() {
}

void UMacanUIDataShogi::OpenEnemyInfo() {
}

void UMacanUIDataShogi::OpenCommonMessageWindow(EUIShogiCommonWindowMessageType Type, int32 limitTesuu) {
}

bool UMacanUIDataShogi::IsDirtySuperMattaWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogi::IsDirtySelectWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogi::IsDirtyRuleWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogi::IsDirtyRemainTimeCutIn(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogi::IsDirtyPlayerInfo(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogi::IsDirtyMouseTouchArea(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogi::IsDirtyHandKoma(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogi::IsDirtyHand(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogi::IsDirtyGuideButton(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogi::IsDirtyEnemyInfo(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogi::IsDirtyCutIn(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogi::IsDirtyCurrentMode(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogi::IsDirtyCommonMessageWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataShogi::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataShogi::HideHand() {
}

void UMacanUIDataShogi::HideButtonGuide() {
}

void UMacanUIDataShogi::EnterSelectWindowCursor() {
}

void UMacanUIDataShogi::DelBfDirtySuperMattaWindow() {
}

void UMacanUIDataShogi::DelBfDirtySelectWindow() {
}

void UMacanUIDataShogi::DelBfDirtyRuleWindow() {
}

void UMacanUIDataShogi::DelBfDirtyRemainTimeCutIn() {
}

void UMacanUIDataShogi::DelBfDirtyPlayerInfo() {
}

void UMacanUIDataShogi::DelBfDirtyMouseArea() {
}

void UMacanUIDataShogi::DelBfDirtyHandKoma() {
}

void UMacanUIDataShogi::DelBfDirtyHand() {
}

void UMacanUIDataShogi::DelBfDirtyGuideButton() {
}

void UMacanUIDataShogi::DelBfDirtyEnemyInfo() {
}

void UMacanUIDataShogi::DelBfDirtyCutIn() {
}

void UMacanUIDataShogi::DelBfDirtyCurrentMode() {
}

void UMacanUIDataShogi::DelBfDirtyCommonMessageWindow() {
}

void UMacanUIDataShogi::DecideFinishSelectWindow() {
}

void UMacanUIDataShogi::CloseSuperMattaWindow() {
}

void UMacanUIDataShogi::CloseSelectWindow() {
}

void UMacanUIDataShogi::CloseSelectRuleWindow() {
}

void UMacanUIDataShogi::CloseRemainTimeCutIn() {
}

void UMacanUIDataShogi::ClosePlayerInfo() {
}

void UMacanUIDataShogi::CloseMode() {
}

void UMacanUIDataShogi::CloseEnemyInfo() {
}

void UMacanUIDataShogi::CloseCutIn() {
}

void UMacanUIDataShogi::CloseCommonMessageWindow() {
}


