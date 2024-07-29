#include "CueObject.h"

UCueObject::UCueObject() {
}

void UCueObject::Stop(bool is_immediate) {
}

void UCueObject::SetVolume(float vol) {
}

void UCueObject::SetSpeedRatio(float freq_ratio) {
}

void UCueObject::SetPos(FVector v_pos) {
}

void UCueObject::SetPanCh(int32 ch, float pan) {
}

void UCueObject::SetPan(float pan) {
}

void UCueObject::Resume() {
}

void UCueObject::Play() {
}

void UCueObject::Pause() {
}

bool UCueObject::IsRequestOrPlaying() const {
    return false;
}

bool UCueObject::IsPrepared() {
    return false;
}

bool UCueObject::IsPlaying(bool is_true_if_preparing) const {
    return false;
}

bool UCueObject::IsPaused() const {
    return false;
}

float UCueObject::GetVolume() const {
    return 0.0f;
}

float UCueObject::GetTotalSeconds() const {
    return 0.0f;
}

float UCueObject::GetTotalFrames() const {
    return 0.0f;
}

FVector UCueObject::GetPos() const {
    return FVector{};
}

int32 UCueObject::GetPlayTimemMillisecond() const {
    return 0;
}

float UCueObject::GetPlayFrame() const {
    return 0.0f;
}

float UCueObject::GetCurrentSecond() const {
    return 0.0f;
}

int32 UCueObject::GetCurrentSample() const {
    return 0;
}


