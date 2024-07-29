#include "UIMoneyData.h"

FUIMoneyData::FUIMoneyData() {
    this->IsDirty = false;
    this->isOpend = false;
    this->isResetByWBP = false;
    this->Index = 0;
    this->uiState = EUIState::NotSet;
    this->Value = 0;
    this->iconType = EUIMoneyIconType::Money;
    this->isInvisibleBG = false;
}

