#include "MacanUIDataWindowItemGet.h"

UMacanUIDataWindowItemGet::UMacanUIDataWindowItemGet() {
    this->itemNumber = -1;
    this->isVisibleItemGetWindow = false;
    this->windowUIState = EUIState::NotSet;
    this->itemValue = 0;
}

void UMacanUIDataWindowItemGet::SetVisibleItemGetWIndow(bool IsVisible) {
}

bool UMacanUIDataWindowItemGet::SetItemValue(int32 Value) {
    return false;
}

bool UMacanUIDataWindowItemGet::SetItemNumber(int32 Number) {
    return false;
}

bool UMacanUIDataWindowItemGet::SetItemID(FName ItemId) {
    return false;
}

bool UMacanUIDataWindowItemGet::OpenWindow() {
    return false;
}

bool UMacanUIDataWindowItemGet::IsDirtyWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowItemGet::IsDirtyName(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowItemGet::IsDirtyItemNumber(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowItemGet::IsDirtyItemID(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowItemGet::IsDirtyItemAny(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowItemGet::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataWindowItemGet::DelBfOpeningWindow() {
}

void UMacanUIDataWindowItemGet::DelBfDirtyWindow() {
}

void UMacanUIDataWindowItemGet::DelBfDirtyName() {
}

void UMacanUIDataWindowItemGet::DelBfDirtyItemNumber() {
}

void UMacanUIDataWindowItemGet::DelBfDirtyItemID() {
}

void UMacanUIDataWindowItemGet::DelBfClosingWindow() {
}

bool UMacanUIDataWindowItemGet::CloseWindow(bool quick) {
    return false;
}


