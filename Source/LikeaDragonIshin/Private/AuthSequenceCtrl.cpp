#include "AuthSequenceCtrl.h"

AAuthSequenceCtrl::AAuthSequenceCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_InternalSoundCtrl = NULL;
    this->m_ExternalSoundCtrl = NULL;
    this->m_PlayFrame = NULL;
    this->m_OutActor = NULL;
    this->m_CurrentCutSequence = NULL;
    this->m_dbg_listener = NULL;
}

void AAuthSequenceCtrl::CompletedProp() {
}

void AAuthSequenceCtrl::CompletedMain() {
}

void AAuthSequenceCtrl::CompletedEffect() {
}

void AAuthSequenceCtrl::CompletedChara() {
}


