#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPokerAction.h"
#include "EPokerChipAnimation.h"
#include "EPokerHandCombination.h"
#include "EPokerUI.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIData.h"
#include "UIDataPokerDelegateDelegate.h"
#include "MacanUIDataPoker.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataPoker : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataPokerDelegate OnDelegateContinueChoiceEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataPokerDelegate OnDelegateSankakuChoiceEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sankakuCursol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText playerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> cpuNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> playerChips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> playerBetChips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> playerTotalBetChips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool playerChipCountUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 setChipNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool selectionIsCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool selectionIsBet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 selectionRaiseChip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 selectionCallChip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 selectionCursol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPokerAction playerSelectedAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPokerAction> nonPlayerSelectedAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 roundNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 addChipNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPokerChipAnimation chipAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPokerHandCombination animHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> cpuMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 continueCursol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> resultAnimSeatNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dealerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 structureLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 structureRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 activeSeatIndex;
    
public:
    UMacanUIDataPoker();

    UFUNCTION(BlueprintCallable)
    void UpdateSankakuCursol(int32 cursol);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePlayerTotalBet(int32 seatNum, int32 Total);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePlayerName(FText Name);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePlayerChip(int32 seatNum, int32 chip, bool countUp);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePlayerBet(int32 seatNum, int32 bet);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateCPUName(int32 cpuNumber, FText Name);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateActionSelectionCursol(int32 cursolPos);
    
    UFUNCTION(BlueprintCallable)
    bool StructureAndRoundShow();
    
    UFUNCTION(BlueprintCallable)
    bool StructureAndRoundHide();
    
    UFUNCTION(BlueprintCallable)
    bool SetStructure(int32 Left, int32 Right);
    
    UFUNCTION(BlueprintCallable)
    bool SetSeat(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetPrintShowDown(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetPrintEndRound(bool flag);
    
    UFUNCTION(BlueprintCallable)
    bool SetDealer(int32 dealer);
    
    UFUNCTION(BlueprintCallable)
    bool SetChip(int32 chip);
    
    UFUNCTION(BlueprintCallable)
    bool RoundUpdate(int32 Round);
    
    UFUNCTION(BlueprintCallable)
    bool ResetChip();
    
    UFUNCTION(BlueprintCallable)
    bool PrintShowDown();
    
    UFUNCTION(BlueprintCallable)
    bool PrintEndRound();
    
    UFUNCTION(BlueprintCallable)
    bool PlayResultAnim(EPokerHandCombination Hand, TArray<int32> seatNum);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerSelectedActionShow(EPokerAction Action);
    
    UFUNCTION(BlueprintCallable)
    bool PlayerSelectedActionHide();
    
    UFUNCTION(BlueprintCallable)
    bool PlayCPUMessage(int32 cpuNum, FText text);
    
    UFUNCTION(BlueprintCallable)
    bool OutPlayerPlate();
    
    UFUNCTION(BlueprintCallable)
    void OpenSankaku();
    
    UFUNCTION(BlueprintCallable)
    bool OpenActionSelection(bool isCheck, bool isBet, int32 raiseChip, int32 callChip);
    
    UFUNCTION(BlueprintCallable)
    bool NonPlayerSelectedActionShow(EPokerAction Action, int32 playerNum);
    
    UFUNCTION(BlueprintCallable)
    bool NonPlayerSelectedActionHide(int32 playerNum);
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdateThisUI(EPokerUI uiType, EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdate(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool InPlayerPlate();
    
    UFUNCTION(BlueprintCallable)
    bool FoldSelectedHide();
    
    UFUNCTION(BlueprintCallable)
    void FinishUpdateUI(EPokerUI uiType);
    
    UFUNCTION(BlueprintCallable)
    void DecideSankaku();
    
    UFUNCTION(BlueprintCallable)
    bool DecideActionSelection();
    
    UFUNCTION(BlueprintCallable)
    bool CountDownChip();
    
    UFUNCTION(BlueprintCallable)
    bool ContinurChoiceUpdate(int32 cursol);
    
    UFUNCTION(BlueprintCallable)
    bool ContinurChoiceOpen();
    
    UFUNCTION(BlueprintCallable)
    bool ContinurChoiceDecide();
    
    UFUNCTION(BlueprintCallable)
    FVector2D CalcCPUMessagePos(FVector2D Pos);
    
    UFUNCTION(BlueprintCallable)
    bool AddChip(int32 addNum, EPokerChipAnimation anim);
    
};

