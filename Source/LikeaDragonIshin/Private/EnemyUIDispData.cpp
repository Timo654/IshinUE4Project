#include "EnemyUIDispData.h"

FEnemyUIDispData::FEnemyUIDispData() {
    this->enemy_kind = EUINPCKind::Enemy;
    this->Index = 0;
    this->Percent = 0.00f;
    this->hasArmor = false;
    this->ArmorPercent = 0.00f;
    this->isMultigauge = false;
    this->warn = false;
    this->IsInViewport = false;
    this->isInVP_OSM = false;
    this->OSMarkerAngle = 0.00f;
    this->isVisibleBossDisp = false;
}

