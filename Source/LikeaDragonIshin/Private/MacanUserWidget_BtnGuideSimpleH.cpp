#include "MacanUserWidget_BtnGuideSimpleH.h"

UMacanUserWidget_BtnGuideSimpleH::UMacanUserWidget_BtnGuideSimpleH() {
    this->isIgnoreUpdateNotice = false;
    this->myOwnerMainType = EUIMainType::NotSet;
    this->isFromLeftToRight = false;
}


bool UMacanUserWidget_BtnGuideSimpleH::UpdateBtnGuide(TArray<FUIBtnGuideItemData>& inItemDataArray) {
    return false;
}


