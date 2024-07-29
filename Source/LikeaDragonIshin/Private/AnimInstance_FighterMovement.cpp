#include "AnimInstance_FighterMovement.h"

UAnimInstance_FighterMovement::UAnimInstance_FighterMovement() {
    this->LeverForce_ = 0.00f;
    this->LeverRelativeForward_ = 0.00f;
    this->LeverRelativeRight_ = 0.00f;
    this->IsShift_ = false;
    this->MoveBlend_ = NULL;
    this->ShiftMove_ = NULL;
    this->Stand_ = NULL;
}


