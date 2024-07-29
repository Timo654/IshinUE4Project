#pragma once
#include "CoreMinimal.h"
#include "EUIMoneyBfType.h"
#include "EUIMoneyIconType.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIData.h"
#include "UIMoneyData.h"
#include "MacanUIDataMoney.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataMoney : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIMoneyData> arrayMoneyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 playingAnimClose;
    
    UMacanUIDataMoney();

    UFUNCTION(BlueprintCallable)
    void UpdateValue(int32 inIndex, int32 InValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIMoneyBfType Type);
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenWidget(int32 inIndex, EUIMoneyIconType iconType, bool isInvalidBG, bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIMoneyBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIMoneyBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget(int32 inIndex, EUIMoneyBfType inType, bool isQuick, bool isResetByWBP);
    
};

