#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ETaishiRarity.h"
#include "ETaishiType.h"
#include "AcquisitionConditionData.generated.h"

UCLASS(Blueprintable)
class UAcquisitionConditionData : public UObject {
    GENERATED_BODY()
public:
    UAcquisitionConditionData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isInPossession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETaishiType getType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETaishiRarity getRarity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName() const;
    
};

