#include "MacanUIDataSubCaption.h"

UMacanUIDataSubCaption::UMacanUIDataSubCaption() {
    this->bfData = 0;
    this->missionNum = 0;
}

void UMacanUIDataSubCaption::OpenWidget() {
}

bool UMacanUIDataSubCaption::IsOnFlag(EUIResultOnOrOff& result, EMUIDSubCaptionBfType Type) {
    return false;
}

bool UMacanUIDataSubCaption::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataSubCaption::InCheckMark() {
}

void UMacanUIDataSubCaption::DelFlag(EMUIDSubCaptionBfType Type) {
}

void UMacanUIDataSubCaption::CloseWidget() {
}


