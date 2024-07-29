#include "MacanUIDataIconBase.h"

UMacanUIDataIconBase::UMacanUIDataIconBase() {
    this->iconUIState = EUIState::NotSet;
    this->fpvIconVisible = false;
}

bool UMacanUIDataIconBase::OpenIcon(bool isQuick) {
    return false;
}

bool UMacanUIDataIconBase::IsUsingIcon(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataIconBase::IsOpeningIcon(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataIconBase::IsDirtyIcon(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataIconBase::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataIconBase::IsClosingIcon(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataIconBase::DelOpeningIcon() {
}

void UMacanUIDataIconBase::DelDirtyIcon() {
}

void UMacanUIDataIconBase::DelClosingIcon() {
}

bool UMacanUIDataIconBase::CloseIcon(bool isQuick) {
    return false;
}


