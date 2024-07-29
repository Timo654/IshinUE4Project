#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_ALNougyou_pause.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_ALNougyou_pause : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_ALNougyou_pause();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void load_check();
    
};

