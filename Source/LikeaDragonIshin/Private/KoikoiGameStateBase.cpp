#include "KoikoiGameStateBase.h"

AKoikoiGameStateBase::AKoikoiGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->blurEffect = NULL;
}

void AKoikoiGameStateBase::UpdateBlueEffect(float DeltaTime) {
}

void AKoikoiGameStateBase::PlayBlurEffect() {
}


