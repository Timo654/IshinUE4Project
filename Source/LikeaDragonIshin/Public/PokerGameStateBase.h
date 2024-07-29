#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "PokerGameStateBase.generated.h"

UCLASS(Blueprintable)
class APokerGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    APokerGameStateBase(const FObjectInitializer& ObjectInitializer);

};

