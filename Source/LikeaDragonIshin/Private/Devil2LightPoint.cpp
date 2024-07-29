#include "Devil2LightPoint.h"
#include "Components/PointLightComponent.h"

ADevil2LightPoint::ADevil2LightPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_dwFileNo = 0;
    this->m_pPointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightComponent"));
}

void ADevil2LightPoint::SetParam(const int32 _dwFileNo, const FLinearColor _color, const float _intensity, const float _radius, const bool _isUseTemperature, const float _temperature) {
}

void ADevil2LightPoint::SetEnable(bool _isEnable) {
}

int32 ADevil2LightPoint::GetFileNo() {
    return 0;
}


