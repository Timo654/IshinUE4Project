#include "SceneCaptureBase.h"
#include "Components/SceneComponent.h"

ASceneCaptureBase::ASceneCaptureBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_SceneCaptureComponent2D = NULL;
    this->m_DirectionalLightComponent = NULL;
    this->m_SkeletalMeshComponent = NULL;
}


