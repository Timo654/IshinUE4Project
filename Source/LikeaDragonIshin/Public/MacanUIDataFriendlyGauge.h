#pragma once
#include "CoreMinimal.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MacanUIDataFriendlyGauge.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataFriendlyGauge : public UMacanUIData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataFriendlyGaugeOpenEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIDataFriendlyGaugeCloseEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState windowUIState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataFriendlyGaugeOpenEnd OnDelegateOpenEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataFriendlyGaugeCloseEnd OnDelegateCloseEnd;
    
    UMacanUIDataFriendlyGauge();

    UFUNCTION(BlueprintCallable)
    bool OpenWindow(bool isQuick);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingUp(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsOpeningWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyStart(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyGuageVisible(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyEnter(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyEnd(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsClosingWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void DelBfPlayingUp();
    
    UFUNCTION(BlueprintCallable)
    void DelBfOpeningWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyWindowState();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyStart();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySetFrame();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyEnd();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirty();
    
    UFUNCTION(BlueprintCallable)
    void DelBfClosingWindow();
    
    UFUNCTION(BlueprintCallable)
    bool CloseWindow(bool isQuick);
    
};

