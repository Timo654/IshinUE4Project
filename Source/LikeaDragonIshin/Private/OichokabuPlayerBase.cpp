#include "OichokabuPlayerBase.h"

AOichokabuPlayerBase::AOichokabuPlayerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->maxBet = 0;
}

void AOichokabuPlayerBase::SetMaxBet(int32 Value) {
}

void AOichokabuPlayerBase::Parent_ChoiceCard() {
}

FText AOichokabuPlayerBase::GetPlayerName() const {
    return FText::GetEmpty();
}

void AOichokabuPlayerBase::FirstChoiceCard() {
}

void AOichokabuPlayerBase::FirstCardChoice(TArray<AKoikoiCard*> selectableCards) {
}

void AOichokabuPlayerBase::DuelVoice() {
}

void AOichokabuPlayerBase::DrawCardChoice(int32 Number, bool isArashiReach, bool shirokuNoNige) {
}

void AOichokabuPlayerBase::BattleStartVoice() {
}

void AOichokabuPlayerBase::AttributeVoicePlay(EOichokabuAttribute Attribute) {
}


