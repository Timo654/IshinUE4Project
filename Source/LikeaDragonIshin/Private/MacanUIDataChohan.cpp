#include "MacanUIDataChohan.h"

UMacanUIDataChohan::UMacanUIDataChohan() {
    this->BetChoNum = 0;
    this->BetHanNum = 0;
    this->BetChoPoint = 0;
    this->BetHanPoint = 0;
    this->statePossessionPoint = EUIState::NotSet;
    this->stateBetWindow = EUIState::NotSet;
    this->isAddedBetUser = false;
    this->IsUpdateBetWindow = false;
    this->stateSelectDice = EUIState::NotSet;
    this->IsInitSelectDice = false;
    this->IsCloseSelectDice = false;
    this->IsUpdateSelectDiceCursor = false;
    this->IsUpdateSelectDiceNumber = false;
    this->IsOneDice = false;
    this->IsChangeFirstDice = false;
    this->SelectDiceNumber = 1;
    this->firstDiceNumber = 1;
    this->secondDiceNumber = 1;
    this->stateQuickDemeWindow = EUIState::NotSet;
    this->IsUpdateDemeWindow = false;
    this->stateDemeWindow = EUIState::NotSet;
    this->totalPlayCount = 0;
    this->totalResultChoCount = 0;
    this->totalResultHanCount = 0;
    this->stateSelectMenuWindow = EUIState::NotSet;
    this->stateSelectBetPointWindow = EUIState::NotSet;
    this->IsUpdateBetPoint = false;
    this->EnterBetPoint = false;
    this->IsUpdateBetPointCursor = false;
    this->IsUpdateEnterBetPoint = false;
    this->SelectBetPointCursorPos = 0;
    this->stateTutorialWindow = EUIState::NotSet;
    this->stateTutorialInfoWindow = EUIState::NotSet;
    this->stateSashiRateWindow = EUIState::NotSet;
    this->SashiRatePoint = 0;
    this->stateIkasamaActionWindow = EUIState::NotSet;
    this->SelectionMenuType = EUIChohanSelectionMenuType::BackButton;
    this->IsUpdateSelectMenuCursor = false;
    this->CursorSelectMenu = 0;
    this->EnterSelectMenu = false;
    this->isUpdateEnterSelectMenu = false;
    this->isUpdateTypeSelectMenu = false;
    this->isUpdateItemListSelectMenu = false;
    this->stateBackButton = EUIState::NotSet;
}

bool UMacanUIDataChohan::VisibleSelectMenuWindow() {
    return false;
}

bool UMacanUIDataChohan::VisibleSelectDiceWindow() {
    return false;
}

bool UMacanUIDataChohan::VisibleBetWindow() {
    return false;
}

void UMacanUIDataChohan::UpdateSelectDiceWindow(int32 diceNumber) {
}

void UMacanUIDataChohan::UpdateSelectDiceCursor() {
}

bool UMacanUIDataChohan::UpdateSelectBetPointWindow(FChohanBetPointInfo Info) {
    return false;
}

bool UMacanUIDataChohan::SetupSelectMenu(EUIChohanSelectionMenuType menuType) {
    return false;
}

bool UMacanUIDataChohan::SetSelectMenuCursor(int32 Index) {
    return false;
}

bool UMacanUIDataChohan::SetSashiBattlePossessionPoint(int32 Point) {
    return false;
}

bool UMacanUIDataChohan::SetPossessionPoint(int32 Point) {
    return false;
}

void UMacanUIDataChohan::SetKiryuPoint(bool IsCho, int32 Point) {
}

void UMacanUIDataChohan::SetBackButtonState(EUIState State) {
}

void UMacanUIDataChohan::SetAddBetUser(FChohanUserStatusInfo UserStatusInfo) {
}

void UMacanUIDataChohan::ResetKiryuPoint() {
}

void UMacanUIDataChohan::RemoveKiryuData() {
}

bool UMacanUIDataChohan::OpenSelectMenuWindow(EUIChohanSelectionMenuType menuType) {
    return false;
}

bool UMacanUIDataChohan::OpenSelectDiceWindow(bool oneDice) {
    return false;
}

bool UMacanUIDataChohan::OpenSelectBetPointWindow(FChohanBetPointInfo Info) {
    return false;
}

bool UMacanUIDataChohan::OpenSashiBattlePossessionPointWindow() {
    return false;
}

