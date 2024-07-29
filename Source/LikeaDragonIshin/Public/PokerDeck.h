#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PokerDeck.generated.h"

class APokerCard;

UCLASS(Blueprintable)
class APokerDeck : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MAX_CARD;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APokerCard*> m_pCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APokerCard*> m_ppDeck;
    
public:
    APokerDeck(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Initialize();
    
};

