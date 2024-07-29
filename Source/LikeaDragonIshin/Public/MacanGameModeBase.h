#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MacanGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class AMacanGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    AMacanGameModeBase(const FObjectInitializer& ObjectInitializer);

};

