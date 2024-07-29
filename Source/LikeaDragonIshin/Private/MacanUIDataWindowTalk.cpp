#include "MacanUIDataWindowTalk.h"

UMacanUIDataWindowTalk::UMacanUIDataWindowTalk() {
    this->windowMessageUIState = EUIState::NotSet;
    this->windowNameUIState = EUIState::NotSet;
    this->jibikiUIState = EUIState::NotSet;
    this->isValidAutoWrapText = true;
    this->isVisibleNextButton = true;
    this->autoBtnUIState = EUIState::NotSet;
    this->isAutoBtnOn = false;
    this->messageIsCentering = false;
    this->ccMessageLength = 0;
    this->isCCMessageAllDisped = false;
    this->isUsedCCMessage = false;
    this->ccMessageDispCount = 0;
}

bool UMacanUIDataWindowTalk::UpdateCCMessageDispCount(int32 inCount) {
    return false;
}

bool UMacanUIDataWindowTalk::SetVisibilityNextButton(bool IsVisible) {
    return false;
}

bool UMacanUIDataWindowTalk::SetName(FText& InText, FColor inColor) {
    return false;
}

bool UMacanUIDataWindowTalk::SetMessage(FText& InText, bool isCentering, FColor inColor, bool isCCMessage) {
    return false;
}

bool UMacanUIDataWindowTalk::SetAutoWrapText(bool IsValid) {
    return false;
}

bool UMacanUIDataWindowTalk::SetAutoBtnOn() {
    return false;
}

bool UMacanUIDataWindowTalk::SetAutoBtnOff() {
    return false;
}

bool UMacanUIDataWindowTalk::OpenWindowName(bool isQuick) {
    return false;
}

bool UMacanUIDataWindowTalk::OpenWindowMessage(bool isQuick) {
    return false;
}

bool UMacanUIDataWindowTalk::OpenJibiki(bool isQuick) {
    return false;
}

bool UMacanUIDataWindowTalk::OpenAutoBtn(bool isQuick) {
    return false;
}

bool UMacanUIDataWindowTalk::IsOpeningWindowName(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsOpeningWindowMessage(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsOpeningJibiki(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsOpeningAutoBtn(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsDirtyWindowName(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsDirtyWindowMessage(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsDirtyNextButton(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsDirtyName(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsDirtyMessage(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsDirtyJibiki(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsDirtyCCMessage(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsDirtyAutoWrapText(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsDirtyAutoBtn(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsClosingWindowName(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsClosingWindowMessage(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsClosingJibiki(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataWindowTalk::IsClosingAutoBtn(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataWindowTalk::DelBfOpeningWindowName() {
}

void UMacanUIDataWindowTalk::DelBfOpeningWindowMessage() {
}

void UMacanUIDataWindowTalk::DelBfOpeningJibiki() {
}

void UMacanUIDataWindowTalk::DelBfOpeningAutoBtn() {
}

void UMacanUIDataWindowTalk::DelBfDirtyWindowName() {
}

void UMacanUIDataWindowTalk::DelBfDirtyWindowMessage() {
}

void UMacanUIDataWindowTalk::DelBfDirtyNextButton() {
}

void UMacanUIDataWindowTalk::DelBfDirtyName() {
}

void UMacanUIDataWindowTalk::DelBfDirtyMessage() {
}

void UMacanUIDataWindowTalk::DelBfDirtyJibiki() {
}

void UMacanUIDataWindowTalk::DelBfDirtyCCMessage() {
}

void UMacanUIDataWindowTalk::DelBfDirtyAutoWrapText() {
}

void UMacanUIDataWindowTalk::DelBfDirtyAutoBtn() {
}

void UMacanUIDataWindowTalk::DelBfClosingWindowName() {
}

void UMacanUIDataWindowTalk::DelBfClosingWindowMessage() {
}

void UMacanUIDataWindowTalk::DelBfClosingJibiki() {
}

void UMacanUIDataWindowTalk::DelBfClosingAutoBtn() {
}

bool UMacanUIDataWindowTalk::CloseWindowName(bool isQuick) {
    return false;
}

bool UMacanUIDataWindowTalk::CloseWindowMessage(bool isQuick) {
    return false;
}

bool UMacanUIDataWindowTalk::CloseJibiki(bool isQuick) {
    return false;
}

bool UMacanUIDataWindowTalk::CloseAutoBtn(bool isQuick) {
    return false;
}


