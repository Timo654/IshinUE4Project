#include "HactSequencePlayer.h"

AHactSequencePlayer::AHactSequencePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CamNum = 0;
    this->AutoPlay = false;
    this->DiEventEffectOnly = false;
    this->FixedFrame = false;
    this->DrawPlayInfo = false;
    this->m_PlayFrame = NULL;
}


