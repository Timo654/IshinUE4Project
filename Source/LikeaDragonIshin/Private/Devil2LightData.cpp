#include "Devil2LightData.h"

FDevil2LightData::FDevil2LightData() {
    this->Type = EDevil2LightType::Directional;
    this->dwFileNo = 0;
    this->Intensity = 0.00f;
    this->Radius = 0.00f;
    this->useTemperature = false;
    this->Temperature = 0.00f;
}

