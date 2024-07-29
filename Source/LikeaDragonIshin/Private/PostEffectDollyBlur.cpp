#include "PostEffectDollyBlur.h"
#include "Components/PostProcessComponent.h"

APostEffectDollyBlur::APostEffectDollyBlur(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    this->PostProcessVolume = (UPostProcessComponent*)RootComponent;
    this->EffectMaterial = NULL;
    this->MaskType = EPostEffectMaskType::Circle;
    this->ParentType = EPostEffectMaskType::Circle;
    this->Priority = 0;
    this->Enable = false;
    this->UseAutoCamera = false;
    this->UseParentPos = false;
    this->BlurOffset = 3.00f;
    this->MaskCircleInnerLength = 0.50f;
    this->MaskCircleOuterLength = 1.00f;
    this->MaskLineScale = 2.00f;
    this->MaskLineRotate = 0.00f;
    this->MaskLineInnerLength = 0.20f;
    this->MaskLineOuterLength = 1.00f;
}


