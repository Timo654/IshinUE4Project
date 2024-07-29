#include "PokerPlayerBase.h"

APokerPlayerBase::APokerPlayerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ForbidAction.AddDefaulted(3);
    this->UIData = NULL;
}

void APokerPlayerBase::SetUiData(UMacanUIDataPoker* Data) {
}

int32 APokerPlayerBase::GetSeatNum() const {
    return 0;
}


