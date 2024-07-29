#include "StageColli.h"

UStageColli::UStageColli() {
}

void UStageColli::SetObjectTypes(TArray<TEnumAsByte<EObjectTypeQuery>>& _objectTypes, const uint32 _mask, const uint32 _ignoreMask) {
}

void UStageColli::ImportStageObjectTypes(UObject* _pWc) {
}

bool UStageColli::ignoreActorCheck(const FString& Actor, const uint32 _filter) {
    return false;
}

uint32 UStageColli::GetStageColli(const FVector _start, const FVector _end, UObject* _pWc) {
    return 0;
}

bool UStageColli::GetSphereColli(FHitResult& _hitResult, const FVector _start, const FVector _end, const float _radius, const uint32 _filter, const uint32 _ignoreFilter, UObject* _pWc) {
    return false;
}

bool UStageColli::GetLineColli(FHitResult& _hitResult, const FVector _start, const FVector _end, const uint32 _filter, const uint32 _ignoreFilter, UObject* _pWc) {
    return false;
}

float UStageColli::GetColliTest(const FVector _start, const FVector _end, const int32 _filter) {
    return 0.0f;
}

bool UStageColli::GetColliRay(FHitResult& _hitResult, uint8 _mode, const FVector _start, const FVector _end, const float _radius, const uint32 _filter, const uint32 _ignoreFilter, UObject* _pWc) {
    return false;
}

bool UStageColli::GetBoxColli(FHitResult& _hitResult, const FVector _start, const FVector _end, const FVector _half, const FRotator rot, const uint32 _filter, const uint32 _ignoreFilter, UObject* _pWc) {
    return false;
}

uint32 UStageColli::CollectBySphere(TArray<FHitResult>& _hitResults, const FVector _start, const FVector _end, const float _radius, const uint32 _filter, const uint32 _ignoreFilter, UObject* _pWc) {
    return 0;
}

uint32 UStageColli::CollectByBox(TArray<FHitResult>& _hitResults, const FVector _start, const FVector _end, const FVector _halfSize, const FRotator _orientation, const uint32 _filter, const uint32 _ignoreFilter, UObject* _pWc) {
    return 0;
}


