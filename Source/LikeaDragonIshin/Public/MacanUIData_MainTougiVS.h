#pragma once
#include "CoreMinimal.h"
#include "EUIMMMainTougVSBfType.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIData.h"
#include "MacanUIData_MainTougiVS.generated.h"

UCLASS(Blueprintable)
class UMacanUIData_MainTougiVS : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeInMyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeInOpponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeInBattleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeOutBattleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeInClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFadeOutClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleStartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText MyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText OpponetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndex;
    
    UMacanUIData_MainTougiVS();

    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIMMMainTougVSBfType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayParam(int32 namePlayerIndex, int32 nameEnemyIndex, int32 btlStartIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIMMMainTougVSBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIMMMainTougVSBfType Type);
    
};

