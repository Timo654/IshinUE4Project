#include "EffectSlashWoundComponent.h"

UEffectSlashWoundComponent::UEffectSlashWoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Enable = false;
    this->DrawBox = NULL;
    this->DrawMaterial = NULL;
    this->bDisplayArea = false;
}

void UEffectSlashWoundComponent::SetDisplayArea(bool display_area) {
}


