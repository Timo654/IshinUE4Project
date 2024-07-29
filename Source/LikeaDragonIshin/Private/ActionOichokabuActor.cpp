#include "ActionOichokabuActor.h"

AActionOichokabuActor::AActionOichokabuActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameMode = NULL;
    this->GameState = EOichokabuGameState::OGS_Innitialize;
    this->childCardSelectPlayers.AddDefaulted(4);
    this->playerSelectFieldNum.AddDefaulted(4);
    this->nowPlayer = NULL;
    this->parentNumber = 0;
    this->turnPlayerNumber = 0;
    this->playerFieldNumber = 0;
    this->playerNumber = 4;
    this->maxBetNums.AddDefaulted(3);
    this->FirstSelectWaitTime = 0.40f;
    this->m_dwStartKiryuMoney = 0;
    this->isFirstPlay = false;
}

void AActionOichokabuActor::UnBindMouseActionCallBack() {
}

void AActionOichokabuActor::StartRuleExplanation() {
}

void AActionOichokabuActor::RestartGame() {
}

void AActionOichokabuActor::PrintOperationExplanation() {
}

int32 AActionOichokabuActor::PlayerFirstCardChoiced(AKoikoiCard* selected, const TArray<AKoikoiCard*>& fieldDeck) {
    return 0;
}

TArray<AKoikoiCard*> AActionOichokabuActor::PlayerBetStart(TArray<AKoikoiCard*> deck) {
    return TArray<AKoikoiCard*>();
}

void AActionOichokabuActor::ParentDecide() {
}




void AActionOichokabuActor::OnClickCustom_(int32 Parent, int32 Index) {
}


void AActionOichokabuActor::NextParent() {
}




void AActionOichokabuActor::MouseOverCustom_(int32 Parent, int32 Index) {
}


bool AActionOichokabuActor::IsSequenceChange() {
    return false;
}

bool AActionOichokabuActor::IsPlayerParent() const {
    return false;
}

void AActionOichokabuActor::InitPlayers() {
}

TArray<int32> AActionOichokabuActor::GetSelectedChildIndex() const {
    return TArray<int32>();
}

TArray<FText> AActionOichokabuActor::GetPlayersName() const {
    return TArray<FText>();
}

int32 AActionOichokabuActor::GetMoney() {
    return 0;
}

EOichokabuLevel AActionOichokabuActor::GetEnemyLv() {
    return EOichokabuLevel::OL_Easy;
}

void AActionOichokabuActor::FinishGameUpdate() {
}

void AActionOichokabuActor::FinishGame() {
}

int32 AActionOichokabuActor::FieldOwnerPlayerNumber(int32 Field) const {
    return 0;
}

bool AActionOichokabuActor::Duel(EOichokabuAttribute ParentAttribute, EOichokabuAttribute childAttribute) {
    return false;
}

bool AActionOichokabuActor::ChkPause() {
    return false;
}

bool AActionOichokabuActor::CheckHasan() {
    return false;
}

void AActionOichokabuActor::ChangeState(EOichokabuGameState State) {
}

void AActionOichokabuActor::BindMouseActionCallBackSelectContinue() {
}

void AActionOichokabuActor::BindMouseActionCallBackFirstMenu() {
}

void AActionOichokabuActor::BindMouseActionCallBackDrawChoice() {
}

void AActionOichokabuActor::AddWin(EOichokabuLevel lv) {
}

int32 AActionOichokabuActor::AddMoney(int32 Money) {
    return 0;
}


