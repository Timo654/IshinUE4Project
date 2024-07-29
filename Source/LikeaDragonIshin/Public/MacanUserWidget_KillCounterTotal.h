#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_KillCounterTotal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_KillCounterTotal : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_KillCounterTotal();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCount(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void playAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void playAnimIn();
    
};

