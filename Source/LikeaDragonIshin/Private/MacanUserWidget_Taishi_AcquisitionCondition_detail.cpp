#include "MacanUserWidget_Taishi_AcquisitionCondition_detail.h"

UMacanUserWidget_Taishi_AcquisitionCondition_detail::UMacanUserWidget_Taishi_AcquisitionCondition_detail() {
    this->elem_list = NULL;
    this->elem_num = NULL;
    this->elem_arrow_top = NULL;
    this->elem_arrow_bottom = NULL;
}

void UMacanUserWidget_Taishi_AcquisitionCondition_detail::setupAfter() {
}

int32 UMacanUserWidget_Taishi_AcquisitionCondition_detail::getSelectableMax() const {
    return 0;
}

void UMacanUserWidget_Taishi_AcquisitionCondition_detail::addItemForBP(bool inPossession, ETaishiType _type, ETaishiRarity _rarity, const FText& _name) {
}


