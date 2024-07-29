#include "Particle.h"
#include "Components/SceneComponent.h"

AParticle::AParticle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("USceneComponent"));
    this->Root = (USceneComponent*)RootComponent;
    this->ParticleInstance = NULL;
    this->ParticleInstanceSet = NULL;
    this->SortPriority = 0;
    this->bAutoDelete = false;
    this->bAfterDetachAutoDelete = false;
    this->bDisableSort = false;
    this->bEnemyHit = false;
    this->bEventPlay = false;
    this->bSoloPlay = false;
    this->bXFront = false;
    this->bDisablePause = false;
    this->bLighting = false;
    this->bTaishiEffect = false;
    this->bDraw2D = false;
    this->Draw2DCameraDistance = 15.00f;
    this->Draw2DSceneCapture = NULL;
    this->Draw2DTexture = NULL;
    this->Draw2DPostProcess = NULL;
    this->Draw2DMaterial = NULL;
}

void AParticle::SetXFront(bool xfront) {
}

void AParticle::SetSortPriority(int32 sort_priority) {
}

void AParticle::SetSoloPlay(bool is_enable) {
}

void AParticle::SetPtcID(const int32 ptc_id) {
}

void AParticle::SetParticleID(const FString& ID) {
}

void AParticle::SetEventTime(float Time) {
}

void AParticle::SetEventPlay(bool is_enable) {
}

void AParticle::SetEnemyHit(bool is_enemy) {
}

void AParticle::SetDisablePause(bool is_disable) {
}

void AParticle::SetCustomParamVector(const FName& Name, const FVector& Param) {
}

void AParticle::SetCustomParamFloat(const FName& Name, float Param) {
}

void AParticle::SetCustomParamBool(const FName& Name, bool Param) {
}

void AParticle::SetCustomParamArrayVector(const FName& Name, const TArray<FVector>& Params) {
}

void AParticle::setColor(const FLinearColor& NewColor) {
}

void AParticle::SetAutoDelete(bool auto_delete) {
}

void AParticle::SetAfterDetachAutoDelete(bool auto_delete) {
}

bool AParticle::IsFinished() {
    return false;
}

bool AParticle::IsEventPlay() {
    return false;
}

float AParticle::GetTime() {
    return 0.0f;
}

UTextureRenderTarget2D* AParticle::GetDraw2DTexture() {
    return NULL;
}

void AParticle::FadeOut(float Time) {
}

void AParticle::Draw2DMode(UTextureRenderTarget2D* Texture) {
}

void AParticle::DisableSort(bool is_disable) {
}


