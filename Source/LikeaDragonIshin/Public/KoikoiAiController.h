#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "KoikoiAiController.generated.h"

UCLASS(Blueprintable)
class AKoikoiAiController : public AAIController {
    GENERATED_BODY()
public:
    AKoikoiAiController(const FObjectInitializer& ObjectInitializer);

};

