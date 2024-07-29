#include "PostEffectGradation.h"
#include "Components/PostProcessComponent.h"

APostEffectGradation::APostEffectGradation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    this->PostProcessVolume = (UPostProcessComponent*)RootComponent;
    this->EffectMaterial = NULL;
    this->GradationType = EPostEffectGradationType::Circle1;
    this->Priority = 0;
    this->Enable = false;
    this->UseAdd = false;
    this->UseSub = false;
    this->UseParentPos = false;
    this->MaskCircleInnerLength = 0.50f;
    this->MaskCircleOuterLength = 1.00f;
    this->MaskLineScale = 2.00f;
    this->MaskLineRotate = 0.00f;
    this->MaskLineInnerLength = 0.20f;
    this->MaskLineOuterLength = 1.00f;
    this->SortPriority = 0;
}


