#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_ScrollArrow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_ScrollArrow : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_ScrollArrow();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDisp(bool isDisp);
    
};

