#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "LightManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class ULightManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    ULightManager();

    UFUNCTION(BlueprintCallable)
    static void LightTest(int32 _id);
    
    UFUNCTION(BlueprintCallable)
    static void LightPointChangeFile(const int32 _iLPIndex);
    
    UFUNCTION()
    static uint32 LightDirectSetDefault(const int32 _iLDCIndex, int32 _iLDSIndex);
    
    UFUNCTION(BlueprintCallable)
    static void InsertSubPLightTest(AActor* _pActor);
    
    UFUNCTION(BlueprintCallable)
    static void InsertSubPLight(AActor* _actor, const FVector _ofsPos, const float _rotX, const float _rotZ);
    
    UFUNCTION(BlueprintCallable)
    static void InsertLightPointTest(FName _tag, const FVector _pos, const FLinearColor _color, const float _intensity, const float _radius);
    
    UFUNCTION()
    static uint32 InsertLightPointDlColor(FName _tag, const int32 _dwFileNo, const FVector _pos, const float _intensity, const float _radius);
    
    UFUNCTION()
    static uint32 InsertLightPoint(FName _tag, const int32 _dwFileNo, const FVector _pos, const FLinearColor _color, const float _intensity, const float _radius, const bool _isUseTemperature, const float _temperature);
    
private:
    UFUNCTION(BlueprintCallable)
    static void ImportDevil2LightData();
    
public:
    UFUNCTION(BlueprintCallable)
    static void EnableLightPoint(FName _tag, const bool _isDelete);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteSubPLightAll();
    
    UFUNCTION(BlueprintCallable)
    static void DeleteLightPoint(FName _tag);
    
    UFUNCTION(BlueprintCallable)
    static void AllDeleteLightPoint();
    
};

