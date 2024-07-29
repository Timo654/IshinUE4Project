#include "MacanUIDataTitleMenu.h"

UMacanUIDataTitleMenu::UMacanUIDataTitleMenu() {
    this->bfData = 0;
    this->windowUIState = EUIState::NotSet;
    this->currentMenuListType = EUITitleMenuListType::BeforeGameStart;
    this->selectMenuItemType = EUITitleMenuItemType::Empty;
    this->selectTopMenuIndex = 0;
    this->lengthTopMenuList = 0;
    this->currentMenuItemType = EUITitleMenuItemType::Empty;
    this->returnMenuItemType = EUITitleMenuItemType::Empty;
    this->rightsScrollRate = 0;
    this->rightsScrollRateMax = 0;
    this->menuBgType = EUITitleMenuBgType::Noon;
    this->isEnabledShutdownMenu = false;
    this->DispNewGameBG = false;
    this->DispSaveIcon = false;
}

bool UMacanUIDataTitleMenu::UpdateSelectTopMenuItemIndex() {
    return false;
}

bool UMacanUIDataTitleMenu::SetSelectVisibleNewMarktemIndex(int32 Index) {
    return false;
}

bool UMacanUIDataTitleMenu::SetSelectTopMenuItemIndex(int32 inIndex) {
    return false;
}

void UMacanUIDataTitleMenu::SetSelectItems(TArray<FWindowBaseItem>& inSelectItemArray) {
}

bool UMacanUIDataTitleMenu::SetSelectInvisibleNewMarktemIndex(int32 Index) {
    return false;
}

bool UMacanUIDataTitleMenu::SetSelectFocusedItemIndex(int32 Index) {
    return false;
}

void UMacanUIDataTitleMenu::SetSelecteEnterItemIndex(int32 Index) {
}

bool UMacanUIDataTitleMenu::SetRightsScrollBoxScrollRate(int32 scroll) {
    return false;
}

void UMacanUIDataTitleMenu::SetNextSelectItems(TArray<FWindowBaseItem>& inSelectItemArray) {
}

bool UMacanUIDataTitleMenu::SetEnterTopMenu() {
    return false;
}

void UMacanUIDataTitleMenu::ResetSelectEnterItem() {
}

bool UMacanUIDataTitleMenu::ResetEnterTopMenu() {
    return false;
}

bool UMacanUIDataTitleMenu::OpenWindow(bool isQuick) {
    return false;
}

bool UMacanUIDataTitleMenu::OpenSubMenu(EUITitleMenuItemType forcedOpenType) {
    return false;
}

bool UMacanUIDataTitleMenu::IsUsingWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsUsingSubMenu(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsOpeningWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsOpeningSubMenu(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsDirtyWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsDirtySubMenu(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsDirtySelectReset(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsDirtySelectEnter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsDirtySelect(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsDirtyRightScoll(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsDirtyResetEnter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsDirtyItem(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsDirtyEnter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsClosingWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsClosingSubMenu(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTitleMenu::IsBlinkingEnter(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataTitleMenu::DelUsingSubMenu() {
}

void UMacanUIDataTitleMenu::DelOpeningWindow() {
}

void UMacanUIDataTitleMenu::DelOpeningSubMenu() {
}

void UMacanUIDataTitleMenu::DelDirtyWindow() {
}

void UMacanUIDataTitleMenu::DelDirtySubMenu() {
}

void UMacanUIDataTitleMenu::DelDirtySelectReset() {
}

void UMacanUIDataTitleMenu::DelDirtySelectEnter() {
}

void UMacanUIDataTitleMenu::DelDirtySelect() {
}

void UMacanUIDataTitleMenu::DelDirtyRightScoll() {
}

void UMacanUIDataTitleMenu::DelDirtyResetEnter() {
}

void UMacanUIDataTitleMenu::DelDirtyItem() {
}

void UMacanUIDataTitleMenu::DelDirtyEnter() {
}

void UMacanUIDataTitleMenu::DelClosingWindow() {
}

void UMacanUIDataTitleMenu::DelClosingSubMenu() {
}

void UMacanUIDataTitleMenu::DelBlinkingEnter() {
}

bool UMacanUIDataTitleMenu::CreateTopMenuItems(EUITitleMenuListType listType) {
    return false;
}

bool UMacanUIDataTitleMenu::CloseWindow(bool isQuick) {
    return false;
}

bool UMacanUIDataTitleMenu::CloseSubMenu() {
    return false;
}

void UMacanUIDataTitleMenu::ClearSelectItems() {
}


