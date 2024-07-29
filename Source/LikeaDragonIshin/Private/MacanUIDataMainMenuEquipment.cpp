#include "MacanUIDataMainMenuEquipment.h"

UMacanUIDataMainMenuEquipment::UMacanUIDataMainMenuEquipment() {
    this->bfData = 0;
    this->currentShojiType = EUIMMEquipmentShojiType::Weapon;
    this->currentSortType = EUIMMEquipmentShojiSortType::ATK;
    this->arrayBtnData.AddDefaulted(1);
    this->shojiNumNow = 0;
    this->shojiNumMax = 0;
    this->enableDetailArrowL = false;
    this->enableDetailArrowR = false;
    this->updateSelectionStartIdx = 0;
    this->updateSelectionCreateNum = 0;
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
    this->playingAnimBlink = 0;
    this->playingAnimEquipped = 0;
    this->playingAnimRemoveEquipped = 0;
}

void UMacanUIDataMainMenuEquipment::UpdateShojiNum(int32 inNow, int32 inMax) {
}

void UMacanUIDataMainMenuEquipment::UpdateSelectionItemDataTerm() {
}

void UMacanUIDataMainMenuEquipment::UpdateSelectionItemDataProc(int32 start_index, int32 create_num) {
}

void UMacanUIDataMainMenuEquipment::UpdateSelectionItemDataPrep(TArray<FUIEquipItemData>& inArray, EUIMMEquipmentShojiType inShojiType, EUIMMEquipmentShojiSortType inSortType) {
}

void UMacanUIDataMainMenuEquipment::UpdateMessage(FText& inMessage) {
}

void UMacanUIDataMainMenuEquipment::UpdateItemData(EUIMMEquipmentBfType inType, TArray<FUIEquipItemData>& inArray) {
}

void UMacanUIDataMainMenuEquipment::UpdateCreateRightWidgetsType(EUIKajiyaCreateRightWidgetsType inType, bool isQuick) {
}

void UMacanUIDataMainMenuEquipment::UpdateButtonInfo(TArray<FUIBtnGuideItemData>& inArray) {
}

void UMacanUIDataMainMenuEquipment::SetFlag(EUIMMEquipmentBfType Type) {
}

void UMacanUIDataMainMenuEquipment::SetCurrentSortType(EUIMMEquipmentShojiSortType inType) {
}

void UMacanUIDataMainMenuEquipment::SetCurrentShojiType(EUIMMEquipmentShojiType inType) {
}

void UMacanUIDataMainMenuEquipment::OpenWidget(EUIMMEquipmentBfType inType, bool isQuick) {
}

bool UMacanUIDataMainMenuEquipment::IsOnFlag(EUIResultOnOrOff& result, EUIMMEquipmentBfType Type) {
    return false;
}

bool UMacanUIDataMainMenuEquipment::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataMainMenuEquipment::DelFlag(EUIMMEquipmentBfType Type) {
}

void UMacanUIDataMainMenuEquipment::CloseWidget(EUIMMEquipmentBfType inType, bool isQuick) {
}

bool UMacanUIDataMainMenuEquipment::CheckReplaceAndSetCurrentSelectionItemPool() {
    return false;
}


