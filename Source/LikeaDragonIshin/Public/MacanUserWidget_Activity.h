#pragma once
#include "CoreMinimal.h"
#include "EUIState.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_Activity.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Activity : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_Activity();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchWidget(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextActivity(const FText& string, int32 Count, int32 achive_count);
    
    UFUNCTION(BlueprintCallable)
    void MacanUpdateComponnet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeEvent(EUIState State);
    
};

