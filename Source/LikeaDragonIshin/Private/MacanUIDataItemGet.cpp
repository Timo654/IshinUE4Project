#include "MacanUIDataItemGet.h"

UMacanUIDataItemGet::UMacanUIDataItemGet() {
    this->itemNumber = 0;
    this->isVisibleItemGet = false;
    this->isPlayable = false;
    this->armRank = 0;
    this->equipRank = EEquipRank::BLUNT;
    this->totalRarity = 0;
    this->windowUIState = EUIState::NotSet;
}

void UMacanUIDataItemGet::Unload() {
}

bool UMacanUIDataItemGet::StayWindow() {
    return false;
}

void UMacanUIDataItemGet::SetVisibleItemGet(bool IsVisible, bool isBattle) {
}

bool UMacanUIDataItemGet::SetTotalRarity(int32 Rate) {
    return false;
}

void UMacanUIDataItemGet::SetPlayable(bool inPlayable) {
}

bool UMacanUIDataItemGet::SetMarkData(int32 Index, FItemAbilityDispData markData) {
    return false;
}

bool UMacanUIDataItemGet::SetMark(int32 Index, FName markID) {
    return false;
}

bool UMacanUIDataItemGet::SetItemNumber(int32 Number) {
    return false;
}

bool UMacanUIDataItemGet::SetItemID(FName ItemId) {
    return false;
}

void UMacanUIDataItemGet::SetArmRank(int32 Rate) {
}

void UMacanUIDataItemGet::RequestTestData(int32 item_id, EEquipRank rank, TArray<FItemAbilityDispData> inArray) {
}

void UMacanUIDataItemGet::RequestTest(int32 item_id) {
}

bool UMacanUIDataItemGet::OpenWindow() {
    return false;
}

bool UMacanUIDataItemGet::IsOpeningWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataItemGet::IsDirtyWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataItemGet::IsDirtyRarity(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataItemGet::IsDirtyName(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataItemGet::IsDirtyMark(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataItemGet::IsDirtyItemNumber(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataItemGet::IsDirtyItemID(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataItemGet::IsDirtyItemAny(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataItemGet::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataItemGet::IsClosingWindow(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataItemGet::InitMarks(int32 maxMarks) {
}

EUIState UMacanUIDataItemGet::GetActiveUIState() const {
    return EUIState::NotSet;
}

void UMacanUIDataItemGet::ExecTest(bool isExe) {
}

bool UMacanUIDataItemGet::EndWindow() {
    return false;
}

void UMacanUIDataItemGet::DelBfOpeningWindow() {
}

void UMacanUIDataItemGet::DelBfDirtyWindow() {
}

void UMacanUIDataItemGet::DelBfDirtyRarityt() {
}

void UMacanUIDataItemGet::DelBfDirtyName() {
}

void UMacanUIDataItemGet::DelBfDirtyMark() {
}

void UMacanUIDataItemGet::DelBfDirtyItemNumber() {
}

void UMacanUIDataItemGet::DelBfDirtyItemID() {
}

void UMacanUIDataItemGet::DelBfClosingWindow() {
}

bool UMacanUIDataItemGet::CloseWindow() {
    return false;
}

bool UMacanUIDataItemGet::CloseManualWindow() {
    return false;
}

bool UMacanUIDataItemGet::CheckArmProtectorFromNumber(int32 ID) {
    return false;
}

bool UMacanUIDataItemGet::CheckArmProtector(FName ItemId) {
    return false;
}

bool UMacanUIDataItemGet::AddMarks(FName markID) {
    return false;
}

bool UMacanUIDataItemGet::AddMarkDatas(FItemAbilityDispData markData) {
    return false;
}


