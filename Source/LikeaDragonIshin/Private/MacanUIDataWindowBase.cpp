#include "MacanUIDataWindowBase.h"

UMacanUIDataWindowBase::UMacanUIDataWindowBase() {
    this->windowUIState = EUIState::NotSet;
    this->isValidAutoWrapText = true;
    this->isVisibleArrowUp = false;
    this->isVisibleArrowDown = false;
    this->isRemoveDPIScale = true;
}

bool UMacanUIDataWindowBase::SetVisibilityArrowUp(bool IsVisible) {
    return false;
}

bool UMacanUIDataWindowBase::SetVisibilityArrowDown(bool IsVisible) {
    return false;
}

bool UMacanUIDataWindowBase::SetPosition(FVector2D& inPosition, bool inRemoveDPIScale) {
    return false;
}

bool UMacanUIDataWindowBase::SetMessageAndItemName(FText& inMessage, FText& inItemName) {
    return false;
}

bool UMacanUIDataWindowBase::SetMessage(FText& inMessage) {
    return false;
}

bool UMacanUIDataWindowBase::SetAutoWrapText(bool IsValid) {
    return false;
}

bool UMacanUIDataWindowBase::OpenWindow(bool isQuick) {
    return false;
}

bool UMacanUIDataWindowBase::IsUsingWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowBase::IsOpeningWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowBase::IsDirtyWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowBase::IsDirtyScale(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowBase::IsDirtyPosition(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowBase::IsDirtyItem(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowBase::IsDirtyAutoWrapText(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowBase::IsDirtyArrow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowBase::IsDirtyAngle(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowBase::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowBase::IsClosingWindow(EUIResultOnOrOff& result) {
    return false;
}

FVector2D UMacanUIDataWindowBase::GetPosition() {
    return FVector2D{};
}

void UMacanUIDataWindowBase::DelOpeningWindow() {
}

void UMacanUIDataWindowBase::DelDirtyWindow() {
}

void UMacanUIDataWindowBase::DelDirtyScale() {
}

void UMacanUIDataWindowBase::DelDirtyPosition() {
}

void UMacanUIDataWindowBase::DelDirtyItem() {
}

void UMacanUIDataWindowBase::DelDirtyAutoWrapText() {
}

void UMacanUIDataWindowBase::DelDirtyArrow() {
}

void UMacanUIDataWindowBase::DelDirtyAngle() {
}

void UMacanUIDataWindowBase::DelClosingWindow() {
}

bool UMacanUIDataWindowBase::CloseWindow(bool isQuick) {
    return false;
}

bool UMacanUIDataWindowBase::ClearMessage() {
    return false;
}

bool UMacanUIDataWindowBase::AddMessageAndItemName(FText& inMessage, FText& inItemName) {
    return false;
}

bool UMacanUIDataWindowBase::AddMessage(FText& inMessage) {
    return false;
}


