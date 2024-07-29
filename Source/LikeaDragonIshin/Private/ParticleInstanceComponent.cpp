#include "ParticleInstanceComponent.h"

UParticleInstanceComponent::UParticleInstanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NiagaraComponent = NULL;
    this->m_cue_object = NULL;
    this->m_time = 0.00f;
    this->m_is_play = false;
    this->m_is_auto_delete = false;
    this->m_is_finished = false;
    this->m_is_set_particle = false;
    this->m_is_event_play = false;
    this->m_is_solo_mode = false;
    this->m_solo_time = 0.00f;
    this->m_is_replay = false;
    this->m_is_disable_pause = false;
    this->m_is_loaded_cuesheet = false;
    this->m_sort_priority = 0;
}

void UParticleInstanceComponent::SetParticleID(FString& ID) {
}

void UParticleInstanceComponent::SetCustomParamVector(const FName& Name, const FVector& Param) {
}

void UParticleInstanceComponent::SetCustomParamFloat(const FName& Name, float Param) {
}

void UParticleInstanceComponent::SetCustomParamBool(const FName& Name, bool Param) {
}

void UParticleInstanceComponent::SetCustomParamArrayVector(const FName& Name, const TArray<FVector>& Params) {
}

void UParticleInstanceComponent::setColor(const FLinearColor& Color) {
}

void UParticleInstanceComponent::SetAutoDelete(bool is_auto_delete) {
}

void UParticleInstanceComponent::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
}

bool UParticleInstanceComponent::IsFinished() {
    return false;
}

bool UParticleInstanceComponent::IsAutoDelete() {
    return false;
}

float UParticleInstanceComponent::GetTime() {
    return 0.0f;
}

UNiagaraComponent* UParticleInstanceComponent::GetNiagaraComponent() {
    return NULL;
}

void UParticleInstanceComponent::DisableSort(bool is_disable) {
}


