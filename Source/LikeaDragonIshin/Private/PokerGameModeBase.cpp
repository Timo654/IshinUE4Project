#include "PokerGameModeBase.h"

APokerGameModeBase::APokerGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Rule = EPokerRule::TexasHoldem;
    this->mode = EPokerMode::Normal;
}


