#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TintiroEntity.generated.h"

class UMacanUIDataTintiro;
class UUIManager;

UCLASS(Blueprintable)
class ATintiroEntity : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManager* pUIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataTintiro* UIData;
    
public:
    ATintiroEntity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUiData(UMacanUIDataTintiro* Data);
    
};

