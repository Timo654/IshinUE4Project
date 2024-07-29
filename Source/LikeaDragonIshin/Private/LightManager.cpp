#include "LightManager.h"

ULightManager::ULightManager() {
}

void ULightManager::LightTest(int32 _id) {
}

void ULightManager::LightPointChangeFile(const int32 _iLPIndex) {
}

uint32 ULightManager::LightDirectSetDefault(const int32 _iLDCIndex, int32 _iLDSIndex) {
    return 0;
}

void ULightManager::InsertSubPLightTest(AActor* _pActor) {
}

void ULightManager::InsertSubPLight(AActor* _actor, const FVector _ofsPos, const float _rotX, const float _rotZ) {
}

void ULightManager::InsertLightPointTest(FName _tag, const FVector _pos, const FLinearColor _color, const float _intensity, const float _radius) {
}

uint32 ULightManager::InsertLightPointDlColor(FName _tag, const int32 _dwFileNo, const FVector _pos, const float _intensity, const float _radius) {
    return 0;
}

uint32 ULightManager::InsertLightPoint(FName _tag, const int32 _dwFileNo, const FVector _pos, const FLinearColor _color, const float _intensity, const float _radius, const bool _isUseTemperature, const float _temperature) {
    return 0;
}

void ULightManager::ImportDevil2LightData() {
}

void ULightManager::EnableLightPoint(FName _tag, const bool _isDelete) {
}

void ULightManager::DeleteSubPLightAll() {
}

void ULightManager::DeleteLightPoint(FName _tag) {
}

void ULightManager::AllDeleteLightPoint() {
}


