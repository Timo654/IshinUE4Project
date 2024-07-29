#include "MacanUIDataKajiya.h"

UMacanUIDataKajiya::UMacanUIDataKajiya() {
    this->arrayHammerData.AddDefaulted(5);
    this->bfData = 0;
    this->isForcusedYesMessage = false;
    this->isSelectedYesNo = false;
    this->textWindowType = EUITextWindowType::Text;
    this->arrayBtnData.AddDefaulted(1);
    this->shojiNumNow = 0;
    this->shojiNumMax = 0;
    this->topMenuFocusedIndex = 0;
    this->topMenuPressed = false;
    this->currentPowerUpRightWidgetsType = EUIKajiyaPowerUpRightWidgetsType::Src;
    this->currentPowerUpLeftWidgetsType = EUIKajiyaPowerUpLeftWidgetsType::EquipList;
    this->isQuickLeftWidgets = false;
    this->PowerUpCost = 0;
    this->isPowerupCostColorRed = false;
    this->powerupSuccessPercentageNum = 0;
    this->powerupDecideButtonUIState = EUIState::DisabledNormal;
    this->arrayDisassemblyTabData.AddDefaulted(8);
    this->disassemblyTotalNum = 0;
    this->disassemblyTotalScrollOffset = 0.00f;
    this->disassemblyTotalScrollOffsetOfEnd = 1.00f;
    this->pDisassemblyTotalScrollBox = NULL;
}

void UMacanUIDataKajiya::UpdateYesNo(bool isForcedYes, bool isSelected) {
}

void UMacanUIDataKajiya::UpdateTopMenuFocusedIndex(int32 inIndex, bool IsPressed) {
}

void UMacanUIDataKajiya::UpdateShojiNum(int32 inNow, int32 inMax) {
}

void UMacanUIDataKajiya::UpdatePowerUpRightWidgetsType(EUIKajiyaPowerUpRightWidgetsType inType, bool isQuick) {
}

void UMacanUIDataKajiya::UpdatePowerUpLeftWidgetsType(EUIKajiyaPowerUpLeftWidgetsType inType, bool isQuick) {
}

void UMacanUIDataKajiya::UpdateMessage(FText& inMessage, EUITextWindowType inType) {
}

bool UMacanUIDataKajiya::UpdateDisassemblyTotalScrollOffset(float InOffset) {
    return false;
}

void UMacanUIDataKajiya::UpdateCreateRightWidgetsType(EUIKajiyaCreateRightWidgetsType inType, bool isQuick) {
}

void UMacanUIDataKajiya::SetFlag(EUIKajiyaBfType Type) {
}

void UMacanUIDataKajiya::OpenWidget(EUIKajiyaBfType inType, bool isQuick) {
}

bool UMacanUIDataKajiya::IsOnFlag(EUIResultOnOrOff& result, EUIKajiyaBfType Type) {
    return false;
}

bool UMacanUIDataKajiya::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataKajiya::GetDisassemblyTotalScrollOffsets() {
    return false;
}

EUIState UMacanUIDataKajiya::FindUIState(EUIResultSuccessOrFailed& result, EUIKajiyaBfType inType) {
    return EUIState::NotSet;
}

void UMacanUIDataKajiya::DelFlag(EUIKajiyaBfType Type) {
}

void UMacanUIDataKajiya::CloseWidget(EUIKajiyaBfType inType, bool isQuick) {
}

bool UMacanUIDataKajiya::CheckReplaceAndSetCurrentSelectionItemPool() {
    return false;
}


