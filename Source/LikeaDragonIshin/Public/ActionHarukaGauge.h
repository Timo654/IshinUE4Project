#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "ActionHarukaGauge.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class AActionHarukaGauge : public AActionBase {
    GENERATED_BODY()
public:
    AActionHarukaGauge(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestEnd();
    
    UFUNCTION(BlueprintCallable)
    void TestAddCounter(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void LoadHarukaGaugeParam(UDataTable* Table);
    
};

