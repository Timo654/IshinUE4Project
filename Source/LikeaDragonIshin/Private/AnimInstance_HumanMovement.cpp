#include "AnimInstance_HumanMovement.h"

UAnimInstance_HumanMovement::UAnimInstance_HumanMovement() {
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
    this->AxisForwardValue = 0.00f;
    this->AxisRightValue = 0.00f;
}

void UAnimInstance_HumanMovement::SetEnableRootMotion(bool in_Enable) {
}

ADevil2Human* UAnimInstance_HumanMovement::GetOwnerHuman() const {
    return NULL;
}


