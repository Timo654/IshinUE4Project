#include "MahjongSelectWindowInfo.h"

FMahjongSelectWindowInfo::FMahjongSelectWindowInfo() {
    this->SelectWindowState = EUIState::NotSet;
    this->SelectMessageType = EUIMahjongSelectMessageType::FirstMenu;
    this->SelectWindowCursor = 0;
    this->IsUpdateSelectWindowCursor = false;
    this->EnterSelectWindow = false;
    this->IsUpdateSelectWindow = false;
    this->IsUpdateEnterSelectWindow = false;
}

