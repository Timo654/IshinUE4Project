#pragma once
#include "CoreMinimal.h"
#include "EUIState.h"
#include "MacanUserWidget.h"
#include "MacanUserWidgetOtherStaffRollEnd.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidgetOtherStaffRollEnd : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidgetOtherStaffRollEnd();

    UFUNCTION(BlueprintCallable)
    void SetFadeEnd(bool B);
    
    UFUNCTION(BlueprintCallable)
    bool IsFadeEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeEvent(EUIState State);
    
};

