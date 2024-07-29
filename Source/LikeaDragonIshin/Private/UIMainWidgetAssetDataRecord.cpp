#include "UIMainWidgetAssetDataRecord.h"

FUIMainWidgetAssetDataRecord::FUIMainWidgetAssetDataRecord() {
    this->MainType = EUIMainType::NotSet;
    this->category = EUICategory::NotSet;
    this->SubCategory = EUISubCategory::NotSet;
    this->ZOrderType = EUIZOrderType::NotSet;
    this->OwningType = EUIOwningType::NotSet;
    this->UIDataClass = NULL;
    this->IsResident = false;
}

