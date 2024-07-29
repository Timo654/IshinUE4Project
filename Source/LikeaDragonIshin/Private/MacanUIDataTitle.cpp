#include "MacanUIDataTitle.h"

UMacanUIDataTitle::UMacanUIDataTitle() {
    this->bfData = 0;
    this->windowUIState = EUIState::NotSet;
}

void UMacanUIDataTitle::SetEnter() {
}

bool UMacanUIDataTitle::OpenWindow(bool isQuick) {
    return false;
}

bool UMacanUIDataTitle::IsUsingWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitle::IsOpeningWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitle::IsDirtyWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitle::IsDirtyEmter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitle::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitle::IsClosingWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitle::IsBlinkingEnter(EUIResultOnOrOff& result) {
    return false;
}

ETitleAnimLanguage UMacanUIDataTitle::GetLanguage() {
    return ETitleAnimLanguage::Jp;
}

void UMacanUIDataTitle::DelOpeningWindow() {
}

void UMacanUIDataTitle::DelDirtyWindow() {
}

void UMacanUIDataTitle::DelDirtyEnter() {
}

void UMacanUIDataTitle::DelClosingWindow() {
}

void UMacanUIDataTitle::DelBlinkingEnter() {
}

bool UMacanUIDataTitle::CloseWindow(bool isQuick) {
    return false;
}


