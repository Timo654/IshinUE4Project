#include "MotionProperty.h"

UMotionProperty::UMotionProperty() {
    this->Wait = false;
    this->LoopTrans = false;
    this->FromStartPose = false;
    this->ProgMove = false;
    this->Loop = false;
    this->DisableYoroke = false;
    this->ProgMoveSpeed_ = 0.00f;
    this->AddStartAngle = 0;
    this->AddEndAngle = 0;
}


