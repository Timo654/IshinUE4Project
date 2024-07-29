#include "AnimInstance_Fighter.h"

UAnimInstance_Fighter::UAnimInstance_Fighter() {
    this->LeverForce_ = 0.00f;
    this->LeverRelativeForward_ = 0.00f;
    this->LeverRelativeRight_ = 0.00f;
    this->IsShift_ = false;
}

ADevil2Human* UAnimInstance_Fighter::GetOwnerFighter() const {
    return NULL;
}


