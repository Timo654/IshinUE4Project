#include "MacanUIDataKabu.h"

UMacanUIDataKabu::UMacanUIDataKabu() {
    this->firstMenuIndex = 0;
    this->cursolNum = 3;
    this->cardNumberNum = 15;
    this->replayChoiceNum = 2;
    this->betCoins.AddDefaulted(4);
    this->betCoinPrintFlags.AddDefaulted(4);
    this->isBetCoinFlags.AddDefaulted(4);
    this->parentPlayerNumber = 0;
    this->totalValues.AddDefaulted(4);
    this->parentTotalValue = 0;
    this->isPrintParentTotal = false;
    this->currentPlayer = 0;
    this->resultIcons.AddDefaulted(4);
    this->mochiten = 0;
    this->parentOhajikiPlayerNumber = 0;
    this->childOhajikiPlayerNumbers.AddDefaulted(4);
    this->childOhajikiPrintFlags.AddDefaulted(4);
    this->cursolPoses.AddDefaulted(3);
    this->cursolPrintFlags.AddDefaulted(3);
    this->cursolPlayerNumbers.AddDefaulted(3);
    this->cursolLongPrintFlags = false;
    this->cardNumberInfos.AddDefaulted(15);
    this->isWinAnimation = false;
    this->yakuAnimation = EOichokabuAttribute::Buta;
    this->replayCursol = 0;
    this->drawChoiceCursol = 0;
    this->isShirokuChoice = false;
    this->isMessagePrint = false;
    this->cpuMessageCardNum.AddDefaulted(3);
    this->customCursol = 0;
    this->customSwitchs.AddDefaulted(3);
}

bool UMacanUIDataKabu::UpdateParentTotalValue(int32 Total, bool isPrint) {
    return false;
}

bool UMacanUIDataKabu::UpdateParentOhajiki(int32 playerNumber) {
    return false;
}

bool UMacanUIDataKabu::UpdateParent(int32 parentNumber) {
    return false;
}

bool UMacanUIDataKabu::UpdateName(TArray<FText> Names) {
    return false;
}

bool UMacanUIDataKabu::UpdateMochiten(int32 Point) {
    return false;
}

bool UMacanUIDataKabu::UpdateIconResult(int32 child, bool isWin) {
    return false;
}

void UMacanUIDataKabu::UpdateFirstMenuCursol(int32 Index) {
}

void UMacanUIDataKabu::UpdateCustomSwitch(bool flg) {
}

void UMacanUIDataKabu::UpdateCustomCursol(int32 Index) {
}

bool UMacanUIDataKabu::UpdateCursolLong(const FVector2D& Pos, bool isPrint) {
    return false;
}

bool UMacanUIDataKabu::UpdateCursol(int32 cursolIndex, const FVector2D& Pos, bool isPrint, int32 playerNumber) {
    return false;
}

bool UMacanUIDataKabu::UpdateCurrent(int32 Current) {
    return false;
}

bool UMacanUIDataKabu::UpdateChildTotalValue(FText Total, int32 childValue, bool printChildValue) {
    return false;
}

bool UMacanUIDataKabu::UpdateChildOhajiki(int32 playerNumber, bool isPrint, int32 fieldNumber) {
    return false;
}

bool UMacanUIDataKabu::UpdateCardNumber(int32 cardIndex, FOichokabuCardNumberInfo Info) {
    return false;
}

bool UMacanUIDataKabu::UpdateBetCoin(int32 playerNum, int32 betCoin, bool printBetCoin, bool isBetCoin) {
    return false;
}

bool UMacanUIDataKabu::UpdagteReplayChoice(int32 cursolIndex) {
    return false;
}

bool UMacanUIDataKabu::UpdagteDrawChoice(int32 cursolIndex) {
    return false;
}

void UMacanUIDataKabu::ShowUI() {
}

bool UMacanUIDataKabu::PlayYakuAnimation(EOichokabuAttribute yaku) {
    return false;
}

bool UMacanUIDataKabu::PlayResultAnimation(bool isWin) {
    return false;
}

bool UMacanUIDataKabu::PlayerPointCountDownFinish() {
    return false;
}

bool UMacanUIDataKabu::PlayerPointCountDown() {
    return false;
}

void UMacanUIDataKabu::PaySEStop() {
}

void UMacanUIDataKabu::PaySEStart() {
}

bool UMacanUIDataKabu::OpenReplayChoice(int32 cursolIndex) {
    return false;
}

void UMacanUIDataKabu::OpenFirstMenu() {
}

bool UMacanUIDataKabu::OpenDrawChoice(TArray<FWindowChoiceItemInfo> Info, int32 cursolIndex, bool isShiroku) {
    return false;
}

void UMacanUIDataKabu::OpenCustom() {
}

bool UMacanUIDataKabu::LineMessage(bool isPrint, FText text) {
    return false;
}

bool UMacanUIDataKabu::IsNeedUpdateThisUI(EOichokabuUI uiType, EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKabu::IsNeedUpdate(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKabu::FirstInitialize(TArray<FText> Names) {
    return false;
}

void UMacanUIDataKabu::FinishUpdateUI(EOichokabuUI uiType) {
}

bool UMacanUIDataKabu::DecideReplayChoice() {
    return false;
}

void UMacanUIDataKabu::DecideFirstMenu() {
}

bool UMacanUIDataKabu::DecideDrawChoice() {
    return false;
}

bool UMacanUIDataKabu::CPUMessage(int32 cpuNumber, int32 cardNum) {
    return false;
}

void UMacanUIDataKabu::CloseCustom() {
}


