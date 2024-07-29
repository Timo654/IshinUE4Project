#include "HumanSoundComponent.h"

UHumanSoundComponent::UHumanSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerHuman = NULL;
}

void UHumanSoundComponent::UnLoadDramaScanner() {
}

void UHumanSoundComponent::StopDramaScanner() {
}

void UHumanSoundComponent::SetTimeDramaScanner(float Time, float Delay) {
}

void UHumanSoundComponent::RequestDramaScanner(const FName& Name) {
}

void UHumanSoundComponent::ReleaseExpression() {
}

UCueObject* UHumanSoundComponent::PrepareAndPlayVoice(USoundAtomCue* Cue, bool ignore_pos) {
    return NULL;
}

void UHumanSoundComponent::LoadDramaScanner(const FName& Name) {
}

bool UHumanSoundComponent::IsLoadedDramaScanner(const FName& Name) {
    return false;
}

bool UHumanSoundComponent::IsExpressionPlaying() {
    return false;
}

bool UHumanSoundComponent::IsExpressionPlayerPlaying() {
    return false;
}

bool UHumanSoundComponent::IsDramaScannerPlaying() {
    return false;
}

void UHumanSoundComponent::FinishExpression() {
}


