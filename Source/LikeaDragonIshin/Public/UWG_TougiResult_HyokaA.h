#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "UWG_TougiResult_HyokaA.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUWG_TougiResult_HyokaA : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UUWG_TougiResult_HyokaA();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitle(const FText& TITLE);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNum(const FText& result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBlue();
    
};

