#include "OichokabuGameStateBase.h"

AOichokabuGameStateBase::AOichokabuGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
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
}

void AOichokabuGameStateBase::RestartGame() {
}

int32 AOichokabuGameStateBase::PlayerFirstCardChoiced(AKoikoiCard* selected, const TArray<AKoikoiCard*>& fieldDeck) {
    return 0;
}

TArray<AKoikoiCard*> AOichokabuGameStateBase::PlayerBetStart(TArray<AKoikoiCard*> deck) {
    return TArray<AKoikoiCard*>();
}

void AOichokabuGameStateBase::ParentDecide() {
}

void AOichokabuGameStateBase::NextParent() {
}

bool AOichokabuGameStateBase::IsPlayerParent() const {
    return false;
}

void AOichokabuGameStateBase::InitPlayers() {
}

TArray<int32> AOichokabuGameStateBase::GetSelectedChildIndex() const {
    return TArray<int32>();
}

TArray<FText> AOichokabuGameStateBase::GetPlayersName() const {
    return TArray<FText>();
}

int32 AOichokabuGameStateBase::FieldOwnerPlayerNumber(int32 Field) const {
    return 0;
}

bool AOichokabuGameStateBase::Duel(EOichokabuAttribute ParentAttribute, EOichokabuAttribute childAttribute) {
    return false;
}

void AOichokabuGameStateBase::ChangeState(EOichokabuGameState State) {
}


