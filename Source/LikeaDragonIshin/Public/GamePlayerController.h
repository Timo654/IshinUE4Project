#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GamePlayerController.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AGamePlayerController : public APlayerController {
    GENERATED_BODY()
public:
    AGamePlayerController(const FObjectInitializer& ObjectInitializer);

};

