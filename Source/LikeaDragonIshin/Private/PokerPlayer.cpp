#include "PokerPlayer.h"

APokerPlayer::APokerPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ForbidAction.AddDefaulted(3);
    this->m_plistener = NULL;
}


