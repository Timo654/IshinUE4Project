#include "MacanUIDataMainMenu.h"

UMacanUIDataMainMenu::UMacanUIDataMainMenu() {
    this->windowUIState = EUIState::NotSet;
    this->isForcedUpdateMenuItem = false;
    this->selectMenuItemType = EUIMainMenuItemType::Empty;
    this->lvupUIState = EUIState::NotSet;
    this->IsDispKiryuInfo = false;
    this->arrayPreviewItem.AddDefaulted(20);
    this->isUpdatePreviewItem = true;
    this->columnPreviwItem = 5;
    this->arrayPreviewEquip.AddDefaulted(7);
    this->isUpdatePreviewEquip = true;
    this->isUpdatePreviewEmptyEquip = true;
    this->isUpdatePreviewTaishi = true;
    this->isUpdatePreviewKyoukaStatus = true;
    this->isPreviewKeySettingXBO = false;
    this->isDispKeyboardPreviewKeySetting = false;
    this->animWaitCounter = 0;
}

bool UMacanUIDataMainMenu::UpdatePreviewTaishi() {
    return false;
}

bool UMacanUIDataMainMenu::UpdatePreviewSubStory(FMainMenuPreviewItemInfo Info) {
    return false;
}

bool UMacanUIDataMainMenu::UpdatePreviewShoujin(FMainMenuPreviewItemInfo Info) {
    return false;
}

bool UMacanUIDataMainMenu::UpdatePreviewSetting() {
    return false;
}

bool UMacanUIDataMainMenu::UpdatePreviewNouryoku(FUIMainMenuKyoukaStatusData kyoukaStatus) {
    return false;
}

bool UMacanUIDataMainMenu::UpdatePreviewMemorandum(FMainMenuPreviewItemInfo Info) {
    return false;
}

bool UMacanUIDataMainMenu::UpdatePreviewLetter(FMainMenuPreviewItemInfo Info) {
    return false;
}

bool UMacanUIDataMainMenu::UpdatePreviewItem(TArray<FUIItemItemData>& inArray, int32 inColumnMax) {
    return false;
}

bool UMacanUIDataMainMenu::UpdatePreviewEquip(TArray<FUIEquipItemData>& inArray) {
    return false;
}

bool UMacanUIDataMainMenu::UpdatePreviewDictionary(FMainMenuPreviewItemInfo Info) {
    return false;
}

bool UMacanUIDataMainMenu::UpdatePreviewComplete(FMainMenuPreviewItemInfo Info) {
    return false;
}

bool UMacanUIDataMainMenu::UpdatePreviewAnotherLife(FMainMenuPreviewItemInfo Info) {
    return false;
}

void UMacanUIDataMainMenu::UpdateControllerGuide() {
}

bool UMacanUIDataMainMenu::SetWindowTextMessage(FText& InText) {
    return false;
}

bool UMacanUIDataMainMenu::SetSelectMenuItemIndex(int32 inIndex) {
    return false;
}

bool UMacanUIDataMainMenu::SetPreviewEmptyEqip(bool flag) {
    return false;
}

void UMacanUIDataMainMenu::SetMenuIems(TArray<FMainMenuItemInfo>& inInfoArray, bool isForceUpdate) {
}

bool UMacanUIDataMainMenu::SetInfoTextTokuPoint(FText& InText) {
    return false;
}

bool UMacanUIDataMainMenu::SetInfoTextPlayTime(FText& InText) {
    return false;
}

bool UMacanUIDataMainMenu::SetInfoTextNextExp(FText& InText) {
    return false;
}

bool UMacanUIDataMainMenu::SetInfoTextLv(FText& InText) {
    return false;
}

bool UMacanUIDataMainMenu::SetInfoTextDifficulty(FText& InText) {
    return false;
}

bool UMacanUIDataMainMenu::SetInfoTextChapter(FText& InText) {
    return false;
}

bool UMacanUIDataMainMenu::SetInfoKiryuStatus(FMainMenuKiryuNouryokuInfo Info, bool isEnableStatus) {
    return false;
}

bool UMacanUIDataMainMenu::SetEnterMenuItem() {
    return false;
}

bool UMacanUIDataMainMenu::ResetEnterTopMenu() {
    return false;
}

bool UMacanUIDataMainMenu::OpenWindow(bool isQuick) {
    return false;
}

bool UMacanUIDataMainMenu::OpenLvUp(bool isQuick) {
    return false;
}

bool UMacanUIDataMainMenu::IsUsingWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMainMenu::IsUsingLvUp(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMainMenu::IsOpeningWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMainMenu::IsOpeningLvUp(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMainMenu::IsDirtyWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMainMenu::IsDirtyResetEnter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMainMenu::IsDirtyMessage(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMainMenu::IsDirtyLvUp(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMainMenu::IsDirtyItem(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMainMenu::IsDirtyInfo(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMainMenu::IsDirtyEnter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMainMenu::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMainMenu::IsClosingWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMainMenu::IsClosingLvUp(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataMainMenu::IsBlinkingEnter(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataMainMenu::DelOpeningWindow() {
}

void UMacanUIDataMainMenu::DelOpeningLvUp() {
}

void UMacanUIDataMainMenu::DelDirtyWindow() {
}

void UMacanUIDataMainMenu::DelDirtyResetEnter() {
}

void UMacanUIDataMainMenu::DelDirtyMessage() {
}

void UMacanUIDataMainMenu::DelDirtyLvUp() {
}

void UMacanUIDataMainMenu::DelDirtyItem() {
}

void UMacanUIDataMainMenu::DelDirtyInfo() {
}

void UMacanUIDataMainMenu::DelDirtyEnter() {
}

void UMacanUIDataMainMenu::DelClosingWindow() {
}

void UMacanUIDataMainMenu::DelClosingLvUp() {
}

void UMacanUIDataMainMenu::DelBlinkingEnter() {
}

bool UMacanUIDataMainMenu::CloseWindow(bool isQuick) {
    return false;
}

bool UMacanUIDataMainMenu::CloseLvUp(bool isQuick) {
    return false;
}

bool UMacanUIDataMainMenu::buildTaishiData(UMacanUserWidget_TaishiOrganizeTeamAssign* teamAssign) {
    return false;
}


