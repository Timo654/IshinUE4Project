#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MacanUserWidget.h"
#include "MacanUserWidgetScreenFade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidgetScreenFade : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidgetScreenFade();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateColor(FLinearColor inColor);
    
};

