#include "EffectFlowWater.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SmoothNoiseTextureComponent.h"

AEffectFlowWater::AEffectFlowWater(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("USceneComponent"));
    this->Root = (USceneComponent*)RootComponent;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->DummyPlane = NULL;
    this->NoiseTexture = CreateDefaultSubobject<USmoothNoiseTextureComponent>(TEXT("NoiseTexture"));
    this->SeedTexture = NULL;
    this->SeedMaterial = NULL;
    this->PerlinNoiseTexture = NULL;
    this->PerlinNoiseMaterial = NULL;
    this->WaterMapTexture = NULL;
    this->WaterMapMaterial = NULL;
    this->IsUseAutoNormalMap = false;
    this->RandomSeed = 0;
    this->RandomNormalScale = 8.00f;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

UTextureRenderTarget2D* AEffectFlowWater::GetWaterMapTexture() {
    return NULL;
}

UStaticMeshComponent* AEffectFlowWater::GetStaticMeshComponent() {
    return NULL;
}

UTextureRenderTarget2D* AEffectFlowWater::GetSeedTexture() {
    return NULL;
}

UTextureRenderTarget2D* AEffectFlowWater::GetPerlinNoiseTexture() {
    return NULL;
}

UTextureRenderTarget2D* AEffectFlowWater::GetNoiseTexture() {
    return NULL;
}


