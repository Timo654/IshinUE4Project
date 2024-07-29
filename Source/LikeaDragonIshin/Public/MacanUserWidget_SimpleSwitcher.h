#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_SimpleSwitcher.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_SimpleSwitcher : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* switcher;
    
    UMacanUserWidget_SimpleSwitcher();

    UFUNCTION(BlueprintCallable)
    void setSwitch(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getSwitchableMax() const;
    
};

