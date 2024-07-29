#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "UWG_TougiResult_HyokaB.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUWG_TougiResult_HyokaB : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UUWG_TougiResult_HyokaB();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitle(const FText& TITLE);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetResult(const FText& result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNum(const FText& result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBlue();
    
};

