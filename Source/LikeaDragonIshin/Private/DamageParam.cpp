#include "DamageParam.h"

FDamageParam::FDamageParam() {
    this->Damage = 0;
    this->HeatRatio = 0.00f;
    this->CalcType = EDamageNotifyCalcType::Fix;
}

