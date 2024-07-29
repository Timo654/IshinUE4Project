#include "EnemyUIData.h"

FEnemyUIData::FEnemyUIData() {
    this->enemy_kind = EUINPCKind::Enemy;
    this->Index = 0;
    this->maxHP = 0;
    this->nowHP = 0;
    this->maxArmor = 0;
    this->nowArmor = 0;
    this->MaxGaugeCount = 0;
    this->IsInViewport = false;
    this->isInVP_OSM = false;
    this->OSMarkerAngle = 0.00f;
    this->isVisibleBossDisp = false;
}

