#include "MacanUIDataEquipmentCommon.h"

UMacanUIDataEquipmentCommon::UMacanUIDataEquipmentCommon() {
    this->currentCreateRightWidgetsType = EUIKajiyaCreateRightWidgetsType::Dst;
    this->isQuickRightWidgets = false;
    this->creatitionCost = 0;
    this->creationCostIsEnough = false;
    this->currentDstType = EUIKajiyaWeaponsAndArmorType::Katana;
    this->currentRank = 0;
    this->currentTreeType = EUIKajiyaWeaponsAndArmorType::Katana;
    this->lastTreeTypeNum = -1;
}

bool UMacanUIDataEquipmentCommon::UIFuncUIEquipItemNumIDIsValid(int32 inNumID, EUIResultValidOrInvalid& result) {
    return false;
}

int32 UMacanUIDataEquipmentCommon::UIFuncUIEquipItemDataGetInvalidItemNumID() {
    return 0;
}

void UMacanUIDataEquipmentCommon::UIFuncEquipItemDataSetItemNumID(FUIEquipItemData& refData, int32 inNumID) {
}

void UMacanUIDataEquipmentCommon::UIFuncEquipItemDataIsValid(FUIEquipItemData& refData, EUIResultValidOrInvalid& result) {
}

void UMacanUIDataEquipmentCommon::UIFuncEquipItemDataIsHave3DModelGetPoolCarry(FUIEquipItemData& refData, EUIResultYesOrNo& result) {
}

void UMacanUIDataEquipmentCommon::UIFuncEquipItemDataIsHave3DModel(FUIEquipItemData& refData, EUIResultYesOrNo& result) {
}

void UMacanUIDataEquipmentCommon::UIFuncEquipItemDataIsBullet(FUIEquipItemData& refData, EUIResultYesOrNo& result) {
}

int32 UMacanUIDataEquipmentCommon::UIFuncEquipItemDataGetItemNumID(FUIEquipItemData& refData) {
    return 0;
}

FUIEquipItemData UMacanUIDataEquipmentCommon::UIFuncEquipItemDataAddItemNumID(FUIEquipItemData inData, int32 inNumID) {
    return FUIEquipItemData{};
}

int32 UMacanUIDataEquipmentCommon::FindTreeItemDataIndex(EUIResultSuccessOrFailed& result, FName TargetId) {
    return 0;
}


