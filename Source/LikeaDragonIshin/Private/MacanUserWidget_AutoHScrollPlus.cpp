#include "MacanUserWidget_AutoHScrollPlus.h"

UMacanUserWidget_AutoHScrollPlus::UMacanUserWidget_AutoHScrollPlus() {
    this->AutoHScrollTarget = NULL;
    this->nowScrollOffsetEnd = 0.00f;
    this->nowScrollOffset = 0.00f;
    this->ElapsedTime = 0.00f;
    this->myPhase = EUIAutoHScrollPlusPhase::NotSet;
    this->IsEnable = true;
    this->isAlwayScroll = false;
    this->ScrollSpeed = 100.00f;
    this->StartDelay = 0.00f;
    this->EndDelay = 1.00f;
    this->FadeInDelay = 1.50f;
    this->FadeOutDelay = 0.50f;
}


