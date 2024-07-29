#include "TitleMenuItemInfo.h"

FTitleMenuItemInfo::FTitleMenuItemInfo() {
    this->ItemType = EUITitleMenuItemType::NewGame;
    this->isFocused = false;
    this->isVisibleNewMark = false;
    this->IsPressed = false;
}

