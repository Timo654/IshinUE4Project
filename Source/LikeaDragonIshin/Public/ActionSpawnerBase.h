#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActionSpawnerBase.generated.h"

UCLASS(Blueprintable)
class AActionSpawnerBase : public AActor {
    GENERATED_BODY()
public:
    AActionSpawnerBase(const FObjectInitializer& ObjectInitializer);

};

