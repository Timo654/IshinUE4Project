#pragma once
#include "CoreMinimal.h"
#include "EBetUI.h"
#include "EBetWindowType.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIData.h"
#include "UIDataBetWindowDelegateDelegate.h"
#include "MacanUIDataBetWindow.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataBetWindow : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSelectedTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 havePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 betPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 betMaxKeta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 betLineKeta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dividendPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText dividendText;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataBetWindowDelegate OnDelegateOpenUIAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataBetWindowDelegate OnDelegateCloseUIAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataBetWindowDelegate OnDelegateDecideUIAnimEndOfPlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecideAnimationTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBetWindowType WindowType;
    
public:
    UMacanUIDataBetWindow();

    UFUNCTION(BlueprintCallable)
    void UpdateDecideAnimation(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool ShowWindow();
    
    UFUNCTION(BlueprintCallable)
    bool SetTextColorChohan(bool isSelected);
    
    UFUNCTION(BlueprintCallable)
    bool SetHavePoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    bool SetDividentText(FText text);
    
    UFUNCTION(BlueprintCallable)
    bool SetDividendPointChohan(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    bool SetBetPoint(int32 Point, int32 maxKeta, int32 lineKeta);
    
    UFUNCTION(BlueprintCallable)
    bool SetAllPointDefault(int32 have, int32 bet, int32 maxKeta, int32 lineKeta);
    
    UFUNCTION(BlueprintCallable)
    bool SetAllPointChohan(int32 have, int32 bet, int32 Dividend, int32 maxKeta, int32 lineKeta);
    
    UFUNCTION(BlueprintCallable)
    bool PlayEnterAnimationChohan();
    
    UFUNCTION(BlueprintCallable)
    bool PlayDecideAnimation(int32 have);
    
    UFUNCTION(BlueprintCallable)
    bool OpenWindow(EBetWindowType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdateThisUI(EBetUI uiType, EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdate(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool HideWindow();
    
    UFUNCTION(BlueprintCallable)
    void FinishUpdateUI(EBetUI uiType);
    
    UFUNCTION(BlueprintCallable)
    bool CloseWindow();
    
};

