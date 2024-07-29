#include "MinigameNichibuMotionCamera.h"

AMinigameNichibuMotionCamera::AMinigameNichibuMotionCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_cameraSequenceActor = NULL;
    this->m_sequencePlayer = NULL;
}

void AMinigameNichibuMotionCamera::OnPlayFinishSequence() {
}

void AMinigameNichibuMotionCamera::LoadFinishSequence() {
}

void AMinigameNichibuMotionCamera::LoadCameraMotion(FSoftObjectPath FilePath) {
}


