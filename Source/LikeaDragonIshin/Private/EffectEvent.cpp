#include "EffectEvent.h"

AEffectEvent::AEffectEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AEffectEvent::Stop(EEffectEventType Type) {
}

void AEffectEvent::SetTransform(EEffectEventType Type, const FTransform& Transform) {
}

void AEffectEvent::Play(EEffectEventType Type, bool is_loop) {
}

bool AEffectEvent::IsPlay(EEffectEventType Type) {
    return false;
}

bool AEffectEvent::IsLoop(EEffectEventType Type) {
    return false;
}

bool AEffectEvent::IsEnd(EEffectEventType Type) {
    return false;
}


