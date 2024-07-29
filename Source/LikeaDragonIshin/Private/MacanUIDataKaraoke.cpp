#include "MacanUIDataKaraoke.h"

UMacanUIDataKaraoke::UMacanUIDataKaraoke() {
    this->markerIndex = 0;
    this->selectMusic = 0;
    this->m_pCSEMarker = NULL;
    this->m_pTimingBarWidget = NULL;
    this->m_pLines = NULL;
}

bool UMacanUIDataKaraoke::SetTitleVisible(EUIState State) {
    return false;
}

void UMacanUIDataKaraoke::SetTimingBarWidget(UMUW_MngKaraokeTimingBar* Widget) {
}

bool UMacanUIDataKaraoke::SetMusicTitle() {
    return false;
}

bool UMacanUIDataKaraoke::SetMarkerVisible() {
    return false;
}

bool UMacanUIDataKaraoke::SetMarkerIndex(int32 mode) {
    return false;
}

void UMacanUIDataKaraoke::SetLinePosition(FVector2D position) {
}

void UMacanUIDataKaraoke::SetKaraokeMarkerWidget(UMacanUserWidget_MngKaraokeMarker* Widget) {
}

void UMacanUIDataKaraoke::SetKaraokeLinesWidget(UMacanUserWidget* Widget) {
}

bool UMacanUIDataKaraoke::IsDirtyVisibleTitle(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraoke::IsDirtyVisibleMarker(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraoke::IsDirtyVisible(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraoke::IsDirtyTitle(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraoke::IsDirtyMarker(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKaraoke::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

EUIState UMacanUIDataKaraoke::GetUIState(EMngKaraokeUIType Type) {
    return EUIState::NotSet;
}

UMUW_MngKaraokeTimingBar* UMacanUIDataKaraoke::GetKaraokeTimingBarWidget() {
    return NULL;
}

UMacanUserWidget_MngKaraokeMarker* UMacanUIDataKaraoke::GetKaraokeMarkerWidget() {
    return NULL;
}

UMacanUserWidget* UMacanUIDataKaraoke::GetKaraokeLinesWidget() {
    return NULL;
}

void UMacanUIDataKaraoke::DelBfVisibleDirtyTitle() {
}

void UMacanUIDataKaraoke::DelBfVisibleDirtyMarker() {
}

void UMacanUIDataKaraoke::DelBfDirtyTitle() {
}

void UMacanUIDataKaraoke::DelBfDirtyMarker() {
}

void UMacanUIDataKaraoke::DelBfDirty() {
}


