#include "AuthSequencePlayer.h"

AAuthSequencePlayer::AAuthSequencePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Sound = NULL;
    this->AutoPlay = false;
    this->DiEventEffectOnly = false;
    this->FixedFrame = false;
    this->FixedFrameEnablePlaySpeed = false;
    this->FixedFrameEnable60fps = false;
    this->DrawPlayInfo = false;
    this->HideSubtitles = false;
    this->HideTelops = false;
    this->MaxFPS30 = false;
    this->m_AudioComponent = NULL;
    this->m_PlayFrame = NULL;
    this->listener = NULL;
}

void AAuthSequencePlayer::AudioPlaybackPercent(const USoundWave* PlayingSoundWave, const float PlaybackPercent) {
}


