#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_GamerTag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_GamerTag : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_GamerTag();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGamerTag(const FText& in_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn();
    
};

