#pragma once
#include "CoreMinimal.h"
#include "EPokerUI.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIData.h"
#include "MacanUIDataUdon.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataUdon : public UMacanUIData {
    GENERATED_BODY()
public:
    UMacanUIDataUdon();

    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdateThisUI(EPokerUI uiType, EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdate(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void FinishUpdateUI(EPokerUI uiType);
    
};

