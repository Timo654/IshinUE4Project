#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKyoukeiUIType.h"
#include "EPadButton.h"
#include "EUIState.h"
#include "MacanUserWidget_Advanced.h"
#include "MacanUserWidget_Kyoukei.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_Kyoukei : public UMacanUserWidget_Advanced {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* listener;
    
public:
    UMacanUserWidget_Kyoukei();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TopMenuPushed(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TopMenuInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TopMenuFocus(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TitleSet(int32 inRank, int32 inDistance, const FString& inRaceName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TicketMenuSpecialRace();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TicketMenuPushed(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TicketMenuNormalRace();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TicketMenuInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TicketMenuFocus(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TicketListPushed(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TicketListInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TicketListFocus(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TicketListDest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TicketListAdd(int32 inTicketType, const TArray<int32>& inBirdArray, const FString& inBet, const FString& inOdds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTimerSet(int32 InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartCallPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SimpleTicketListSet(int32 inIndex, int32 inKind, const TArray<int32>& inBird);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SimpleTicketInit();
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowCtrl(int32 inWindowType, bool inCtrl);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleAll(bool inFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRaceName(int32 InLevel, int32 inDist, const FString& InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNotHitVisible(EKyoukeiUIType inType);
    
    UFUNCTION(BlueprintCallable)
    static void SetMenuIndex(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChildVisible(EKyoukeiUIType inType, bool inVisibile);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChildState(EKyoukeiUIType inType, EUIState inState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAllChildVisible(bool inVisibile);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScheduleMenuPushed(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScheduleMenuInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScheduleMenuFocus(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScheduleMenuDest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScheduleMenuAdd(int32 inRaceRank, const FString& inRaceName, int32 inDistanceType, int32 inRaceStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScheduleDetailSetTitle(int32 inRaceRank, const FString& inRaceName, int32 inDistanceType, int32 inRaceStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScheduleDetailSetBird(int32 inIndex, int32 inBirdNumber, const FString& inBirdName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScheduleDetailInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResultSetTotal(const FString& inTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResultSet(int32 inIndex, const TArray<int32>& inBird, const FString& inBet, const FString& inOdds, const FString& inDividend);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResultPlayStamp(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResultInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RankingSwap(int32 inDown, int32 inUp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RankingSet(int32 inIndex, int32 inNumIndex, const FString& InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RankingInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RankingFocusOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RankingFocus(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RacePointSet(int32 inPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RaceMsgSet(const FString& inMsg);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListThirdSetMarkTriple(int32 inIndex, bool inFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListThirdSetMarkFifth(int32 inIndex, bool inFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListThirdPushTriple(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListThirdPushFifth(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListThirdInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListThirdForcusTriple(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListThirdForcusFifth(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListThirdDest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListThirdAdd(const TArray<int32>& inBirdArray, const FString& inOdds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListSecondSetOdds(int32 inIndex, const FString& inOdds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListSecondSetMark(int32 inIndex, bool inFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListSecondPushed(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListSecondInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListSecondFocus(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListFirstSetOdds(int32 inIndex, const FString& inOdds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListFirstSetName(int32 inIndex, const FString& InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListFirstSetMark(int32 inIndex, bool inFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListFirstPushed(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListFirstInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListFirstFocus(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListBetWinSetTrans(const FVector2D& InPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OddsListBetWinSetBet(const FString& inBet);
    
    UFUNCTION(BlueprintCallable)
    static void MoveMenuIndex(bool inDir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MachResultSetTotal(const FString& inTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MachResultSet(const TArray<int32>& inBird, const FString& inBet, const FString& inOdds, const FString& inDividend);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MachResultPlayStamp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MachResultInit();
    
    UFUNCTION(BlueprintCallable)
    static void ItemDecide();
    
    UFUNCTION(BlueprintCallable)
    static void ItemCancel();
    
    UFUNCTION(BlueprintCallable)
    static void ItemBet(bool inSign, bool isForce);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoalRankingSet(int32 inIndex, int32 inRank, int32 inNumIndex, const FString& InName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoalRankingInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoalRankingin(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoalCallPlay();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetOddsListBetPos(const FName& inWbpName, const FName& inPanelName, int32 inIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteAction(EPadButton inPadButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CtrlStartCall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ButtonSet(bool inSetDecide, bool inSetCancel, bool inSetDetail, bool inSetSwap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BirdDetailSetRecord(int32 inIndex, int32 inPlace, int32 inRaceRank, int32 inDistance, const FString& inRaceName, int32 inCondition, const FString& inPredict);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BirdDetailSetBird(int32 inBirdNumber, const FString& inBirdName, int32 inCondition, const FString& inPredict, const FString& inDividend);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BirdDetailInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BetMenuShrink(bool inFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BetMenuSetRow(int32 InRow, int32 inRank, int32 inNumIndex, const FString& InName, int32 inConditionIndex, int32 inRecord, const FString& inPredict, const FString& inDividend, const FString& inBetCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BetMenuSetRank(int32 inIndex, int32 inRank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BetMenuSetOdds(int32 inIndex, const FString& inOdds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BetMenuSetBet(int32 inIndex, const FString& inBet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BetMenuPushed(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BetMenuInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BetMenuFocusOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BetMenuFocus(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BetMenuCtrlOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BetMenuCtrlOff();
    
};

