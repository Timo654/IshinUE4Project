#include "Devil2LightDataStruct.h"

FDevil2LightDataStruct::FDevil2LightDataStruct() {
    this->Type = EDevil2LightType::Directional;
    this->dwFileNo = 0;
    this->Intensity = 0.00f;
    this->Radius = 0.00f;
    this->useTemperature = false;
    this->Temperature = 0.00f;
}

