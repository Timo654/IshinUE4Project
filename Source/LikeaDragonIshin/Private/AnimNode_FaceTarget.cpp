#include "AnimNode_FaceTarget.h"

FAnimNode_FaceTarget::FAnimNode_FaceTarget() {
    this->FaceTarget = NULL;
    this->IsAnimGraphTest = false;
    this->FacePatternType_AnimGraphTest = EFacePatternType::invalid;
    this->bIsInitializeNow = false;
    this->bIsEvent = false;
}

