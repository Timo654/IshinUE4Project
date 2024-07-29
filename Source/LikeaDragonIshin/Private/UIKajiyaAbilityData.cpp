#include "UIKajiyaAbilityData.h"

FUIKajiyaAbilityData::FUIKajiyaAbilityData() {
    this->isFocused = false;
    this->IsDisabled = false;
    this->IsPressed = false;
    this->takeoverType = EUIKajiyaAbilityTakeoverType::Empty;
    this->successPercentageNum = 0;
    this->reqCursorIn = false;
    this->reqCursorSlide = false;
    this->reqSuccess = false;
    this->reqFailed = false;
}

