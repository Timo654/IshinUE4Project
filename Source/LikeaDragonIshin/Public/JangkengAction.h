#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "JangkengAction.generated.h"

class AJangkengManager;

UCLASS(Blueprintable)
class AJangkengAction : public AActionBase {
    GENERATED_BODY()
public:
    AJangkengAction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetJangkengManagerBp(AJangkengManager* mgr);
    
};

