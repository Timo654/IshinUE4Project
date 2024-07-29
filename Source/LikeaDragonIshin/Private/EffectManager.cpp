#include "EffectManager.h"

UEffectManager::UEffectManager() {
    this->PostProcessVolume = NULL;
    this->PostProcessVolumePUB = NULL;
    this->OldFilm = NULL;
    this->MovieTexture = NULL;
    this->MovieMaterial = NULL;
    this->DistanceFogMaterial = NULL;
    this->InkNoiseTexture = NULL;
    this->BloodNoiseTexture = NULL;
    this->DamageNoiseTexture = NULL;
    this->WaterNoiseTexture = NULL;
    this->CopySceneTexture = NULL;
    this->RenderTexture = NULL;
    this->PostEffectCopy = NULL;
}

UTextureRenderTarget2D* UEffectManager::GetWaterNoiseTexture() {
    return NULL;
}

UTexture2D* UEffectManager::GetInkNoiseTexture() {
    return NULL;
}

UTextureRenderTarget2D* UEffectManager::GetDamageNoiseTexture() {
    return NULL;
}

UTextureRenderTarget2D* UEffectManager::GetBloodNoiseTexture() {
    return NULL;
}


