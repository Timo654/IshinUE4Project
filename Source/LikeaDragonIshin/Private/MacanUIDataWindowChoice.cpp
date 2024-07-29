#include "MacanUIDataWindowChoice.h"

UMacanUIDataWindowChoice::UMacanUIDataWindowChoice() {
    this->windowUIState = EUIState::NotSet;
    this->selectItemIndex = -1;
}

void UMacanUIDataWindowChoice::SetSelectItemIndex(int32 Index) {
}

void UMacanUIDataWindowChoice::SetItemList(TArray<FWindowChoiceItemInfo>& inInfoArray) {
}

void UMacanUIDataWindowChoice::SetEnterItemIndex(int32 Index) {
}

void UMacanUIDataWindowChoice::ResetEnterItem() {
}

bool UMacanUIDataWindowChoice::OpenWindow(bool isQuick, bool NewIsBgBlur) {
    return false;
}

bool UMacanUIDataWindowChoice::IsOpeningWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowChoice::IsNowEnter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowChoice::IsDirtyWindowState(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowChoice::IsDirtySelectIndex(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowChoice::IsDirtyItemList(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowChoice::IsDirtyEnter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowChoice::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowChoice::IsClosingWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowChoice::IsBlinkingEnter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowChoice::IsBgBlur(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataWindowChoice::DelBfOpeningWindow() {
}

void UMacanUIDataWindowChoice::DelBfEnableBgBlur() {
}

void UMacanUIDataWindowChoice::DelBfDirtyWindowState() {
}

void UMacanUIDataWindowChoice::DelBfDirtySelectIndex() {
}

void UMacanUIDataWindowChoice::DelBfDirtyItemList() {
}

void UMacanUIDataWindowChoice::DelBfDirtyEnter() {
}

void UMacanUIDataWindowChoice::DelBfDirty() {
}

void UMacanUIDataWindowChoice::DelBfClosingWindow() {
}

void UMacanUIDataWindowChoice::DelBfBlinkingEnter() {
}

bool UMacanUIDataWindowChoice::CloseWindow(bool isQuick) {
    return false;
}

void UMacanUIDataWindowChoice::ClearItemList() {
}

void UMacanUIDataWindowChoice::AddItemList(FWindowChoiceItemInfo& inInfo) {
}


