#include "ApproachTargetData.h"

FApproachTargetData::FApproachTargetData() {
    this->CanApproachDist = 0;
    this->AimApproachDist = 0;
    this->UseAfterImage = false;
    this->DelayHumanTime = false;
    this->DelayFollowCamera = false;
    this->RotateToAimPos = false;
    this->UseFuncSetPos = false;
    this->AvoidFighter = false;
    this->AlwaysUpdateAimPos = false;
}

