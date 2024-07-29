#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PokerPlayerController.generated.h"

UCLASS(Blueprintable)
class APokerPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    APokerPlayerController(const FObjectInitializer& ObjectInitializer);

};

