#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EOichokabuAttribute.h"
#include "EOichokabuUI.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIData.h"
#include "OichokabuCardNumberInfo.h"
#include "UIDataKabuDelegateResultDelegate.h"
#include "WindowChoiceItemInfo.h"
#include "MacanUIDataKabu.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataKabu : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 firstMenuIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cursolNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cardNumberNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 replayChoiceNum;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataKabuDelegateResult OnDelegateResultUIAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataKabuDelegateResult OnDelegateYakuUIAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataKabuDelegateResult OnDelegateReplayChoiceCloseAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataKabuDelegateResult OnDelegateFirstMenuCloseAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataKabuDelegateResult OnDelegateDrawChoiceCloseAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataKabuDelegateResult OnDelegateReplayChoiceOpenAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataKabuDelegateResult OnDelegateCPUMessageAnimEndOfPlayback;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> playerNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> betCoins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> betCoinPrintFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> isBetCoinFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 parentPlayerNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> totalValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 parentTotalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPrintParentTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> resultIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mochiten;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 parentOhajikiPlayerNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> childOhajikiPlayerNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> childOhajikiPrintFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> cursolPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> cursolPrintFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> cursolPlayerNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D cursolLongPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool cursolLongPrintFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOichokabuCardNumberInfo> cardNumberInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isWinAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOichokabuAttribute yakuAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 replayCursol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWindowChoiceItemInfo> drawChoiceItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 drawChoiceCursol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isShirokuChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isMessagePrint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText lineMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> cpuMessageCardNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 customCursol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> customSwitchs;
    
public:
    UMacanUIDataKabu();

    UFUNCTION(BlueprintCallable)
    bool UpdateParentTotalValue(int32 Total, bool isPrint);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateParentOhajiki(int32 playerNumber);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateParent(int32 parentNumber);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateName(TArray<FText> Names);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateMochiten(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateIconResult(int32 child, bool isWin);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFirstMenuCursol(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCustomSwitch(bool flg);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCustomCursol(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateCursolLong(const FVector2D& Pos, bool isPrint);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateCursol(int32 cursolIndex, const FVector2D& Pos, bool isPrint, int32 playerNumber);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateCurrent(int32 Current);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateChildTotalValue(FText Total, int32 childValue, bool printChildValue);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateChildOhajiki(int32 playerNumber, bool isPrint, int32 fieldNumber);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateCardNumber(int32 cardIndex, FOichokabuCardNumberInfo Info);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateBetCoin(int32 playerNum, int32 betCoin, bool printBetCoin, bool isBetCoin);
    
    UFUNCTION(BlueprintCallable)
    bool UpdagteReplayChoice(int32 cursolIndex);
    
    UFUNCTION(BlueprintCallable)
    bool UpdagteDrawChoice(int32 cursolIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowUI();
    
    UFUNCTION(BlueprintCallable)
    bool PlayYakuAnimation(EOichokabuAttribute yaku);
    
    UFUNCTION(BlueprintCallable)
    bool PlayResultAnimation(bool isWin);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerPointCountDownFinish();
    
    UFUNCTION(BlueprintCallable)
    bool PlayerPointCountDown();
    
    UFUNCTION(BlueprintCallable)
    void PaySEStop();
    
    UFUNCTION(BlueprintCallable)
    void PaySEStart();
    
    UFUNCTION(BlueprintCallable)
    bool OpenReplayChoice(int32 cursolIndex);
    
    UFUNCTION(BlueprintCallable)
    void OpenFirstMenu();
    
    UFUNCTION(BlueprintCallable)
    bool OpenDrawChoice(TArray<FWindowChoiceItemInfo> Info, int32 cursolIndex, bool isShiroku);
    
    UFUNCTION(BlueprintCallable)
    void OpenCustom();
    
    UFUNCTION(BlueprintCallable)
    bool LineMessage(bool isPrint, FText text);
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdateThisUI(EOichokabuUI uiType, EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdate(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool FirstInitialize(TArray<FText> Names);
    
    UFUNCTION(BlueprintCallable)
    void FinishUpdateUI(EOichokabuUI uiType);
    
    UFUNCTION(BlueprintCallable)
    bool DecideReplayChoice();
    
    UFUNCTION(BlueprintCallable)
    void DecideFirstMenu();
    
    UFUNCTION(BlueprintCallable)
    bool DecideDrawChoice();
    
    UFUNCTION(BlueprintCallable)
    bool CPUMessage(int32 cpuNumber, int32 cardNum);
    
    UFUNCTION(BlueprintCallable)
    void CloseCustom();
    
};

