#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "StageColli.generated.h"

class UObject;

UCLASS(Blueprintable)
class UStageColli : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStageColli();

    UFUNCTION()
    static void SetObjectTypes(TArray<TEnumAsByte<EObjectTypeQuery>>& _objectTypes, const uint32 _mask, const uint32 _ignoreMask);
    
private:
    UFUNCTION(BlueprintCallable)
    static void ImportStageObjectTypes(UObject* _pWc);
    
public:
    UFUNCTION()
    static bool ignoreActorCheck(const FString& Actor, const uint32 _filter);
    
    UFUNCTION()
    static uint32 GetStageColli(const FVector _start, const FVector _end, UObject* _pWc);
    
    UFUNCTION()
    static bool GetSphereColli(FHitResult& _hitResult, const FVector _start, const FVector _end, const float _radius, const uint32 _filter, const uint32 _ignoreFilter, UObject* _pWc);
    
    UFUNCTION()
    static bool GetLineColli(FHitResult& _hitResult, const FVector _start, const FVector _end, const uint32 _filter, const uint32 _ignoreFilter, UObject* _pWc);
    
    UFUNCTION(BlueprintCallable)
    static float GetColliTest(const FVector _start, const FVector _end, const int32 _filter);
    
private:
    UFUNCTION()
    static bool GetColliRay(FHitResult& _hitResult, uint8 _mode, const FVector _start, const FVector _end, const float _radius, const uint32 _filter, const uint32 _ignoreFilter, UObject* _pWc);
    
public:
    UFUNCTION()
    static bool GetBoxColli(FHitResult& _hitResult, const FVector _start, const FVector _end, const FVector _half, const FRotator rot, const uint32 _filter, const uint32 _ignoreFilter, UObject* _pWc);
    
    UFUNCTION()
    static uint32 CollectBySphere(TArray<FHitResult>& _hitResults, const FVector _start, const FVector _end, const float _radius, const uint32 _filter, const uint32 _ignoreFilter, UObject* _pWc);
    
    UFUNCTION()
    static uint32 CollectByBox(TArray<FHitResult>& _hitResults, const FVector _start, const FVector _end, const FVector _halfSize, const FRotator _orientation, const uint32 _filter, const uint32 _ignoreFilter, UObject* _pWc);
    
};

