#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_KyukyokutougiGame.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_KyukyokutougiGame : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_KyukyokutougiGame();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Success();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Failure();
    
};

