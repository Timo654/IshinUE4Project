#include "StageColliData.h"

FStageColliData::FStageColliData() {
    this->Type = ESurfaceType::Default;
    this->colliMat = eSTCOL_MATERIAL::eSTCOL_MATERIAL_NONE;
    this->isShoesOff = false;
    this->isDamage = false;
    this->isUnrunnable = false;
    this->isTrafficable = false;
    this->isStair = false;
}

