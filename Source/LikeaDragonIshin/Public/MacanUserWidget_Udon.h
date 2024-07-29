#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "EUIAnimType.h"
#include "EUIState.h"
#include "MacanUserWidget_Advanced.h"
#include "UDON_UI_DETAIL_TYPE.h"
#include "MacanUserWidget_Udon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Udon : public UMacanUserWidget_Advanced {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStayOrderResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExistOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingEmergency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStartingStartCall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingCutin;
    
    UMacanUserWidget_Udon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VisibleResultPayoff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VisibleResultNewScoreStamp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VisibleResultCustomer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VisibleResultCombo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VisibleResultApprisal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsStayOrderResult();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsStartingStartCall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsPlayingEmergency();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsPlayingCutin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateExistOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartCall();
    
    UFUNCTION(BlueprintCallable)
    void SetUdonUIVisibleSwitch(UDON_UI_DETAIL_TYPE inTarget, bool inFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUdonUIVisible(UDON_UI_DETAIL_TYPE inTarget, ESlateVisibility invisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUdonUIState(UDON_UI_DETAIL_TYPE inTarget, EUIState inState);
    
    UFUNCTION(BlueprintCallable)
    void SetUdonUIHide(UDON_UI_DETAIL_TYPE inTarget, bool inFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimeLimit(float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetResultScoreRank(int32 inRank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetResultOffer(int32 inOffer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetResultNewScoreStamp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetResultMoneyRyou(int32 inRyou);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetResultMoneyMon(int32 inMon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetResultCombo(int32 inCombo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRank(int32 inRank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOsusume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMoneyRyou(int32 inScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMoneyMon(int32 inScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCombo(int32 inCombo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResultShot(bool NewInResult);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimeLimit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Recovery(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUIAnim(UDON_UI_DETAIL_TYPE inTarget, EUIAnimType inAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayRankUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayRankSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayRankDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEmergency();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCutin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OutSpark();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OutResult();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OutOsusume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OutGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OutCombo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OrderResult(int32 InPos, bool NewInResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OrderPush(int32 InPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OrderPopup(int32 InPos, int32 inType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OrderOutAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OrderOut(int32 InPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OrderOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InSpark();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InResult();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InGauge();
    
    UFUNCTION(BlueprintCallable)
    void GameResultVisible();
    
    UFUNCTION(BlueprintCallable)
    void GameDefaultVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FaseCountStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FaseCountResume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FaseCountPause();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndCall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DelayDamage(int32 inIndex, float inWait);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Damage(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CtrlStartCall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CtrlFaseStart();
    
};

