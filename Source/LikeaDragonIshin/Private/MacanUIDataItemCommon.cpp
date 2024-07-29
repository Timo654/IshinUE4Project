#include "MacanUIDataItemCommon.h"

UMacanUIDataItemCommon::UMacanUIDataItemCommon() {
}

EUIMMItemTabType UMacanUIDataItemCommon::UIFuncUIItemItemDataGetItemTabType(FUIItemItemData& refData) {
    return EUIMMItemTabType::CarryItem;
}

int32 UMacanUIDataItemCommon::UIFuncUIItemItemDataGetItemNumID(FUIItemItemData& refData) {
    return 0;
}

int32 UMacanUIDataItemCommon::UIFuncUIItemItemDataGetInvalidItemNumID() {
    return 0;
}

bool UMacanUIDataItemCommon::UIFuncUIItemItemDataCheckZeroDisp(FUIItemItemData& refData, EUIResultNecessaryOrUnnecessary& result) {
    return false;
}

bool UMacanUIDataItemCommon::UIFuncItemNumIDIsValid(int32 inNumID, EUIResultValidOrInvalid& result) {
    return false;
}

void UMacanUIDataItemCommon::UIFuncItemDataToEquipItemData(FUIItemItemData& refData, FUIEquipItemData& refOutData) {
}

FUIItemItemData UMacanUIDataItemCommon::UIFuncItemDataAddItemNumID(FUIItemItemData inData, int32 inNumID) {
    return FUIItemItemData{};
}


