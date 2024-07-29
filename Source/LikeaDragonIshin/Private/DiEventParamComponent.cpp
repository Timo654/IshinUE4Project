#include "DiEventParamComponent.h"

UDiEventParamComponent::UDiEventParamComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartFrame = 0.00f;
    this->EndFrame = 0.00f;
    this->RotateType = 0;
    this->Ground = 0;
    this->DisableScale = 0;
    this->DisableElement = false;
}


