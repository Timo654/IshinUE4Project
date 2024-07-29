#pragma once
#include "CoreMinimal.h"
#include "CardChoiceDelegate.generated.h"

class AKoikoiCard;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCardChoice, AKoikoiCard*, selectedCard, int32, betCoin);

