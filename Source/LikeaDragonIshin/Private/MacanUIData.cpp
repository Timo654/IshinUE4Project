#include "MacanUIData.h"

UMacanUIData::UMacanUIData() {
    this->MainType = EUIMainType::NotSet;
}

bool UMacanUIData::ReflectChangesByUI() {
    return false;
}

bool UMacanUIData::ReflectChangesBySystem() {
    return false;
}

bool UMacanUIData::ReflectChangesByGame() {
    return false;
}


