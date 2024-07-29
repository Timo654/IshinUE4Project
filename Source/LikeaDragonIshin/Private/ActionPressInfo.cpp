#include "ActionPressInfo.h"

FActionPressInfo::FActionPressInfo() {
    this->IsUpdateData = false;
    this->isDisp = false;
    this->PressAnimState = EUIPressAnimState::eNONE;
    this->TimeValue = 0.00f;
    this->ButtonIconType = EWBPButtoniconType::PS4_Batsu;
    this->NowKind = EUIPressKind::eNORMAL;
    this->IsShowArrow = false;
}

