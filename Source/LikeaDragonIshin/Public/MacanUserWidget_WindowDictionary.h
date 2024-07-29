#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_WindowDictionary.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_WindowDictionary : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_WindowDictionary();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float UpdateScrollOffset(float newOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetScrollOffsetOfEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetScrollOffsetNow();
    
};

