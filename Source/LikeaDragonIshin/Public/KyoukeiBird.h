#pragma once
#include "CoreMinimal.h"
#include "Devil2Human.h"
#include "KyoukeiBird.generated.h"

UCLASS(Blueprintable)
class AKyoukeiBird : public ADevil2Human {
    GENERATED_BODY()
public:
    AKyoukeiBird(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlayFootStepSound();
    
    UFUNCTION(BlueprintCallable)
    float GetAnimSpeed();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnimId();
    
};

