#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_UtilityEvent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_UtilityEvent : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_UtilityEvent();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWorldPosition(const FVector& InPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveIndex(int32 inIndex);
    
};

