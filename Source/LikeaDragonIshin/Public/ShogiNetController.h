#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShogiNetController.generated.h"

UCLASS(Blueprintable)
class AShogiNetController : public AActor {
    GENERATED_BODY()
public:
    AShogiNetController(const FObjectInitializer& ObjectInitializer);

};

