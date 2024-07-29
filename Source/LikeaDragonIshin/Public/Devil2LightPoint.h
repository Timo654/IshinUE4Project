#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Devil2LightPoint.generated.h"

class UPointLightComponent;

UCLASS(Blueprintable)
class ADevil2LightPoint : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dwFileNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* m_pPointLightComponent;
    
public:
    ADevil2LightPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetParam(const int32 _dwFileNo, const FLinearColor _color, const float _intensity, const float _radius, const bool _isUseTemperature, const float _temperature);
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool _isEnable);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFileNo();
    
};

