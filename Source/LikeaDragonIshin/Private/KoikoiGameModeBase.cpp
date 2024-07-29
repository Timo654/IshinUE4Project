#include "KoikoiGameModeBase.h"

AKoikoiGameModeBase::AKoikoiGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

ERivalLevel AKoikoiGameModeBase::GetLvFlag() {
    return ERivalLevel::RL_Weak;
}


