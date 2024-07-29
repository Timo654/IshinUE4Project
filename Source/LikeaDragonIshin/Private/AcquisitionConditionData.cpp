#include "AcquisitionConditionData.h"

UAcquisitionConditionData::UAcquisitionConditionData() {
}

bool UAcquisitionConditionData::isInPossession() const {
    return false;
}

ETaishiType UAcquisitionConditionData::getType() const {
    return ETaishiType::Attack;
}

ETaishiRarity UAcquisitionConditionData::getRarity() const {
    return ETaishiRarity::COMMON;
}

FText UAcquisitionConditionData::GetName() const {
    return FText::GetEmpty();
}