bool UMacanUIDataChohan::OpenQuickDemeWindow() {
    return false;
}

bool UMacanUIDataChohan::OpenPossessionPoint() {
    return false;
}

bool UMacanUIDataChohan::OpenDemeWindow(int32 playCount, int32 choCount, int32 hanCount) {
    return false;
}

bool UMacanUIDataChohan::OpenBetWindow() {
    return false;
}

bool UMacanUIDataChohan::IsDirtyTutorialWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataChohan::IsDirtyTutorialInfoWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataChohan::IsDirtySelfPoint(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataChohan::IsDirtySelectDiceWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataChohan::IsDirtySelectBetPointWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataChohan::IsDirtySashiRateWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataChohan::IsDirtyQuickDemeWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataChohan::IsDirtyMenu(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataChohan::IsDirtyIkasamaActionWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataChohan::IsDirtyDemeWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataChohan::IsDirtyBetWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataChohan::IsDirtyBackButton(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataChohan::IsDirtyAddedBetUser(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataChohan::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataChohan::IsAllFinishAnim() {
    return false;
}

bool UMacanUIDataChohan::HideSelectMenuWindow() {
    return false;
}

bool UMacanUIDataChohan::HideSelectDiceWindow() {
    return false;
}

bool UMacanUIDataChohan::HideBetWindow() {
    return false;
}

int32 UMacanUIDataChohan::GetSelectMenuLastItemNum(EUIChohanSelectionMenuType menuType) {
    return 0;
}

int32 UMacanUIDataChohan::GetChangeBetPointValue() {
    return 0;
}

bool UMacanUIDataChohan::EnterSelectMenuCursor() {
    return false;
}

bool UMacanUIDataChohan::EnterBetPointWindow() {
    return false;
}

void UMacanUIDataChohan::DelBfDirtyTutorialInfo() {
}

void UMacanUIDataChohan::DelBfDirtyTutorial() {
}

void UMacanUIDataChohan::DelBfDirtySelectDice() {
}

void UMacanUIDataChohan::DelBfDirtySelectBetPoint() {
}

void UMacanUIDataChohan::DelBfDirtySahiRate() {
}

void UMacanUIDataChohan::DelBfDirtyQuickDeme() {
}

void UMacanUIDataChohan::DelBfDirtyPossessionPoint() {
}

void UMacanUIDataChohan::DelBfDirtyMenu() {
}

void UMacanUIDataChohan::DelBfDirtyIkasamaAction() {
}

void UMacanUIDataChohan::DelBfDirtyDeme() {
}

void UMacanUIDataChohan::DelBfDirtyBet() {
}

void UMacanUIDataChohan::DelBfDirtyBackButton() {
}

void UMacanUIDataChohan::DelBfDirtyAddedBetUser() {
}

bool UMacanUIDataChohan::CloseSelectMenuWindow() {
    return false;
}

bool UMacanUIDataChohan::CloseSelectDiceWindow() {
    return false;
}

bool UMacanUIDataChohan::CloseSelectBetPointWindow() {
    return false;
}

bool UMacanUIDataChohan::CloseSashiBattlePossessionPointWindow() {
    return false;
}

bool UMacanUIDataChohan::CloseQuickDemeWindow() {
    return false;
}

bool UMacanUIDataChohan::ClosePossessionPoint() {
    return false;
}

bool UMacanUIDataChohan::CloseDemeWindow() {
    return false;
}

bool UMacanUIDataChohan::CloseBetWindow() {
    return false;
}

bool UMacanUIDataChohan::ClearBetUserData() {
    return false;
}

int32 UMacanUIDataChohan::ChangeBetPointCursor(bool isRight) {
    return 0;
}

int32 UMacanUIDataChohan::CastSelectDiceNumber(int32 diceNum) {
    return 0;
}

int32 UMacanUIDataChohan::CastMenuCursorPos(int32 cursorPos) {
    return 0;
}

int32 UMacanUIDataChohan::CastBetPoint(int32 AddPoint) {
    return 0;
}

bool UMacanUIDataChohan::AddDemeWindow(FChohanDemeInfo Info) {
    return false;
}

bool UMacanUIDataChohan::AddBetUserData(FChohanUserStatusInfo UserStatusInfo, UChohanUserStatusWidget* Widget, bool IsCho) {
    return false;
}


