#include "MacanUIDataAuthTelopGT.h"

UMacanUIDataAuthTelopGT::UMacanUIDataAuthTelopGT() {
    this->bfData = 0;
    this->currentAnimSec = 0.00f;
    this->currentAnimType = EUIAuthTelopGTAnimType::None;
    this->currentTelopType = EUIAuthTelopGTTelopType::ja;
    this->currentTexture = NULL;
}

void UMacanUIDataAuthTelopGT::UpdateEnd() {
}

void UMacanUIDataAuthTelopGT::UpdateAnimSec(float inSec) {
}

void UMacanUIDataAuthTelopGT::SetupTelopUIAuthTelopGT(EUIAuthTelopGTTelopType inType, UTexture2D* inText2D, FText& InText) {
}

void UMacanUIDataAuthTelopGT::SetupAnimUIAuthTelopGT(EUIAuthTelopGTAnimType inType) {
}

void UMacanUIDataAuthTelopGT::SetFlag(EUIAuthTelopGTBfType Type) {
}

bool UMacanUIDataAuthTelopGT::IsOnFlag(EUIResultOnOrOff& result, EUIAuthTelopGTBfType Type) {
    return false;
}

bool UMacanUIDataAuthTelopGT::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataAuthTelopGT::DelFlag(EUIAuthTelopGTBfType Type) {
}


