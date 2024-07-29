#include "HumanEventComponent.h"

UHumanEventComponent::UHumanEventComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHumanEventComponent::Stop(EHumanEventType Type) {
}

void UHumanEventComponent::Play(EHumanEventType Type, bool is_loop) {
}

bool UHumanEventComponent::IsPlay(EHumanEventType Type) {
    return false;
}

bool UHumanEventComponent::IsLoop(EHumanEventType Type) {
    return false;
}


