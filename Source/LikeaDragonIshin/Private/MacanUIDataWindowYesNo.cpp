#include "MacanUIDataWindowYesNo.h"

UMacanUIDataWindowYesNo::UMacanUIDataWindowYesNo() {
    this->windowUIState = EUIState::NotSet;
    this->isValidAutoWrapText = true;
    this->nowSelectType = EUIYesNoSelectType::NotSelect;
}

void UMacanUIDataWindowYesNo::SetSelectType(EUIYesNoSelectType inType) {
}

bool UMacanUIDataWindowYesNo::SetMessage(FText& InText) {
    return false;
}

void UMacanUIDataWindowYesNo::SetEnterItem(EUIYesNoSelectType inType) {
}

bool UMacanUIDataWindowYesNo::SetAutoWrapText(bool IsValid) {
    return false;
}

void UMacanUIDataWindowYesNo::ResetEnterItem() {
}

bool UMacanUIDataWindowYesNo::OpenWindow(bool isQuick, bool NewIsBgBlur) {
    return false;
}

bool UMacanUIDataWindowYesNo::IsOpeningWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowYesNo::IsNowEnter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowYesNo::IsDirtyWindowState(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowYesNo::IsDirtySelectType(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowYesNo::IsDirtyMessage(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowYesNo::IsDirtyEnter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowYesNo::IsDirtyAutoWrapText(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowYesNo::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowYesNo::IsClosingWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowYesNo::IsBlinkingEnter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowYesNo::IsBgBlur(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataWindowYesNo::DelBfOpeningWindow() {
}

void UMacanUIDataWindowYesNo::DelBfEnableBgBlur() {
}

void UMacanUIDataWindowYesNo::DelBfDirtyWindowState() {
}

void UMacanUIDataWindowYesNo::DelBfDirtySelectType() {
}

void UMacanUIDataWindowYesNo::DelBfDirtyMessage() {
}

void UMacanUIDataWindowYesNo::DelBfDirtyEnter() {
}

void UMacanUIDataWindowYesNo::DelBfDirtyAutoWrapText() {
}

void UMacanUIDataWindowYesNo::DelBfDirty() {
}

void UMacanUIDataWindowYesNo::DelBfClosingWindow() {
}

void UMacanUIDataWindowYesNo::DelBfBlinkingEnter() {
}

bool UMacanUIDataWindowYesNo::CloseWindow(bool isQuick) {
    return false;
}


