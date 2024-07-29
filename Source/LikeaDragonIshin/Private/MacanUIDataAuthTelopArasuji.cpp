#include "MacanUIDataAuthTelopArasuji.h"

UMacanUIDataAuthTelopArasuji::UMacanUIDataAuthTelopArasuji() {
    this->bfData = 0;
    this->currentAnimSec = 0.00f;
    this->currentAnimType = EUIAuthTelopArasujiAnimType::None;
}

void UMacanUIDataAuthTelopArasuji::UpdateEnd() {
}

void UMacanUIDataAuthTelopArasuji::UpdateAnimSec(float inSec) {
}

void UMacanUIDataAuthTelopArasuji::SetupAuthTelopArasujiAnim(EUIAuthTelopArasujiAnimType inType) {
}

void UMacanUIDataAuthTelopArasuji::SetFlag(EUIAuthTelopArasujiBfType Type) {
}

bool UMacanUIDataAuthTelopArasuji::IsOnFlag(EUIResultOnOrOff& result, EUIAuthTelopArasujiBfType Type) {
    return false;
}

bool UMacanUIDataAuthTelopArasuji::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataAuthTelopArasuji::DelFlag(EUIAuthTelopArasujiBfType Type) {
}


