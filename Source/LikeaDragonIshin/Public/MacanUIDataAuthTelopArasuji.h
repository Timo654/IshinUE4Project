#pragma once
#include "CoreMinimal.h"
#include "EUIAuthTelopArasujiAnimType.h"
#include "EUIAuthTelopArasujiBfType.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIData.h"
#include "MacanUIDataAuthTelopArasuji.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataAuthTelopArasuji : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 bfData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText telopText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float currentAnimSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIAuthTelopArasujiAnimType currentAnimType;
    
    UMacanUIDataAuthTelopArasuji();

    UFUNCTION(BlueprintCallable)
    void UpdateEnd();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnimSec(float inSec);
    
    UFUNCTION(BlueprintCallable)
    void SetupAuthTelopArasujiAnim(EUIAuthTelopArasujiAnimType inType);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetFlag(EUIAuthTelopArasujiBfType Type);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsOnFlag(EUIResultOnOrOff& result, EUIAuthTelopArasujiBfType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelFlag(EUIAuthTelopArasujiBfType Type);
    
};

