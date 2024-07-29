#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TenshiShouten.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TenshiShouten : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_TenshiShouten();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnimationFinished();
    
};

