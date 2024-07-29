#include "TaishiCardState.h"

FTaishiCardState::FTaishiCardState() {
    this->IsAvailable = false;
    this->molare = 0.00f;
    this->skill = 0.00f;
    this->isEscape = false;
    this->canUseSkill = false;
    this->skillNameDispTime = 0.00f;
    this->isSkillUsingForGauge = false;
}

