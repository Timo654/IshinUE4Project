#include "HactSequenceCtrl.h"

AHactSequenceCtrl::AHactSequenceCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CameraMotionOutActor = NULL;
    this->m_CameraMotionSequence = NULL;
    this->m_pTunagiCamera = NULL;
    this->m_PlayFrame = NULL;
    this->m_SystemSettings = NULL;
    this->m_AuthSequenceCtrl = NULL;
    this->m_AuthSoundCtrl = NULL;
    this->m_dbg_listener = NULL;
}

void AHactSequenceCtrl::CompletedGame() {
}


