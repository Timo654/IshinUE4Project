#include "MahjongPaiBase.h"

AMahjongPaiBase::AMahjongPaiBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mid = NULL;
    this->IsDark = false;
    this->IsPlayerPai = false;
    this->PlayerTehaiIndex = -1;
    this->paiID = -1;
}



