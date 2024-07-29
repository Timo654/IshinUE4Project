#include "ShogiManager.h"

AShogiManager::AShogiManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->shogi_scene = NULL;
    this->furigoma = NULL;
    this->cpu_data = NULL;
    this->taikyoku = NULL;
    this->Model[0] = NULL;
    this->Model[1] = NULL;
    this->Model[2] = NULL;
    this->Model[3] = NULL;
    this->Model[4] = NULL;
    this->Model[5] = NULL;
    this->Model[6] = NULL;
    this->Model[7] = NULL;
    this->Model[8] = NULL;
    this->Model[9] = NULL;
    this->Model[10] = NULL;
    this->Model[11] = NULL;
    this->model_shadow[0] = NULL;
    this->model_shadow[1] = NULL;
    this->model_shadow[2] = NULL;
    this->model_shadow[3] = NULL;
    this->model_shadow[4] = NULL;
    this->model_shadow[5] = NULL;
    this->model_shadow[6] = NULL;
    this->model_shadow[7] = NULL;
    this->model_shadow[8] = NULL;
    this->model_shadow[9] = NULL;
    this->model_shadow[10] = NULL;
    this->model_shadow[11] = NULL;
    this->ModelManager = NULL;
    this->UIData = NULL;
    this->pListener = NULL;
}

void AShogiManager::SetUiData(UMacanUIDataShogi* Data) {
}

void AShogiManager::SetModelManager(AShogiModelManager* manager) {
}

void AShogiManager::SetKomaModels(TArray<AActor*> komaModels, TArray<AActor*> shadowModels) {
}

void AShogiManager::Initialize() {
}


