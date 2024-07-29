#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUIResultOnOrOff.h"
#include "EUIShogiArrowAnimType.h"
#include "EUIShogiCommonWindowMessageType.h"
#include "EUIShogiCutInMessageType.h"
#include "EUIShogiEnemyName.h"
#include "EUIShogiLevel.h"
#include "EUIShogiSelectMessageType.h"
#include "EUIState.h"
#include "EWBPButtoniconType.h"
#include "MacanUIData.h"
#include "UIDataShogiDelegateMenuCloseEndDelegate.h"
#include "UIDataShogiDelegateMenuEnterEndDelegate.h"
#include "MacanUIDataShogi.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataShogi : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PlayerThinkTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUsedSuperMatta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MattaCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIShogiLevel MyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState MyInfoWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIShogiEnemyName EnemyNameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIShogiLevel EnemyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EnemyHaveThinkTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EnemyThinkProgressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EnemyThinkMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState EnemyInfoWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState SuperMattaModeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState SuperMattaWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SuperMattaCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIShogiArrowAnimType SuperMattaArrowAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentTesuu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsSuperMattaMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOnMatta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOnTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSelectItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState RuleWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DecidedRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState DispHandState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D DispHandTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsMouseControll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState ButtonGuideState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWBPButtoniconType GuideButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState SelectWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIShogiSelectMessageType SelectMessageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isSelectSuperMatta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isOpenSelectWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState WindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SelectWindowCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateSelectWindowCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EnterSelectWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateSelectWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUpdateEnterSelectWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState CommonBackWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIShogiCommonWindowMessageType CommonWindowMessageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LimitTesuuCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState CutInBackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState CutInSentenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIShogiCutInMessageType CutInMessageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState CurrentModeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsShiren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState RemainTimeCutInState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RemainTimeCutInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState HandKomaState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> PlayerHandKoma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> EnemyHandKoma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState MouseTouchAreaState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataShogiDelegateMenuEnterEnd OnDelegateMenuEnterEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIDataShogiDelegateMenuCloseEnd OnDelegateMenuCloseEnd;
    
    UMacanUIDataShogi();

    UFUNCTION(BlueprintCallable)
    void UpdateHandPosition(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void ShowHand();
    
    UFUNCTION(BlueprintCallable)
    void ShowButtonGuide();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectWindowCursor(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectRuleWindow(bool isMatta, bool isTimer, int32 currentItem);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerInfo(float Time, bool isSuperMatta, int32 mattaNum, EUIShogiLevel Level);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyInfo(float haveTime, float thinkTime, float thinkMaxTime, EUIShogiLevel Level, EUIShogiEnemyName nameType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMode(bool shiren);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonGuide(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void PlaySuperMattaArrow(EUIShogiArrowAnimType arrowType);
    
    UFUNCTION(BlueprintCallable)
    void PlaySoundCursor2();
    
    UFUNCTION(BlueprintCallable)
    void PlaySoundCursor1();
    
    UFUNCTION(BlueprintCallable)
    void PlayCutin(EUIShogiCutInMessageType Type);
    
    UFUNCTION(BlueprintCallable)
    void OpenSuperMattaWindow();
    
    UFUNCTION(BlueprintCallable)
    void OpenSelectWindow(EUIShogiSelectMessageType Type);
    
    UFUNCTION(BlueprintCallable)
    void OpenSelectRuleWindow();
    
    UFUNCTION(BlueprintCallable)
    void OpenRemainTimeCutIn();
    
    UFUNCTION(BlueprintCallable)
    void OpenPlayerInfo();
    
    UFUNCTION(BlueprintCallable)
    void OpenMode();
    
    UFUNCTION(BlueprintCallable)
    void OpenEnemyInfo();
    
    UFUNCTION(BlueprintCallable)
    void OpenCommonMessageWindow(EUIShogiCommonWindowMessageType Type, int32 limitTesuu);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySuperMattaWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtySelectWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyRuleWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyRemainTimeCutIn(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyPlayerInfo(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyMouseTouchArea(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyHandKoma(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyHand(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyGuideButton(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyEnemyInfo(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyCutIn(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyCurrentMode(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirtyCommonMessageWindow(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirty(EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable)
    void HideHand();
    
    UFUNCTION(BlueprintCallable)
    void HideButtonGuide();
    
    UFUNCTION(BlueprintCallable)
    void EnterSelectWindowCursor();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySuperMattaWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtySelectWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyRuleWindow();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyRemainTimeCutIn();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyPlayerInfo();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyMouseArea();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyHandKoma();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyHand();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyGuideButton();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyEnemyInfo();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyCutIn();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyCurrentMode();
    
    UFUNCTION(BlueprintCallable)
    void DelBfDirtyCommonMessageWindow();
    
    UFUNCTION(BlueprintCallable)
    void DecideFinishSelectWindow();
    
    UFUNCTION(BlueprintCallable)
    void CloseSuperMattaWindow();
    
    UFUNCTION(BlueprintCallable)
    void CloseSelectWindow();
    
    UFUNCTION(BlueprintCallable)
    void CloseSelectRuleWindow();
    
    UFUNCTION(BlueprintCallable)
    void CloseRemainTimeCutIn();
    
    UFUNCTION(BlueprintCallable)
    void ClosePlayerInfo();
    
    UFUNCTION(BlueprintCallable)
    void CloseMode();
    
    UFUNCTION(BlueprintCallable)
    void CloseEnemyInfo();
    
    UFUNCTION(BlueprintCallable)
    void CloseCutIn();
    
    UFUNCTION(BlueprintCallable)
    void CloseCommonMessageWindow();
    
};

