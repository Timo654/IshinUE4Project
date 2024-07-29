#include "AttackData.h"

FAttackData::FAttackData() {
    this->DamageType = EAttackDamageType::AIR;
    this->DirType = EDirType::FRONT;
    this->HeightType = EDamageHeightType::HEAD;
    this->LevelType = EDamageLevelType::LEVEL_0;
    this->Damage = 0;
    this->HeatRatio = 0.00f;
    this->KnockBackLv = 0;
    this->KnockBackLvOnGuard = 0;
    this->VibCameraID = 0;
    this->VibCameraInvalidOnGuard = false;
    this->VibPadID = 0;
    this->VibPadInvalidOnGuard = false;
}

