#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "EBetWindowType.h"
#include "UIBetWindowCloseDelegateDelegate.h"
#include "UIBetWindowDelegateDelegate.h"
#include "eMONEYTYPE.h"
#include "ActionMinigameBet.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class AActionMinigameBet : public AActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIBetWindowCloseDelegate DecisionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIBetWindowDelegate CancelDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIBetWindowCloseDelegate UpdateDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* pListener;
    
public:
    AActionMinigameBet(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ZeroOK();
    
    UFUNCTION(BlueprintCallable)
    void ShowWindow();
    
    UFUNCTION(BlueprintCallable)
    void SetRealTimeBet();
    
    UFUNCTION(BlueprintCallable)
    void SetPreBet(int32 preBet);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayDecideSE(bool IsPlay);
    
    UFUNCTION(BlueprintCallable)
    void SetPadListener(UInputDeviceListener* pLis);
    
    UFUNCTION(BlueprintCallable)
    void SetMoneyType(TEnumAsByte<eMONEYTYPE> moneyType);
    
    UFUNCTION(BlueprintCallable)
    void SetFundsName(const FString& C);
    
    UFUNCTION(BlueprintCallable)
    void SetFix(int32 bet);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawAddFlag();
    
    UFUNCTION(BlueprintCallable)
    void SetDividendText(FText text);
    
    UFUNCTION(BlueprintCallable)
    void SetDecideAnimSec(float sec);
    
    UFUNCTION(BlueprintCallable)
    void SetCseFlag();
    
    UFUNCTION(BlueprintCallable)
    void SetBetName(const FString& C);
    
    UFUNCTION(BlueprintCallable)
    void SetBetMin(int32 betMin);
    
    UFUNCTION(BlueprintCallable)
    void SetBetMax(int32 betMax);
    
    UFUNCTION()
    void SetAddKeta(uint32 addKeta);
    
    UFUNCTION(BlueprintCallable)
    void SetAddFundsFlag();
    
    UFUNCTION(BlueprintCallable)
    void RestoreWindow();
    
    UFUNCTION(BlueprintCallable)
    void RequestWindowForTutorial(EBetWindowType Type, int32 funds, int32 kakeMax, int32 defaultBet, bool cancel);
    
    UFUNCTION(BlueprintCallable)
    void RequestWindow(EBetWindowType Type, int32 kakeMax, TEnumAsByte<eMONEYTYPE> motiType, int32 defaultBet, bool cancel);
    
    UFUNCTION(BlueprintCallable)
    void OpenWindowCallBack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawCse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDecideAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBetFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAddFunds();
    
    UFUNCTION(BlueprintCallable)
    void IgnoreInputOnce();
    
    UFUNCTION(BlueprintCallable)
    void HideWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFunds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBet();
    
    UFUNCTION(BlueprintCallable)
    void ForceDecide();
    
    UFUNCTION(BlueprintCallable)
    void ExecAfterCamera();
    
    UFUNCTION(BlueprintCallable)
    void DeleteWindow(bool isPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAction();
    
    UFUNCTION(BlueprintCallable)
    void DecideAnimationFinCallBack();
    
    UFUNCTION(BlueprintCallable)
    void ClrFix();
    
    UFUNCTION(BlueprintCallable)
    void ClrDrawAdFlag();
    
    UFUNCTION(BlueprintCallable)
    void ClrCseFlag();
    
    UFUNCTION(BlueprintCallable)
    void ClrAddFundsFlag();
    
    UFUNCTION(BlueprintCallable)
    void CloseWindowCallBack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayDecideSE();
    
    UFUNCTION(BlueprintCallable)
    void CancelOK();
    
};

