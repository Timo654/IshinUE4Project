#include "PokerNonPlayer.h"

APokerNonPlayer::APokerNonPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ForbidAction.AddDefaulted(3);
}


void APokerNonPlayer::SetCPUData(const FPokerCPU& inData) {
}


