#include "DiEventElementPlayComponent.h"
#include "DvEffectData.h"

UDiEventElementPlayComponent::UDiEventElementPlayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraIndex = 0;
    this->m_DvEffectData = CreateDefaultSubobject<UDvEffectData>(TEXT("DvEffectData"));
    this->m_DiEventSequenceActor = NULL;
    this->m_CurrentFrame = 0.00f;
    this->m_IsAnimNotifyPlay = false;
    this->m_EffectOpacity = 1.00f;
}

void UDiEventElementPlayComponent::SkipElement(ADiEventSequenceActor* di_event_sequence_actor, const FString& level_prefix, UObject* WorldContextObject, int32 camera_index, float jump_frame, bool jump_backword) {
}

void UDiEventElementPlayComponent::OnElementRepeat(const FString& element_guid, const FString& Type) {
}

void UDiEventElementPlayComponent::CreateDiEventElementEdit(ULevelSequencePlayer* sequence_player, ADiEventSequenceActor* di_event_sequence_actor, const FString& level_prefix, UObject* WorldContextObject, int32 camera_index, float jump_frame) {
}

void UDiEventElementPlayComponent::CreateDiEventElement(ADiEventSequenceActor* di_event_sequence_actor, const FString& level_prefix, UObject* WorldContextObject, int32 camera_index) {
}

void UDiEventElementPlayComponent::CloseDiEventElement(ADiEventSequenceActor* di_event_sequence_actor) {
}


