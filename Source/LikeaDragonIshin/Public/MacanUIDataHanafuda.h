#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHanafudaAttribute.h"
#include "EHanafudaMenuType.h"
#include "EHanafudaPlayerType.h"
#include "EHanafudaYakuState.h"
#include "EKoikoiUI.h"
#include "EUIResultOnOrOff.h"
#include "EUIState.h"
#include "HanafudaCursolInfo.h"
#include "HanafudaPlayerInfo.h"
#include "HanafudaSettingsInfo.h"
#include "MacanUIData.h"
#include "UIDataHanafudaDelegateExplanationUIAnimEndOfPlaybackDelegate.h"
#include "UIDataHanafudaDelegateLineInfoUIAnimEndOfPlaybackDelegate.h"
#include "UIDataHanafudaDelegateMenuCloseEndDelegate.h"
#include "UIDataHanafudaDelegateMenuEnterEndDelegate.h"
#include "UIDataHanafudaDelegateOyaDescisionMonthUIAnimEndOfPlaybackDelegate.h"
#include "UIDataHanafudaDelegatePossessionPointUIAnimEndOfPlaybackDelegate.h"
#include "UIDataHanafudaDelegateResultClosedDelegate.h"
#include "UIDataHanafudaDelegateResultDispLastLineDelegate.h"
#include "UIDataHanafudaDelegateRuleDescriptionUIAnimEndOfPlaybackDelegate.h"
#include "UIDataHanafudaDelegateSelectKoiKoiUIAnimEndOfPlaybackAllWindowOpenDelegate.h"
#include "UIDataHanafudaDelegateSelectKoiKoiUIAnimEndOfPlaybackClosedSelecterDelegate.h"
#include "UIDataHanafudaDelegateSelectKoiKoiUIAnimEndOfPlaybackPressedEnterDelegate.h"
#include "UIDataHanafudaDelegateSettingUIAnimEndOfPlaybackDelegate.h"
#include "UIDataHanafudaDelegateYakuDescriptionUIAnimEndOfPlaybackDelegate.h"
#include "UIDataHanafudaDelegateYakuUIAnimEndOfPlaybackDelegate.h"
#include "MacanUIDataHanafuda.generated.h"

class UMacanUserWidgetBase;

UCLASS(Blueprintable)
class UMacanUIDataHanafuda : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHanafudaPlayerInfo> playerInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHanafudaPlayerType currentPlayerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHanafudaPlayerType parentPlayerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 nowMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHanafudaCursolInfo> handCursorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHanafudaCursolInfo> fieldCursorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHanafudaCursolInfo> kirakiraArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHanafudaCursolInfo> aifudaNumArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHanafudaAttribute yakuGet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 cursorMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdateCursorMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool enterMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdateEnterMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHanafudaMenuType typeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdateTypeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdateItemListMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 cursorSettingV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 cursorSettingH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool enterSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateRuleDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 pageRuleDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateYakuDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 pageYakuDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateExplanation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateLineInfo01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText textLineInfo01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateLineInfo02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText textLineInfo02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateYakuList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EHanafudaYakuState> arrayYakuListState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateSelectKoiKoi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 cursorSelectKoiKoi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdateCursorSelectKoiKoi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool enterSelectKoiKoi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdateListSelectKoiKoi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EHanafudaAttribute> arraySelectKoiKoiYaku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> arraySelectKoiKoiPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 totalPointSelectKoiKoi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isOpenChoiceWindowSelectKoiKoi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText koikoiselectPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isSkipResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FText> arrayFTextResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUpdateListResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isWinResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 totalPointResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText totalPointTextResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState stateOyaDescisionMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 numLeftOyaDescisionMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 numRightOyaDescisionMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState statePossessionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHanafudaSettingsInfo settingsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 firstMenuIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 customCursol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> customSwitchs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sankakuCursol;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegatePossessionPointUIAnimEndOfPlayback OnDelegateSankakuWindowClosePlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegatePossessionPointUIAnimEndOfPlayback OnDelegatePossessionPointUIAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateYakuUIAnimEndOfPlayback OnDelegateYakuUIAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateMenuEnterEnd OnDelegateMenuEnterEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateMenuCloseEnd OnDelegateMenuCloseEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateSettingUIAnimEndOfPlayback OnDelegateSettingUIAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateRuleDescriptionUIAnimEndOfPlayback OnDelegateRuleDescriptionUIAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateYakuDescriptionUIAnimEndOfPlayback OnDelegateYakuDescriptionUIAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateExplanationUIAnimEndOfPlayback OnDelegateExplanationUIAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateLineInfoUIAnimEndOfPlayback OnDelegateLineInfoUIAnimEndOfPlayback01;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateLineInfoUIAnimEndOfPlayback OnDelegateLineInfoUIAnimEndOfPlayback02;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateLineInfoUIAnimEndOfPlayback OnDelegateYakuListUIAnimEndOfPlayback;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateSelectKoiKoiUIAnimEndOfPlaybackAllWindowOpen OnDelegateSelectKoiKoiUIAnimEndOfPlaybackAllWindowOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateSelectKoiKoiUIAnimEndOfPlaybackPressedEnter OnDelegateSelectKoiKoiUIAnimEndOfPlaybackPressedEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateSelectKoiKoiUIAnimEndOfPlaybackClosedSelecter OnDelegateSelectKoiKoiUIAnimEndOfPlaybackClosedSelecter;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateResultClosed OnDelegateResultClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateResultDispLastLine OnDelegateResultDispLastLine;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataHanafudaDelegateOyaDescisionMonthUIAnimEndOfPlayback OnDelegateOyaDescisionMonthUIAnimEndOfPlayback;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidgetBase* choiceUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidgetBase* sankakuChoiceUserWidget;
    
