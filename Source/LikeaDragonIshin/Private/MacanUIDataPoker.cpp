#include "MacanUIDataPoker.h"

UMacanUIDataPoker::UMacanUIDataPoker() {
    this->sankakuCursol = 0;
    this->cpuNames.AddDefaulted(3);
    this->playerChips.AddDefaulted(4);
    this->playerBetChips.AddDefaulted(4);
    this->playerTotalBetChips.AddDefaulted(4);
    this->playerChipCountUp = false;
    this->setChipNum = 0;
    this->selectionIsCheck = false;
    this->selectionIsBet = false;
    this->selectionRaiseChip = 0;
    this->selectionCallChip = 0;
    this->selectionCursol = 0;
    this->playerSelectedAction = EPokerAction::Bet;
    this->nonPlayerSelectedAction.AddDefaulted(3);
    this->roundNum = 0;
    this->addChipNum = 0;
    this->chipAnimType = EPokerChipAnimation::Big;
    this->animHand = EPokerHandCombination::buta;
    this->cpuMessages.AddDefaulted(3);
    this->continueCursol = 0;
    this->dealerNum = 0;
    this->structureLeft = 0;
    this->structureRight = 0;
    this->activeSeatIndex = 0;
}

void UMacanUIDataPoker::UpdateSankakuCursol(int32 cursol) {
}

bool UMacanUIDataPoker::UpdatePlayerTotalBet(int32 seatNum, int32 Total) {
    return false;
}

bool UMacanUIDataPoker::UpdatePlayerName(FText Name) {
    return false;
}

bool UMacanUIDataPoker::UpdatePlayerChip(int32 seatNum, int32 chip, bool countUp) {
    return false;
}

bool UMacanUIDataPoker::UpdatePlayerBet(int32 seatNum, int32 bet) {
    return false;
}

bool UMacanUIDataPoker::UpdateCPUName(int32 cpuNumber, FText Name) {
    return false;
}

bool UMacanUIDataPoker::UpdateActionSelectionCursol(int32 cursolPos) {
    return false;
}

bool UMacanUIDataPoker::StructureAndRoundShow() {
    return false;
}

bool UMacanUIDataPoker::StructureAndRoundHide() {
    return false;
}

bool UMacanUIDataPoker::SetStructure(int32 Left, int32 Right) {
    return false;
}

bool UMacanUIDataPoker::SetSeat(int32 Index) {
    return false;
}

void UMacanUIDataPoker::SetPrintShowDown(bool flag) {
}

void UMacanUIDataPoker::SetPrintEndRound(bool flag) {
}

bool UMacanUIDataPoker::SetDealer(int32 dealer) {
    return false;
}

bool UMacanUIDataPoker::SetChip(int32 chip) {
    return false;
}

bool UMacanUIDataPoker::RoundUpdate(int32 Round) {
    return false;
}

bool UMacanUIDataPoker::ResetChip() {
    return false;
}

bool UMacanUIDataPoker::PrintShowDown() {
    return false;
}

bool UMacanUIDataPoker::PrintEndRound() {
    return false;
}

bool UMacanUIDataPoker::PlayResultAnim(EPokerHandCombination Hand, TArray<int32> seatNum) {
    return false;
}

bool UMacanUIDataPoker::PlayerSelectedActionShow(EPokerAction Action) {
    return false;
}

bool UMacanUIDataPoker::PlayerSelectedActionHide() {
    return false;
}

bool UMacanUIDataPoker::PlayCPUMessage(int32 cpuNum, FText text) {
    return false;
}

bool UMacanUIDataPoker::OutPlayerPlate() {
    return false;
}

void UMacanUIDataPoker::OpenSankaku() {
}

bool UMacanUIDataPoker::OpenActionSelection(bool isCheck, bool isBet, int32 raiseChip, int32 callChip) {
    return false;
}

bool UMacanUIDataPoker::NonPlayerSelectedActionShow(EPokerAction Action, int32 playerNum) {
    return false;
}

bool UMacanUIDataPoker::NonPlayerSelectedActionHide(int32 playerNum) {
    return false;
}

bool UMacanUIDataPoker::IsNeedUpdateThisUI(EPokerUI uiType, EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataPoker::IsNeedUpdate(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataPoker::InPlayerPlate() {
    return false;
}

bool UMacanUIDataPoker::FoldSelectedHide() {
    return false;
}

void UMacanUIDataPoker::FinishUpdateUI(EPokerUI uiType) {
}

void UMacanUIDataPoker::DecideSankaku() {
}

bool UMacanUIDataPoker::DecideActionSelection() {
    return false;
}

bool UMacanUIDataPoker::CountDownChip() {
    return false;
}

bool UMacanUIDataPoker::ContinurChoiceUpdate(int32 cursol) {
    return false;
}

bool UMacanUIDataPoker::ContinurChoiceOpen() {
    return false;
}

bool UMacanUIDataPoker::ContinurChoiceDecide() {
    return false;
}

FVector2D UMacanUIDataPoker::CalcCPUMessagePos(FVector2D Pos) {
    return FVector2D{};
}

bool UMacanUIDataPoker::AddChip(int32 addNum, EPokerChipAnimation anim) {
    return false;
}


