#include "OichokabuPlayerActor.h"

AOichokabuPlayerActor::AOichokabuPlayerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerController = NULL;
    this->State = EOichokabuPlayerStatus::OPS_None;
    this->cursolNum = 0;
    this->betCoin = 0;
    this->betCoinCursol = 0;
    this->maxBetCoinRank = 3;
    this->isDraw = EOichokabuDrawChoices::Draw;
    this->isContinue = false;
    this->ableShiroku = false;
}

void AOichokabuPlayerActor::UnBindMouse() {
}

void AOichokabuPlayerActor::SelectDuelPlayer(TArray<int32> indexs, TArray<FVector> Poses, TArray<AKoikoiCard*> selectable) {
}

void AOichokabuPlayerActor::SelectContinue() {
}

void AOichokabuPlayerActor::FirstChoiceDecide() {
}

void AOichokabuPlayerActor::DuelPlayerDecide() {
}

void AOichokabuPlayerActor::DuelCancel() {
}

void AOichokabuPlayerActor::DrawChoiceDecide() {
}

void AOichokabuPlayerActor::DecideContinue() {
}

void AOichokabuPlayerActor::BetCoinDecide() {
}

void AOichokabuPlayerActor::BetCoinChange(bool isRaise) {
}


