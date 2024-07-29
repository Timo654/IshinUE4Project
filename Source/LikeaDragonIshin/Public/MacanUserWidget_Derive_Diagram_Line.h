#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Derive_Diagram_Line.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Derive_Diagram_Line : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_Derive_Diagram_Line();

    UFUNCTION(BlueprintCallable)
    void UpdateLineAnim(bool IsActive);
    
};

