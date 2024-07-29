#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "ChohanAction.generated.h"

class AChohanGameState;

UCLASS(Blueprintable)
class AChohanAction : public AActionBase {
    GENERATED_BODY()
public:
    AChohanAction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGameState(AChohanGameState* State);
    
};

