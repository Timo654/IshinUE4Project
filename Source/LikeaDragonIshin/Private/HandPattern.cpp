#include "HandPattern.h"

UHandPattern::UHandPattern() {
    this->HandPatternMotionTypeL = EHandPatternMotionType::invalid;
    this->HandPatternMotionTypeR = EHandPatternMotionType::invalid;
    this->DisableHandPattern = false;
    this->Skeleton = NULL;
    this->NextAnimSequence = NULL;
    this->PrevAnimSequence = NULL;
    this->IsNextAnimUseLastFrame = false;
    this->Animations.AddDefaulted(18);
    this->HandBlend = 1.00f;
    this->IsForceLock = false;
    this->LockBlend = 0.00f;
    this->LockDefaultType = EHandPatternMotionType::Hand_parts_1_Gu;
    this->m_bone_index_info_l.AddDefaulted(16);
    this->m_bone_index_info_r.AddDefaulted(16);
}


