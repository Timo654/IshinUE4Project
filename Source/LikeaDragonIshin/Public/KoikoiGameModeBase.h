#pragma once
#include "CoreMinimal.h"
#include "ERivalLevel.h"
#include "MacanGameModeBase.h"
#include "KoikoiGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class AKoikoiGameModeBase : public AMacanGameModeBase {
    GENERATED_BODY()
public:
    AKoikoiGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ERivalLevel GetLvFlag();
    
};

