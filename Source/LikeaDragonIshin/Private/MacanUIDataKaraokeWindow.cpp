#include "MacanUIDataKaraokeWindow.h"

UMacanUIDataKaraokeWindow::UMacanUIDataKaraokeWindow() {
    this->selectMusicUIState = EUIState::NotSet;
    this->selectDifficultyUIState = EUIState::NotSet;
    this->resultUIState = EUIState::NotSet;
    this->flashbackUIState = EUIState::NotSet;
    this->topmenuUIState = EUIState::NotSet;
    this->lyricSelectUIState = EUIState::NotSet;
    this->m_pTopMenuWidget = NULL;
    this->m_pSelectMusicWidget = NULL;
    this->m_pFlashBackWidget = NULL;
    this->m_pResultWidget = NULL;
    this->m_plyricTypeWidget = NULL;
    this->m_pInputListener = NULL;
    this->cursorIndex = 0;
    this->cursorMusicIndex = 0;
    this->cursorDifficultyIndex = 0;
    this->isSongOnly = false;
    this->isWithPartner = false;
    this->isFinishDecideAnimation = false;
    this->cursorFlashBackIndex = 0;
    this->greatCount = 0;
    this->goodCount = 0;
    this->badCount = 0;
    this->missCount = 0;
    this->cursorLyricTypeIndex = 0;
}

void UMacanUIDataKaraokeWindow::SetTopMenuWidget(UMacanUserWidget* Widget) {
}

void UMacanUIDataKaraokeWindow::SetSelectMusicWidget(UMUW_MngKaraokeSelectMusic* Widget) {
}

bool UMacanUIDataKaraokeWindow::SetSelectMusicIndex() {
    return false;
}

bool UMacanUIDataKaraokeWindow::SetSelectLyricTypeIndex() {
    return false;
}

bool UMacanUIDataKaraokeWindow::SetSelectItemIndex(int32 Index) {
    return false;
}

bool UMacanUIDataKaraokeWindow::SetSelectFlashbackIndex() {
    return false;
}

bool UMacanUIDataKaraokeWindow::SetSelectDifficultyIndex() {
    return false;
}

void UMacanUIDataKaraokeWindow::SetResultWidget(UMacanUserWidget_MngKaraokeResult* Widget) {
}

void UMacanUIDataKaraokeWindow::SetLyricTextWidget(UMacanUserWidget_MngKaraokeResult* Widget) {
}

void UMacanUIDataKaraokeWindow::SetFlashBackWidget(UMUW_MngKaraokeFlashBack* Widget) {
}

bool UMacanUIDataKaraokeWindow::SetEnterMusicIndex() {
    return false;
}

bool UMacanUIDataKaraokeWindow::SetEnterLyricTypeIndex() {
    return false;
}

bool UMacanUIDataKaraokeWindow::SetEnterItemIndex(int32 Index) {
    return false;
}

bool UMacanUIDataKaraokeWindow::SetEnterFlashbackIndex() {
    return false;
}

bool UMacanUIDataKaraokeWindow::SetEnterDifficultyIndex() {
    return false;
}

void UMacanUIDataKaraokeWindow::ResetEnterItem() {
}

bool UMacanUIDataKaraokeWindow::OpenWindow(EMngKaraokeWindowType Type) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsNowEnter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtyTopMenuIndex(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtyTopMenuDecide(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtyTopMenu(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtySelectMusicIndex(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtySelectMusicDecide(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtySelectMusic(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtySelectDifficulty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtyResultVisible(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtyResultDecide(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtyLyricTypeVisible(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtyLyricTypeIndex(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtyLyricTypeDecide(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtyFlachBackIndex(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtyFlachBackDecide(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtyFlachBack(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtyDifficultyIndex(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirtyDifficultyDecide(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsBlinkingEnter(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsAnyDirtyTopMenu(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsAnyDirtySelectMusic(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsAnyDirtyResult(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsAnyDirtyLyricType(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsAnyDirtyFlachBack(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraokeWindow::IsAnyDirtyDifficulty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataKaraokeWindow::Initialize() {
}

int32 UMacanUIDataKaraokeWindow::GetItemListNum() {
    return 0;
}

void UMacanUIDataKaraokeWindow::DelBfOpeningWindow() {
}

void UMacanUIDataKaraokeWindow::DelBfNowEnter() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtyTopMenuIndex() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtyTopMenuDecide() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtyTopMenu() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtySelectMusicIndex() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtySelectMusicDecide() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtySelectMusic() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtySelectDifficulty() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtyResultDecide() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtyResult() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtyLyricTypeVisible() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtyLyricTypeIndex() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtyLyricTypeDecide() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtyFlashBackIndex() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtyFlashBackDecide() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtyFlashBack() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtyDifficultyIndex() {
}

void UMacanUIDataKaraokeWindow::DelBfDirtyDifficultyDecide() {
}

void UMacanUIDataKaraokeWindow::DelBfClosingWindow() {
}

void UMacanUIDataKaraokeWindow::DelBfBlinkingEnter() {
}

bool UMacanUIDataKaraokeWindow::DecideMenu() {
    return false;
}

bool UMacanUIDataKaraokeWindow::CloseWindow(EMngKaraokeWindowType Type) {
    return false;
}

void UMacanUIDataKaraokeWindow::ClearItemList() {
}

bool UMacanUIDataKaraokeWindow::CancelMenu() {
    return false;
}

void UMacanUIDataKaraokeWindow::AddItemList(FWindowChoiceItemInfo& Info) {
}


