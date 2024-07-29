#pragma once
#include "CoreMinimal.h"
#include "ActionPressInfo.h"
#include "EUIPressAct.h"
#include "EUIPressState.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataActionPress.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataActionPress : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionPressInfo> ButtonInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState RendaButtonState;
    
    UMacanUIDataActionPress();

    UFUNCTION(BlueprintCallable)
    void SetTime(float normalSuccess, float normalFailure, float otherSuccess, float otherFailure);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyButtons(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void DrawPress(EUIPressAct eAct, EUIPressState eState, const int32 in_index, const float in_frame, const int32 button1, const int32 button2);
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyButtons();
    
};

