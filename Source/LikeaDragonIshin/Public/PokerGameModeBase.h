#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EPokerMode.h"
#include "EPokerRule.h"
#include "PokerGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class APokerGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPokerRule Rule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPokerMode mode;
    
public:
    APokerGameModeBase(const FObjectInitializer& ObjectInitializer);

};

