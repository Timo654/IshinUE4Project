#pragma once
#include "CoreMinimal.h"
#include "ChohanBetPointInfo.h"
#include "ChohanDemeInfo.h"
#include "ChohanPlayerInfo.h"
#include "ChohanUIDispInfo.h"
#include "ChohanUserStatusInfo.h"
#include "EUIChohanSelectionMenuType.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "MacanUIData.h"
#include "UIDataChohanDelegateMenuCloseEndDelegate.h"
#include "UIDataChohanDelegateMenuEnterEndDelegate.h"
#include "UIDataChohanDelegateSelectBetPointEnterEndDelegate.h"
#include "MacanUIDataChohan.generated.h"

class UChohanUserStatusWidget;

UCLASS(Blueprintable)
class UMacanUIDataChohan : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UChohanUserStatusWidget*> ChohanUserStatusWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BetChoNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BetHanNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BetChoPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BetHanPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChohanUserStatusInfo KiryuBetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChohanPlayerInfo playerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState statePossessionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateBetWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChohanUserStatusInfo AddBetUserInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isAddedBetUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateBetWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateSelectDice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInitSelectDice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsCloseSelectDice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateSelectDiceCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateSelectDiceNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOneDice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsChangeFirstDice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SelectDiceNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 firstDiceNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 secondDiceNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateQuickDemeWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateDemeWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FChohanDemeInfo> QuickDemeInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FChohanDemeInfo> DemeInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateDemeWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 totalPlayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 totalResultChoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 totalResultHanCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateSelectMenuWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateSelectBetPointWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChohanBetPointInfo BetPointInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateBetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EnterBetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateBetPointCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateEnterBetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SelectBetPointCursorPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateTutorialWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateTutorialInfoWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateSashiRateWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SashiRatePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateIkasamaActionWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIChohanSelectionMenuType SelectionMenuType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateSelectMenuCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CursorSelectMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EnterSelectMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdateEnterSelectMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdateTypeSelectMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdateItemListSelectMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChohanUIDispInfo PossessionPointDispInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChohanUIDispInfo BetWindowDispInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChohanUIDispInfo SelectDiceWindowDispInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChohanUIDispInfo DemeWindowDispInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChohanUIDispInfo SashiBattlePossessionPointWindowDispInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChohanUIDispInfo SelectMenuWindowDispInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChohanUIDispInfo QuickDemeWindowDispInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateBackButton;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataChohanDelegateMenuEnterEnd OnDelegateMenuEnterEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataChohanDelegateMenuCloseEnd OnDelegateMenuCloseEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataChohanDelegateSelectBetPointEnterEnd OnDelegateBetPointEnterEnd;
    
    UMacanUIDataChohan();

    UFUNCTION(BlueprintCallable)
    bool VisibleSelectMenuWindow();
    
    UFUNCTION(BlueprintCallable)
    bool VisibleSelectDiceWindow();
    
    UFUNCTION(BlueprintCallable)
    bool VisibleBetWindow();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectDiceWindow(int32 diceNumber);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectDiceCursor();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateSelectBetPointWindow(FChohanBetPointInfo Info);
    
    UFUNCTION(BlueprintCallable)
    bool SetupSelectMenu(EUIChohanSelectionMenuType menuType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectMenuCursor(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SetSashiBattlePossessionPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    bool SetPossessionPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    void SetKiryuPoint(bool IsCho, int32 Point);
    
    UFUNCTION(BlueprintCallable)
    void SetBackButtonState(EUIState State);
    
    UFUNCTION(BlueprintCallable)
    void SetAddBetUser(FChohanUserStatusInfo UserStatusInfo);
    
    UFUNCTION(BlueprintCallable)
    void ResetKiryuPoint();
    
    UFUNCTION(BlueprintCallable)
    void RemoveKiryuData();
    
    UFUNCTION(BlueprintCallable)
    bool OpenSelectMenuWindow(EUIChohanSelectionMenuType menuType);
    
    UFUNCTION(BlueprintCallable)
    bool OpenSelectDiceWindow(bool oneDice);
    
    UFUNCTION(BlueprintCallable)
    bool OpenSelectBetPointWindow(FChohanBetPointInfo Info);
    
    UFUNCTION(BlueprintCallable)
    bool OpenSashiBattlePossessionPointWindow();
    
    UFUNCTION(BlueprintCallable)
    bool OpenQuickDemeWindow();
    
    UFUNCTION(BlueprintCallable)
    bool OpenPossessionPoint();
    
    UFUNCTION(BlueprintCallable)
    bool OpenDemeWindow(int32 playCount, int32 choCount, int32 hanCount);
    
    UFUNCTION(BlueprintCallable)
    bool OpenBetWindow();
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyTutorialWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyTutorialInfoWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelfPoint(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelectDiceWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelectBetPointWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySashiRateWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyQuickDemeWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyMenu(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyIkasamaActionWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyDemeWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyBetWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyBackButton(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyAddedBetUser(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsAllFinishAnim();
    
    UFUNCTION(BlueprintCallable)
    bool HideSelectMenuWindow();
    
    UFUNCTION(BlueprintCallable)
    bool HideSelectDiceWindow();
    
    UFUNCTION(BlueprintCallable)
    bool HideBetWindow();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectMenuLastItemNum(EUIChohanSelectionMenuType menuType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetChangeBetPointValue();
    
    UFUNCTION(BlueprintCallable)
    bool EnterSelectMenuCursor();
    
    UFUNCTION(BlueprintCallable)
    bool EnterBetPointWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyTutorialInfo();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyTutorial();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySelectDice();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySelectBetPoint();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySahiRate();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyQuickDeme();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyPossessionPoint();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyMenu();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyIkasamaAction();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyDeme();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyBet();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyBackButton();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyAddedBetUser();
    
    UFUNCTION(BlueprintCallable)
    bool CloseSelectMenuWindow();
    
    UFUNCTION(BlueprintCallable)
    bool CloseSelectDiceWindow();
    
    UFUNCTION(BlueprintCallable)
    bool CloseSelectBetPointWindow();
    
    UFUNCTION(BlueprintCallable)
    bool CloseSashiBattlePossessionPointWindow();
    
    UFUNCTION(BlueprintCallable)
    bool CloseQuickDemeWindow();
    
    UFUNCTION(BlueprintCallable)
    bool ClosePossessionPoint();
    
    UFUNCTION(BlueprintCallable)
    bool CloseDemeWindow();
    
    UFUNCTION(BlueprintCallable)
    bool CloseBetWindow();
    
    UFUNCTION(BlueprintCallable)
    bool ClearBetUserData();
    
    UFUNCTION(BlueprintCallable)
    int32 ChangeBetPointCursor(bool isRight);
    
    UFUNCTION(BlueprintCallable)
    int32 CastSelectDiceNumber(int32 diceNum);
    
    UFUNCTION(BlueprintCallable)
    int32 CastMenuCursorPos(int32 cursorPos);
    
    UFUNCTION(BlueprintCallable)
    int32 CastBetPoint(int32 AddPoint);
    
    UFUNCTION(BlueprintCallable)
    bool AddDemeWindow(FChohanDemeInfo Info);
    
    UFUNCTION(BlueprintCallable)
    bool AddBetUserData(FChohanUserStatusInfo UserStatusInfo, UChohanUserStatusWidget* Widget, bool IsCho);
    
};

