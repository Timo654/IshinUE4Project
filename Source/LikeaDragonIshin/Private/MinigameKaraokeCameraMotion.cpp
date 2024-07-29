#include "MinigameKaraokeCameraMotion.h"

AMinigameKaraokeCameraMotion::AMinigameKaraokeCameraMotion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_cameraSequenceActor = NULL;
    this->m_sequencePlayer = NULL;
}

void AMinigameKaraokeCameraMotion::LoadFinishSequence() {
}

void AMinigameKaraokeCameraMotion::LoadCameraMotion(FSoftObjectPath FilePath) {
}


