#include "MakiwariManager.h"

AMakiwariManager::AMakiwariManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsTestMode_ = false;
    this->IsKyoto_ = false;
    this->SucceededCount_ = 0;
    this->ComboCount_ = 0;
    this->CutLimitNormal_ = 100;
    this->CutLimitFirst_ = 20;
    this->CurrentState_ = EMakiWariState::Invalid;
    this->IsMakiSet_ = false;
    this->IsGrabMaki_ = false;
    this->IsFirstPlay_ = true;
    this->CurrentMakiIndex_ = 0;
    this->MOTION_SPEED_MAX_ = 2.00f;
    this->SUCCEED_MAX_ = 999;
    this->MainWidgetType_ = EUIMainType::Makiwari;
    this->BaseRotateDegree_ = 0.00f;
}

void AMakiwariManager::UpdateUI() {
}


void AMakiwariManager::ExecFinish() {
}


void AMakiwariManager::CheckInput() {
}

bool AMakiwariManager::CheckFinishInput() {
    return false;
}


