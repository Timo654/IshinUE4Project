#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "FighterAIPerceptionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFighterAIPerceptionComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
    UFighterAIPerceptionComponent(const FObjectInitializer& ObjectInitializer);

};

