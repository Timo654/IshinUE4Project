#include "MacanUIDataFriendlyGauge.h"

UMacanUIDataFriendlyGauge::UMacanUIDataFriendlyGauge() {
    this->windowUIState = EUIState::NotSet;
}

bool UMacanUIDataFriendlyGauge::OpenWindow(bool isQuick) {
    return false;
}

bool UMacanUIDataFriendlyGauge::IsPlayingUp(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFriendlyGauge::IsOpeningWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFriendlyGauge::IsDirtyStart(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFriendlyGauge::IsDirtyGuageVisible(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFriendlyGauge::IsDirtyEnter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFriendlyGauge::IsDirtyEnd(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFriendlyGauge::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataFriendlyGauge::IsClosingWindow(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataFriendlyGauge::DelBfPlayingUp() {
}

void UMacanUIDataFriendlyGauge::DelBfOpeningWindow() {
}

void UMacanUIDataFriendlyGauge::DelBfDirtyWindowState() {
}

void UMacanUIDataFriendlyGauge::DelBfDirtyStart() {
}

void UMacanUIDataFriendlyGauge::DelBfDirtySetFrame() {
}

void UMacanUIDataFriendlyGauge::DelBfDirtyEnd() {
}

void UMacanUIDataFriendlyGauge::DelBfDirty() {
}

void UMacanUIDataFriendlyGauge::DelBfClosingWindow() {
}

bool UMacanUIDataFriendlyGauge::CloseWindow(bool isQuick) {
    return false;
}


