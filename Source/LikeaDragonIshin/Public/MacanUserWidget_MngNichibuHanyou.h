#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MngNichibuHanyou.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MngNichibuHanyou : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_MngNichibuHanyou();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeHugoukakuNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeHajimeNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeGoukakuNotify(bool isIn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeCountDownNotify(bool isIn);
    
};

