#pragma once
#include "CoreMinimal.h"
#include "EWBPButtoniconType.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_MgAgeShot.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_MgAgeShot : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_MgAgeShot();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetZanki(uint8 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBombNum(uint8 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBombIcon(EWBPButtoniconType Button);
    
};

