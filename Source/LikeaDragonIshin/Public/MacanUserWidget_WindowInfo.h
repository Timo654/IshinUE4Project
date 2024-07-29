#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_WindowInfo.generated.h"

class UMacanUIDataWindowInfo;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_WindowInfo : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UMacanUserWidget_WindowInfo();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMainContent(UMacanUIDataWindowInfo* UIData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWindow();
    
};

