#include "MacanUIDataTintiro.h"

UMacanUIDataTintiro::UMacanUIDataTintiro() {
    this->possessionPoint = 0;
    this->StateUserInfo = EUIState::NotSet;
    this->statePossessionPoint = EUIState::NotSet;
    this->StateResultMessage = EUIState::NotSet;
    this->ResultMessageDemeType = EUIDemeType::eTINTIRO_DEME_1;
    this->StateThreeIcon = EUIState::NotSet;
    this->StateContinueWindow = EUIState::NotSet;
    this->CursorContinueWindow = 0;
    this->isUpdateContinueWindowCursor = false;
    this->EnterContinueWindow = false;
    this->isUpdateEnterContinueWindow = false;
    this->isOpenedContinueWindow = false;
}

void UMacanUIDataTintiro::ShowUserData() {
}

void UMacanUIDataTintiro::ShowThreeIcon() {
}

void UMacanUIDataTintiro::ShowResultMessage() {
}

void UMacanUIDataTintiro::ShowPossessionPoint() {
}

void UMacanUIDataTintiro::SetUserData(int32 ID, FTintiroUserInfo userInfo) {
}

void UMacanUIDataTintiro::SetResultMessage(EUIDemeType Type) {
}

void UMacanUIDataTintiro::SetPossessionPoint(int32 Point) {
}

bool UMacanUIDataTintiro::SetContinueWindowCursor(int32 Index) {
    return false;
}

bool UMacanUIDataTintiro::OpenContinueWindow() {
    return false;
}

bool UMacanUIDataTintiro::IsDirtyUserInfo(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTintiro::IsDirtyThreeIcon(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTintiro::IsDirtyResultMessage(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTintiro::IsDirtyPossessionPoint(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTintiro::IsDirtyContinueWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataTintiro::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataTintiro::Initialize() {
}

void UMacanUIDataTintiro::HideUserData() {
}

void UMacanUIDataTintiro::HideThreeIcon() {
}

void UMacanUIDataTintiro::HideResultMessage() {
}

void UMacanUIDataTintiro::HidePossessionPoint() {
}

bool UMacanUIDataTintiro::EnterContinueWindowCursor() {
    return false;
}

void UMacanUIDataTintiro::DelBfDirtyUserInfo() {
}

void UMacanUIDataTintiro::DelBfDirtyThreeIcon() {
}

void UMacanUIDataTintiro::DelBfDirtyResultMessage() {
}

void UMacanUIDataTintiro::DelBfDirtyPossessionPoint() {
}

void UMacanUIDataTintiro::DelBfContinueWindow() {
}

void UMacanUIDataTintiro::DecideFinishContinueWindow() {
}

bool UMacanUIDataTintiro::CloseContinueWindow() {
    return false;
}

int32 UMacanUIDataTintiro::CastMenuCursorPos(int32 cursorPos) {
    return 0;
}


