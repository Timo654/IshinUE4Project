#include "MacanUIDataYakuzaCaption.h"

UMacanUIDataYakuzaCaption::UMacanUIDataYakuzaCaption() {
    this->bfData = 0;
    this->currentAnimSec = 0.00f;
    this->currentAnimType = EUIYakuzaCaptionAnimType::None;
    this->currentTexture = NULL;
}

void UMacanUIDataYakuzaCaption::UpdateEnd() {
}

void UMacanUIDataYakuzaCaption::UpdateAnimSec(float inSec) {
}

void UMacanUIDataYakuzaCaption::SetupYakuzaCaptionAnim(EUIYakuzaCaptionAnimType inType, UTexture2D* inText2D) {
}

void UMacanUIDataYakuzaCaption::SetFlag(EUIYakuzaCaptionBfType Type) {
}

bool UMacanUIDataYakuzaCaption::IsOnFlag(EUIResultOnOrOff& result, EUIYakuzaCaptionBfType Type) {
    return false;
}

bool UMacanUIDataYakuzaCaption::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataYakuzaCaption::DelFlag(EUIYakuzaCaptionBfType Type) {
}


