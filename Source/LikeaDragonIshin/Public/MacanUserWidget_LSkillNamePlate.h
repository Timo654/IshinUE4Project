#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_LSkillNamePlate.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_LSkillNamePlate : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_LSkillNamePlate();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void setSkillName(const FText& text);
    
};

