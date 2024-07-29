#include "DaDamageTypeInfo.h"

UDaDamageTypeInfo::UDaDamageTypeInfo() {
}

FDamageTypeInfo UDaDamageTypeInfo::GetDamageTypeInfo(EAttackDamageType in_DamageType) const {
    return FDamageTypeInfo{};
}

bool UDaDamageTypeInfo::ExistsDamageTypeInfo(EAttackDamageType in_DamageType) const {
    return false;
}


