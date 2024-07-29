#include "AnimInstance_Human.h"

UAnimInstance_Human::UAnimInstance_Human() {
    this->OwnerHuman_ = NULL;
    this->IsMoving_ = false;
    this->IsMovingForward_ = false;
    this->IsShiftMoving_ = false;
    this->IsRunning_ = false;
    this->IsInAir_ = false;
    this->IsAttacking_ = false;
    this->IsDown_ = false;
    this->IsDownF_ = false;
    this->IsSway_ = false;
    this->LocoSpeed_ = 0.00f;
    this->LocoSpeedRatio_ = 1.00f;
    this->LocoLength_ = 0.00f;
    this->LocoDirection_ = 0.00f;
    this->FaceTarget_ = NULL;
    this->HandPattern_ = NULL;
    this->AxisForwardValue_ = 0.00f;
    this->AxisRightValue_ = 0.00f;
}

void UAnimInstance_Human::UpdateRootMotionInfo_Implementation() {
}

void UAnimInstance_Human::UpdateLocomotionInfo_Implementation() {
}

ADevil2Human* UAnimInstance_Human::GetHuman() const {
    return NULL;
}

void UAnimInstance_Human::CalcDirAndVel_Implementation() {
}


