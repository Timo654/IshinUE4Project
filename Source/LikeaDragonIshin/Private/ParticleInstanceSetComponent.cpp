#include "ParticleInstanceSetComponent.h"

UParticleInstanceSetComponent::UParticleInstanceSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UParticleInstanceSetComponent::SetTablePath(const FSoftObjectPath& table_path) {
}

void UParticleInstanceSetComponent::SetSortPriority(int32 SortPriority) {
}

void UParticleInstanceSetComponent::SetSoloPlay(bool is_enable) {
}

void UParticleInstanceSetComponent::SetEventTime(float Time) {
}

void UParticleInstanceSetComponent::SetEventPlay(bool is_enable) {
}

void UParticleInstanceSetComponent::SetDisablePause(bool is_disable) {
}

void UParticleInstanceSetComponent::SetCustomParamVector(const FName& Name, const FVector& Param) {
}

void UParticleInstanceSetComponent::SetCustomParamFloat(const FName& Name, float Param) {
}

void UParticleInstanceSetComponent::SetCustomParamBool(const FName& Name, bool Param) {
}

void UParticleInstanceSetComponent::SetCustomParamArrayVector(const FName& Name, const TArray<FVector>& Params) {
}

void UParticleInstanceSetComponent::setColor(const FLinearColor& Color) {
}

void UParticleInstanceSetComponent::SetAutoDelete(bool is_auto_delete) {
}

bool UParticleInstanceSetComponent::IsFinished() {
    return false;
}

bool UParticleInstanceSetComponent::IsAutoDelete() {
    return false;
}

float UParticleInstanceSetComponent::GetTime() {
    return 0.0f;
}

TArray<UParticleInstanceComponent*> UParticleInstanceSetComponent::GetParticleInstanceComponents() {
    return TArray<UParticleInstanceComponent*>();
}

void UParticleInstanceSetComponent::DisableSort(bool is_disable) {
}


