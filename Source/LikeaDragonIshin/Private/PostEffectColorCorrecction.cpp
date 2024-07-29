#include "PostEffectColorCorrecction.h"
#include "Components/PostProcessComponent.h"

APostEffectColorCorrecction::APostEffectColorCorrecction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    this->PostProcessVolume = (UPostProcessComponent*)RootComponent;
    this->EffectMaterial = NULL;
    this->MaskType = EPostEffectMaskType::invalid;
    this->ParentType = EPostEffectMaskType::invalid;
    this->Priority = 0;
    this->Enable = false;
    this->UseParentPos = false;
    this->Saturate = 0.00f;
    this->Contrast = 0.00f;
    this->luminance = 0.00f;
    this->MaskCircleInnerLength = 0.50f;
    this->MaskCircleOuterLength = 1.00f;
    this->MaskLineScale = 2.00f;
    this->MaskLineRotate = 0.00f;
    this->MaskLineInnerLength = 0.20f;
    this->MaskLineOuterLength = 1.00f;
    this->EnableAdjust = false;
    this->SaturateAdjust = 1.00f;
    this->ContrastAdjust = 1.00f;
    this->GammaAdjust = 1.00f;
    this->GainAdjust = 1.00f;
    this->OffsetAdjust = 1.00f;
}


