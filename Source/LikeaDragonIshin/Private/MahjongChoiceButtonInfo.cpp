#include "MahjongChoiceButtonInfo.h"

FMahjongChoiceButtonInfo::FMahjongChoiceButtonInfo() {
    this->IsSelect = false;
    this->ButtonType = EWBPButtoniconType::PS4_Batsu;
    this->selectState = EUIMahjongRightButtonState::None;
    this->beforeSelectState = EUIMahjongRightButtonState::None;
    this->isDisp = false;
}

