#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_ALNougyou.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_ALNougyou : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_ALNougyou();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void load_check();
    
};

