#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "TintiroAction.generated.h"

class ATintiroManager;

UCLASS(Blueprintable)
class ATintiroAction : public AActionBase {
    GENERATED_BODY()
public:
    ATintiroAction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ATintiroManager* GetTintiroManager();
    
};

