#include "UIOptionItemData.h"

FUIOptionItemData::FUIOptionItemData() {
    this->mainCategoryType = EUIMMOptionMainCategoryType::NotSet;
    this->editValueTextCurrentIndex = 0;
    this->editValueSliderRatio = 0.00f;
    this->editValueSliderRealValue = 0;
    this->detallTexture = NULL;
    this->editType = EUIMMOptionEditType::Text;
    this->dispEditFrame = false;
    this->isFocused = false;
    this->isDisable = false;
    this->IsPressed = false;
    this->isSelected = false;
}