public:
    UMacanUIDataHanafuda();

    UFUNCTION(BlueprintCallable)
    void UpdateSankakuCursol(int32 cursol);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFirstMenuCursol(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCustomSwitch(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCustomCursol(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SkipResult();
    
    UFUNCTION(BlueprintCallable)
    void ShowUI();
    
    UFUNCTION(BlueprintCallable)
    bool SetYakuListStateArray(UPARAM(Ref) TArray<EHanafudaYakuState>& setArray);
    
    UFUNCTION(BlueprintCallable)
    bool SetYakuGet(EHanafudaAttribute yaku);
    
    UFUNCTION(BlueprintCallable)
    bool SetVisibleKiraKiraAll(bool visible);
    
    UFUNCTION(BlueprintCallable)
    bool SetVisibleKiraKira(int32 Index, bool visible);
    
    UFUNCTION(BlueprintCallable)
    bool SetVisibleHandCursorAll(bool visible);
    
    UFUNCTION(BlueprintCallable)
    bool SetVisibleHandCursor(int32 Index, bool visible);
    
    UFUNCTION(BlueprintCallable)
    bool SetVisibleFieldCursorAll(bool visible);
    
    UFUNCTION(BlueprintCallable)
    bool SetVisibleFieldCursor(int32 Index, bool visible);
    
    UFUNCTION(BlueprintCallable)
    bool SetVisibleAifudaNumAll(bool visible);
    
    UFUNCTION(BlueprintCallable)
    bool SetVisibleAifudaNum(int32 Index, bool visible);
    
    UFUNCTION(BlueprintCallable)
    bool SetupItemMenu(EHanafudaMenuType menuType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSetting(UPARAM(Ref) FHanafudaSettingsInfo& inSettingsInfo);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelfPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    bool SetPossessionPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    bool SetParent(EHanafudaPlayerType playerType);
    
    UFUNCTION(BlueprintCallable)
    bool SetPageYakuDescription(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SetPageRuleDescription(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SetMonth(int32 Month);
    
    UFUNCTION(BlueprintCallable)
    bool SetMenuCursor(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SetKiraKira(int32 Index, UPARAM(Ref) FVector2D& Pos);
    
    UFUNCTION(BlueprintCallable)
    bool SetHandCursor(int32 Index, UPARAM(Ref) FVector2D& Pos);
    
    UFUNCTION(BlueprintCallable)
    bool SetFieldCursor(int32 Index, UPARAM(Ref) FVector2D& Pos);
    
    UFUNCTION(BlueprintCallable)
    bool SetEnemyPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    bool SetCursorSetting(int32 indexV, int32 indexH);
    
    UFUNCTION(BlueprintCallable)
    bool SetCursorSelectKoiKoi(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurrentPlayer(EHanafudaPlayerType playerType);
    
    UFUNCTION(BlueprintCallable)
    bool SetAifudaNum(int32 Index, UPARAM(Ref) FVector2D& Pos, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    bool OpenYakuList();
    
    UFUNCTION(BlueprintCallable)
    bool OpenYakuDescription();
    
    UFUNCTION(BlueprintCallable)
    bool OpenSetting();
    
    UFUNCTION(BlueprintCallable)
    bool OpenSelectKoiKoi(UPARAM(Ref) TArray<EHanafudaAttribute>& yakuArray, TArray<int32> pointArray, int32 totalPoint, FText playerName, bool isOpenChoiceWindow);
    
    UFUNCTION(BlueprintCallable)
    void OpenSankaku();
    
    UFUNCTION(BlueprintCallable)
    bool OpenRuleDescription();
    
    UFUNCTION(BlueprintCallable)
    bool OpenResult(UPARAM(Ref) TArray<FText>& textArray, int32 totalPoint, UPARAM(Ref) FText& totalText, bool isWin);
    
    UFUNCTION(BlueprintCallable)
    bool OpenPossessionPoint();
    
    UFUNCTION(BlueprintCallable)
    bool OpenOyaDescisionMonth(int32 leftMonth, int32 rightMonth);
    
    UFUNCTION(BlueprintCallable)
    bool OpenMenu(EHanafudaMenuType menuType);
    
    UFUNCTION(BlueprintCallable)
    bool OpenLineInfo02(UPARAM(Ref) FText& text);
    
    UFUNCTION(BlueprintCallable)
    bool OpenLineInfo01(UPARAM(Ref) FText& text);
    
    UFUNCTION(BlueprintCallable)
    void OpenFirstMenu();
    
    UFUNCTION(BlueprintCallable)
    bool OpenExplanation();
    
    UFUNCTION(BlueprintCallable)
    void OpenCustomView();
    
    UFUNCTION(BlueprintCallable)
    void OpenCustom();
    
    UFUNCTION(BlueprintCallable)
    void OffFlagIsUpdateListSelectKoiKoi();
    
    UFUNCTION(BlueprintCallable)
    void OffFlagIsUpdateListResult();
    
    UFUNCTION(BlueprintCallable)
    void OffFlagIsUpdateCursorSelectKoiKoi();
    
    UFUNCTION(BlueprintCallable)
    void OffFlagIsSkipResult();
    
    UFUNCTION(BlueprintCallable)
    void OffFlagEnterCursorSelectKoiKoi();
    
    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdateThisUI(EKoikoiUI uiType, EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyYakuList(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyYakuGet(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyYakuDescription(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyUpdateFirstMenu(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySetting(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelfPoint(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelfName(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelectKoiKoi(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyRuleDescription(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyResult(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyPossessionPoint(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyParent(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyOyaDescisionMonth(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyOpenFirstMenu(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyMonth(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyMenu(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyLineInfo02(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyLineInfo01(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyKiraKira(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyHandCursor(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyFieldCursor(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyExplanation(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyEnemyPoint(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyEnemyName(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyDecideFirstMenu(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyCurrentPlayer(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyAifudaNum(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void HideUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMenuLastItemNum(EHanafudaMenuType menuType) const;
    
    UFUNCTION(BlueprintCallable)
    bool FirstInitalize(UPARAM(Ref) FHanafudaPlayerInfo& typeSelf, UPARAM(Ref) FHanafudaPlayerInfo& typeEnemy);
    
    UFUNCTION(BlueprintCallable)
    void FinishUpdateUI(EKoikoiUI uiType);
    
    UFUNCTION(BlueprintCallable)
    bool EnterMenuCursor();
    
    UFUNCTION(BlueprintCallable)
    bool EnterCursorSelectKoiKoi();
    
    UFUNCTION(BlueprintCallable)
    bool EnterCursorCursorSetting();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyYakuList();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyYakuGet();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyYakuDescription();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySetting();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySelfPoint();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySelfName();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySelectKoiKoi();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyRuleDescription();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyResult();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyPossessionPoint();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyParent();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyOyaDescisionMonth();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyMonth();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyMenu();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyLineInfo02();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyLineInfo01();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyKiraKira();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyHandCursor();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyFirstMenu();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyFieldCursor();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyExplanation();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyEnemyPoint();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyEnemyName();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyCurrentPlayer();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyAifudaNum();
    
    UFUNCTION(BlueprintCallable)
    void DecideSankaku();
    
    UFUNCTION(BlueprintCallable)
    void DecideFirstMenu();
    
    UFUNCTION(BlueprintCallable)
    void DecideCustomView();
    
    UFUNCTION(BlueprintCallable)
    void DecideCustom();
    
    UFUNCTION(BlueprintCallable)
    bool CloseYakuList();
    
    UFUNCTION(BlueprintCallable)
    bool CloseYakuDescription();
    
    UFUNCTION(BlueprintCallable)
    bool CloseSetting();
    
    UFUNCTION(BlueprintCallable)
    bool CloseSelectKoiKoi();
    
    UFUNCTION(BlueprintCallable)
    bool CloseRuleDescription();
    
    UFUNCTION(BlueprintCallable)
    bool CloseResult();
    
    UFUNCTION(BlueprintCallable)
    bool ClosePossessionPoint();
    
    UFUNCTION(BlueprintCallable)
    bool CloseOyaDescisionMonth();
    
    UFUNCTION(BlueprintCallable)
    bool CloseMenu();
    
    UFUNCTION(BlueprintCallable)
    bool CloseLineInfo02();
    
    UFUNCTION(BlueprintCallable)
    bool CloseLineInfo01();
    
    UFUNCTION(BlueprintCallable)
    bool CloseExplanation();
    
};

