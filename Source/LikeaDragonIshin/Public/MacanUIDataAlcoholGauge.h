#pragma once
#include "CoreMinimal.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataAlcoholGauge.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataAlcoholGauge : public UMacanUIData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataAlcoholGaugeOpenEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataAlcoholGaugeCloseEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIState windowUIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 drunkRank;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataAlcoholGaugeOpenEnd OnDelegateOpenEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataAlcoholGaugeCloseEnd OnDelegateCloseEnd;
    
    UMacanUIDataAlcoholGauge();

    UFUNCTION(BlueprintCallable)
    void TestDrunk(int32 rank);
    
    UFUNCTION(BlueprintCallable)
    bool SetStateOn();
    
    UFUNCTION(BlueprintCallable)
    bool SetStateOff();
    
    UFUNCTION(BlueprintCallable)
    bool SetRank(int32 rank);
    
    UFUNCTION(BlueprintCallable)
    bool Open();
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyRank(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyHide(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyGaugeVisible(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyRank();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyHide();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyGaugeVisible();
    
    UFUNCTION(BlueprintCallable)
    bool Close();
    
};

