#include "AnimNode_HandPattern.h"

FAnimNode_HandPattern::FAnimNode_HandPattern() {
    this->HandPattern = NULL;
    this->IsAnimGraphTest = false;
    this->HandPatternMotionTypeL_AnimGraphTest = EHandPatternMotionType::invalid;
    this->HandPatternMotionTypeR_AnimGraphTest = EHandPatternMotionType::invalid;
}

