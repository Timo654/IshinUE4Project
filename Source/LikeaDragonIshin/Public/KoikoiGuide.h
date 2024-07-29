#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoikoiGuide.generated.h"

class AKoikoiCard;
class UKoikoiPlayerComponent;

UCLASS(Blueprintable)
class AKoikoiGuide : public AActor {
    GENERATED_BODY()
public:
    AKoikoiGuide(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool CheckKirakiraHand(UKoikoiPlayerComponent* Player, AKoikoiCard* Hand, const TArray<AKoikoiCard*>& getCards, bool useHanami, bool useShun);
    
};

