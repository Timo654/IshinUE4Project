#include "TintiroEntity.h"

ATintiroEntity::ATintiroEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pUIManager = NULL;
    this->UIData = NULL;
}

void ATintiroEntity::SetUiData(UMacanUIDataTintiro* Data) {
}


