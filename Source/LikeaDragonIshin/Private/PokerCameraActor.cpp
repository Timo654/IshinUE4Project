#include "PokerCameraActor.h"

APokerCameraActor::APokerCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->cameraType = EPokerCameraType::Default;
    this->nextCameraType = EPokerCameraType::Default;
    this->isAnimation = false;
    this->lerpValue = 0.00f;
}

void APokerCameraActor::SetCameraTransform(FVector Pos, FVector intoffset, FVector Up) {
}

void APokerCameraActor::ChangeCameraType(EPokerCameraType Type) {
}

bool APokerCameraActor::AnimLerpUpdate(float DeltaTime) {
    return false;
}


