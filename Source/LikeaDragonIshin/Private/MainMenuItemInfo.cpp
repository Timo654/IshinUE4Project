#include "MainMenuItemInfo.h"

FMainMenuItemInfo::FMainMenuItemInfo() {
    this->ItemType = EUIMainMenuItemType::Items;
    this->isFocused = false;
    this->IsDisabled = false;
    this->IsPressed = false;
    this->isVisibleNewMark = false;
}

