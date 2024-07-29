#include "MacanUIDataWindowInfo.h"

UMacanUIDataWindowInfo::UMacanUIDataWindowInfo() {
    this->windowUIState = EUIState::NotSet;
    this->animType = EUIAnimType::empty;
    this->isVisibleWindow = false;
    this->currentPage = 0;
}

void UMacanUIDataWindowInfo::Unload() {
}

void UMacanUIDataWindowInfo::SetVisible(bool IsVisible) {
}

bool UMacanUIDataWindowInfo::SetTitle() {
    return false;
}

bool UMacanUIDataWindowInfo::SetTipsID(const FString& ID) {
    return false;
}

bool UMacanUIDataWindowInfo::SetPageIndex(int32 page) {
    return false;
}

bool UMacanUIDataWindowInfo::SetMainContent() {
    return false;
}

bool UMacanUIDataWindowInfo::SetGuideText() {
    return false;
}

bool UMacanUIDataWindowInfo::SetChangePage(int32 page) {
    return false;
}

bool UMacanUIDataWindowInfo::SetChangeContent() {
    return false;
}

bool UMacanUIDataWindowInfo::SetCancelButton() {
    return false;
}

bool UMacanUIDataWindowInfo::PreviousPageAnimation() {
    return false;
}

bool UMacanUIDataWindowInfo::OpenWindow(bool isManual) {
    return false;
}

bool UMacanUIDataWindowInfo::NextPageAnimation() {
    return false;
}

void UMacanUIDataWindowInfo::Load() {
}

bool UMacanUIDataWindowInfo::IsPrepared() const {
    return false;
}

bool UMacanUIDataWindowInfo::IsPlayingPrevious(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowInfo::IsPlayingNext(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowInfo::IsOpeningWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowInfo::IsDirtyWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowInfo::IsDirtyTitleText(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowInfo::IsDirtyTipsID(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowInfo::IsDirtyPagePrevious(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowInfo::IsDirtyPageNext(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowInfo::IsDirtyPageIndex(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowInfo::IsDirtyPageChange(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowInfo::IsDirtyMainContent(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowInfo::IsDirtyGuideText(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowInfo::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowInfo::IsClosingWindow(EUIResultOnOrOff& result) {
    return false;
}

int32 UMacanUIDataWindowInfo::GetTotalPageNum() const {
    return 0;
}

FText UMacanUIDataWindowInfo::GetTitleName() const {
    return FText::GetEmpty();
}

int32 UMacanUIDataWindowInfo::GetLayoutIndex() const {
    return 0;
}

FText UMacanUIDataWindowInfo::GetContentText(int32 Index) const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UMacanUIDataWindowInfo::GetContentSoftImage(int32 Index) const {
    return NULL;
}

UTexture2D* UMacanUIDataWindowInfo::GetContentImage(int32 Index) const {
    return NULL;
}

void UMacanUIDataWindowInfo::GetButtonGuideFlag() {
}

void UMacanUIDataWindowInfo::DelBfPlayingPrevious() {
}

void UMacanUIDataWindowInfo::DelBfPlayingNext() {
}

void UMacanUIDataWindowInfo::DelBfOpeningWindow() {
}

void UMacanUIDataWindowInfo::DelBfDirtyWindow() {
}

void UMacanUIDataWindowInfo::DelBfDirtyTitleText() {
}

void UMacanUIDataWindowInfo::DelBfDirtyTipsID() {
}

void UMacanUIDataWindowInfo::DelBfDirtyPagePrivious() {
}

void UMacanUIDataWindowInfo::DelBfDirtyPageNext() {
}

void UMacanUIDataWindowInfo::DelBfDirtyPageIndex() {
}

void UMacanUIDataWindowInfo::DelBfDirtyMainContent() {
}

void UMacanUIDataWindowInfo::DelBfDirtyGuideText() {
}

void UMacanUIDataWindowInfo::DelBfClosingWindow() {
}

bool UMacanUIDataWindowInfo::CloseWindow() {
    return false;
}


