#include "ActionMovieManager.h"

AActionMovieManager::AActionMovieManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Player = NULL;
    this->Texture = NULL;
    this->Material = NULL;
    this->MaterialInstance = NULL;
}


