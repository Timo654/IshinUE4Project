#include "TaishiCardData.h"

FTaishiCardData::FTaishiCardData() {
    this->Type = ETaishiType::Attack;
    this->isAwake = false;
    this->rarity = ETaishiRarity::COMMON;
    this->lv = 0;
    this->arts_disp_time_seconds = 0.00f;
}

