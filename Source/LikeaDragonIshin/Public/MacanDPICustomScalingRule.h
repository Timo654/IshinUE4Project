#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DPICustomScalingRule.h"
#include "MacanDPICustomScalingRule.generated.h"

UCLASS(Blueprintable)
class UMacanDPICustomScalingRule : public UDPICustomScalingRule {
    GENERATED_BODY()
public:
    UMacanDPICustomScalingRule();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetBaseSize();
    
};

