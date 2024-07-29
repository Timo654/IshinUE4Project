#pragma once
#include "CoreMinimal.h"
#include "EUIMahjongCutInMessageType.h"
#include "EUIMahjongDialogMessageType.h"
#include "EUIMahjongRightButtonState.h"
#include "EUIMahjongSelectMessageType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "MahjongChoiceButtonInfo.h"
#include "MahjongProgressWindow.h"
#include "MahjongResultYakuInfo.h"
#include "MahjongSelectWindowInfo.h"
#include "MahjongUserInfo.h"
#include "UIDataMahjongDelegateMenuCloseEndDelegate.h"
#include "UIDataMahjongDelegateMenuEnterEndDelegate.h"
#include "MacanUIDataMahjong.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataMahjong : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState CenterUserInfoState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMahjongUserInfo> CenterUserInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMahjongUserInfo> RankingUserInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState RuleWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RuleSelectCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsHanchan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsKuitan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsNifanShibari;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAkaDora;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIMahjongCutInMessageType CutInMessageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState PonEffectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState ChiiEffectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState KanEffectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState RiichiEffectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState TsumoEffectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState RonEffectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState RyuukyokuEffectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMahjongChoiceButtonInfo> ChoiceButtonInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState NakiButtonInfoState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIMahjongDialogMessageType DialogMessageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMahjongProgressWindow ProgressWindowInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState ProgressWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMahjongSelectWindowInfo SelectWindowInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState GuideNextButtonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState GuideBackButtonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState ResultWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState ResultUserWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMahjongResultYakuInfo> ResultYakuInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ResultFuText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ResultTotalHan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ResultScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ResultFuNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsDispTotalResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsMuyaku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOpenResultWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState FinalResultWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsPlayCongratulations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState RiichiPaiSupportWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> RiichiPaiSupportArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState MoneyWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DispMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState RankingWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMahjongUserInfo> RankingWindowUserInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxDefendRankingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentDefendRankingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateRankingWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsDispRankingSkipButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOpenRankingWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsDispAllWindow;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataMahjongDelegateMenuEnterEnd OnDelegateMenuEnterEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataMahjongDelegateMenuCloseEnd OnDelegateMenuCloseEnd;
    
    UMacanUIDataMahjong();

    UFUNCTION(BlueprintCallable)
    void UpdateRuleWindowCursor(int32 Cursor, bool isHancha, bool isKuita, bool isNifan, bool isAka);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCommandButton(int32 Index, bool IsSelect);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectWindowCursor(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetBeforeAnimType(int32 Index, EUIMahjongRightButtonState State);
    
    UFUNCTION(BlueprintCallable)
    void OpenSelectWindow(EUIMahjongSelectMessageType Type, int32 Cursor);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelectWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyRuleWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyRiichiPaiSupportWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyResultWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyRankingWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyProgressWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyNakiButtonGuide(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyMoneyWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyGuideButton(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyFinalResultWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyCutInWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyCenterCharacterInfo(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyAllWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void InitializeUser();
    
    UFUNCTION(BlueprintCallable)
    void InitializeRiichiPaiSupportWindow();
    
    UFUNCTION(BlueprintCallable)
    void InitializeResultWindowUserInfo();
    
    UFUNCTION(BlueprintCallable)
    void InitializeResultTextInfos();
    
    UFUNCTION(BlueprintCallable)
    void InitializeButtonInfos();
    
    UFUNCTION(BlueprintCallable)
    void EnterSelectWindowCursor();
    
    UFUNCTION(BlueprintCallable)
    void DelBfSelectWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfRuleWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfRiichiPaiSupportWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfResultWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfRankingWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfProgressWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfNakiButtonGuide();
    
    UFUNCTION(BlueprintCallable)
    void DelBfMoneyWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfGuideButton();
    
    UFUNCTION(BlueprintCallable)
    void DelBfFinalResultWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfCutInWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfCenterCharacterInfo();
    
    UFUNCTION(BlueprintCallable)
    void DelBfAllWindow();
    
    UFUNCTION(BlueprintCallable)
    void DecideFinishSelectWindow();
    
    UFUNCTION(BlueprintCallable)
    void CloseSelectWindow();
    
    UFUNCTION(BlueprintCallable)
    bool CheckArrowDisp(int32 Index, bool isUp);
    
};

