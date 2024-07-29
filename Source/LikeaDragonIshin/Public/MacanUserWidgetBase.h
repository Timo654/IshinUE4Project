#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EPadButton.h"
#include "EUIAnimDefaultSEType.h"
#include "EUIAnimType.h"
#include "EUIMainType.h"
#include "EUIResultInOnOutOffOther.h"
#include "EUIResultMouseButton.h"
#include "EUIResultNecessaryOrUnnecessary.h"
#include "EUIResultOpenCloseOther.h"
#include "EUIResultSuccessOrFailed.h"
#include "EUIResultZeroOrOther.h"
#include "EUIState.h"
#include "EUISwitchingDisp.h"
#include "EUIWidgetNoticeType.h"
#include "UIAnimParamAssetDataRecord.h"
#include "UIAnyIdDelegateAnimFinishedDelegate.h"
#include "UIAnyIdDelegateAnimPauseDelegate.h"
#include "UIAnyIdDelegateAnimPlayDelegate.h"
#include "UIAnyIdDelegateAnimStopDelegate.h"
#include "UIAnyIdDelegateChangeInvalidDelegate.h"
#include "UIAnyIdDelegateChangeStateDelegate.h"
#include "UIAnyIdDelegateChangeStateDisabledFocusedDelegate.h"
#include "UIAnyIdDelegateChangeStateDisabledNormalDelegate.h"
#include "UIAnyIdDelegateChangeStateDisabledNormalEndDelegate.h"
#include "UIAnyIdDelegateChangeStateDisabledNormalStartDelegate.h"
#include "UIAnyIdDelegateChangeStateFocusedDelegate.h"
#include "UIAnyIdDelegateChangeStateFocusedEndDelegate.h"
#include "UIAnyIdDelegateChangeStateFocusedStartDelegate.h"
#include "UIAnyIdDelegateChangeStateInEndDelegate.h"
#include "UIAnyIdDelegateChangeStateInStartDelegate.h"
#include "UIAnyIdDelegateChangeStateNormalDelegate.h"
#include "UIAnyIdDelegateChangeStateOffDelegate.h"
#include "UIAnyIdDelegateChangeStateOnDelegate.h"
#include "UIAnyIdDelegateChangeStateOutEndDelegate.h"
#include "UIAnyIdDelegateChangeStateOutStartDelegate.h"
#include "UIAnyIdDelegateChangeStatePressedDelegate.h"
#include "UIAnyIdDelegateChangeStatePressedEndDelegate.h"
#include "UIAnyIdDelegateChangeStatePressedStartDelegate.h"
#include "UIAnyIdDelegateChangeStateReleaseEndDelegate.h"
#include "UIAnyIdDelegateChangeStateReleaseStartDelegate.h"
#include "UIAnyIdDelegateChangeStateStayDelegate.h"
#include "UIAnyIdDelegateChangeValidDelegate.h"
#include "UIDelegateAnimFinishedDelegate.h"
#include "UIDelegateAnimPauseDelegate.h"
#include "UIDelegateAnimPlayDelegate.h"
#include "UIDelegateAnimStopDelegate.h"
#include "UIDelegateChangeInvalidDelegate.h"
#include "UIDelegateChangeStateDelegate.h"
#include "UIDelegateChangeStateDisabledFocusedDelegate.h"
#include "UIDelegateChangeStateDisabledFocusedEndDelegate.h"
#include "UIDelegateChangeStateDisabledFocusedStartDelegate.h"
#include "UIDelegateChangeStateDisabledNormalDelegate.h"
#include "UIDelegateChangeStateDisabledNormalEndDelegate.h"
#include "UIDelegateChangeStateDisabledNormalStartDelegate.h"
#include "UIDelegateChangeStateFocusedDelegate.h"
#include "UIDelegateChangeStateFocusedEndDelegate.h"
#include "UIDelegateChangeStateFocusedStartDelegate.h"
#include "UIDelegateChangeStateInEndDelegate.h"
#include "UIDelegateChangeStateInStartDelegate.h"
#include "UIDelegateChangeStateNormalDelegate.h"
#include "UIDelegateChangeStateOffDelegate.h"
#include "UIDelegateChangeStateOnDelegate.h"
#include "UIDelegateChangeStateOutEndDelegate.h"
#include "UIDelegateChangeStateOutStartDelegate.h"
#include "UIDelegateChangeStatePressedDelegate.h"
#include "UIDelegateChangeStatePressedEndDelegate.h"
#include "UIDelegateChangeStatePressedStartDelegate.h"
#include "UIDelegateChangeStateReleaseEndDelegate.h"
#include "UIDelegateChangeStateReleaseStartDelegate.h"
#include "UIDelegateChangeStateStayDelegate.h"
#include "UIDelegateChangeValidDelegate.h"
#include "MacanUserWidgetBase.generated.h"

class UMacanUIInfo;
class UMacanUserWidgetBase;
class UTextBlock;
class UUIManager;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class LIKEADRAGONISHIN_API UMacanUserWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mouseDelegateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mouseDelegateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isMouseDelegateMyself;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateAnimPlay OnUIDelegateAnimPlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateAnimStop OnUIDelegateAnimStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateAnimPause OnUIDelegateAnimPause;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateAnimFinished OnUIDelegateAnimFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeState OnUIDelegateChangeState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateInStart OnUIDelegateChangeStateInStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateInEnd OnUIDelegateChangeStateInEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateStay OnUIDelegateChangeStateStay;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateOutStart OnUIDelegateChangeStateOutStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateOutEnd OnUIDelegateChangeStateOutEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateOn OnUIDelegateChangeStateOn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateOff OnUIDelegateChangeStateOff;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateFocusedStart OnUIDelegateChangeStateFocusedStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateFocusedEnd OnUIDelegateChangeStateFocusedEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateFocused OnUIDelegateChangeStateFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateNormal OnUIDelegateChangeStateNormal;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStatePressedStart OnUIDelegateChangeStatePressedStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStatePressedEnd OnUIDelegateChangeStatePressedEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStatePressed OnUIDelegateChangeStatePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateReleaseStart OnUIDelegateChangeStateReleaseStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateReleaseEnd OnUIDelegateChangeStateReleaseEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateDisabledFocusedStart OnUIDelegateChangeStateDisabledFocusedStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateDisabledFocusedEnd OnUIDelegateChangeStateDisabledFocusedEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateDisabledFocused OnUIDelegateChangeStateDisabledFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateDisabledNormalStart OnUIDelegateChangeStateDisabledNormalStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateDisabledNormalEnd OnUIDelegateChangeStateDisabledNormalEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeStateDisabledNormal OnUIDelegateChangeStateDisabledNormal;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeValid OnUIDelegateChangeValid;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDelegateChangeInvalid OnUIDelegateChangeInvalid;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateAnimPlay OnUIAnyIdDelegateAnimPlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateAnimStop OnUIAnyIdDelegateAnimStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateAnimPause OnUIAnyIdDelegateAnimPause;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateAnimFinished OnUIAnyIdDelegateAnimFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeState OnUIAnyIdDelegateChangeState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateInStart OnUIAnyIdDelegateChangeStateInStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateInEnd OnUIAnyIdDelegateChangeStateInEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateStay OnUIAnyIdDelegateChangeStateStay;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateOutStart OnUIAnyIdDelegateChangeStateOutStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateOutEnd OnUIAnyIdDelegateChangeStateOutEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateOn OnUIAnyIdDelegateChangeStateOn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateOff OnUIAnyIdDelegateChangeStateOff;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateFocusedStart OnUIAnyIdDelegateChangeStateFocusedStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateFocusedEnd OnUIAnyIdDelegateChangeStateFocusedEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateFocused OnUIAnyIdDelegateChangeStateFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateNormal OnUIAnyIdDelegateChangeStateNormal;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStatePressedStart OnUIAnyIdDelegateChangeStatePressedStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStatePressedEnd OnUIAnyIdDelegateChangeStatePressedEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStatePressed OnUIAnyIdDelegateChangeStatePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateReleaseStart OnUIAnyIdDelegateChangeStateReleaseStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateReleaseEnd OnUIAnyIdDelegateChangeStateReleaseEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateDisabledFocused OnUIAnyIdDelegateChangeStateDisabledFocusedStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateDisabledFocused OnUIAnyIdDelegateChangeStateDisabledFocusedEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateDisabledFocused OnUIAnyIdDelegateChangeStateDisabledFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateDisabledNormalStart OnUIAnyIdDelegateChangeStateDisabledNormalStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateDisabledNormalEnd OnUIAnyIdDelegateChangeStateDisabledNormalEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeStateDisabledNormal OnUIAnyIdDelegateChangeStateDisabledNormal;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeValid OnUIAnyIdDelegateChangeValid;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIAnyIdDelegateChangeInvalid OnUIAnyIdDelegateChangeInvalid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility defaultVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility defaultInvisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float defaultRenderOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool disableAutoVisibleChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool disableAutoInvisibleChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUIManager* UIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIInfo* uiInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIMainType uiMainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState uiState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIState uiStateReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIAnimType stateOverrideAnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSelectItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSelectCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isSelectFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isSelectDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 anyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRenderOpacityChangeNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCustomDispEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMacanUserWidgetBase*> childList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPropagationChild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPropagationChildInOutOnOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUIAnimType eCurrentAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EUIAnimType, UWidgetAnimation*> mapAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UWidgetAnimation*> SetAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIAnimType, FUIAnimParamAssetDataRecord> customUIAnimParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIAnimDefaultSEType animDefaultSEType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> mapNowUIAnimPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, float> mapNowUIAnimGaugeRatio;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMacanUserWidgetBase* parentMacanUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMacanUserWidgetBase*, bool> childConstructedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMacanUserWidgetBase> ancestorMacanUserWidget;
    
public:
    UMacanUserWidgetBase();

    UFUNCTION(BlueprintCallable)
    void UIMouseFuncSetNameAndIndexAndAncestor(FName Name, int32 Index, UMacanUserWidgetBase* inTargetWidget);
    
    UFUNCTION(BlueprintCallable)
    void UIMouseFuncSetNameAndIndex(FName Name, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    EUIResultMouseButton UIMouseButtonBranch(const FPointerEvent& InMouseEvent, EUIResultMouseButton& result);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UIFuncUpdatePointAndText(int32 inPoint, bool isForced, bool isUseGrouping, UPARAM(Ref) int32& TargetPoint, UTextBlock* targetText, FText formatText, FText unitText);
    
    UFUNCTION(BlueprintCallable)
    void UIFuncUpdateCountAndText(int32 inCount, bool isForced, UPARAM(Ref) int32& targetCount, UTextBlock* targetText);
    
    UFUNCTION(BlueprintCallable)
    bool UIFuncUIStateIsPressed(EUIState inState, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    bool UIFuncUIStateIsOpenOrClose(EUIState inState, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    bool UIFuncUIStateIsOpenCloseOther(EUIState inState, EUIResultOpenCloseOther& result);
    
    UFUNCTION(BlueprintCallable)
    bool UIFuncUIStateIsOpen(EUIState inState, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    bool UIFuncUIStateIsInOnOutOffOther(EUIState inState, EUIResultInOnOutOffOther& result);
    
    UFUNCTION(BlueprintCallable)
    bool UIFuncUIStateIsClose(EUIState inState, EUIResultSuccessOrFailed& result);
    
public:
    UFUNCTION(BlueprintCallable)
    bool UIFuncDecrementCounterAndZeroCheck(UPARAM(Ref) int32& inCounter, EUIResultSuccessOrFailed& result);
    
    UFUNCTION(BlueprintCallable)
    void UIBaseFuncSetMyAncestorToTargetWidget(UMacanUserWidgetBase* inTargetWidget);
    
    UFUNCTION(BlueprintCallable)
    void UIBaseFuncSetMyAncestorFromTargetWidget(UMacanUserWidgetBase* inTargetWidget);
    
    UFUNCTION(BlueprintCallable)
    void UIAnimStop();
    
    UFUNCTION(BlueprintCallable)
    bool UIAnimPlay(EUIAnimType animType, bool IsEnd);
    
    UFUNCTION(BlueprintCallable)
    void UIAnimPause(bool isPause);
    
    UFUNCTION(BlueprintCallable)
    bool UIAnimGaugeRatio(int32 Index, float ratio);
    
    UFUNCTION(BlueprintCallable)
    bool UIAnimChangePatterns(int32 Index, int32 indexSec);
    
    UFUNCTION(BlueprintCallable)
    bool UIAnimChangePattern(int32 indexSec);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetVisibilityDefaultVisible();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityDefaultInvisible();
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetupAfterCreatedByUIManager(UUIManager* inManager, UMacanUIInfo* inInfo, EUIMainType inType);
    
    UFUNCTION(BlueprintCallable)
    bool SetUIStateLimitedOpenClose(EUIState inState);
    
    UFUNCTION(BlueprintCallable)
    EUIState SetUIStateCheckNeedForUpdate(EUIState inChangeState, EUIResultNecessaryOrUnnecessary& result);
    
    UFUNCTION(BlueprintCallable)
    bool SetUIState(EUIState inState);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderOpacityChangeNoticeFlag(bool inFlag);
    
    UFUNCTION(BlueprintCallable)
    void setParentMacanUserWidget(UMacanUserWidgetBase* Parent);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelectFocused(bool newFocued);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelectDisabled(bool newDisabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetEnableCtrl();
    
    UFUNCTION(BlueprintCallable)
    void SetDisableCtrl();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ReflectChangesByUI();
    
    UFUNCTION(BlueprintCallable)
    bool ReflectChangesBySystem();
    
    UFUNCTION(BlueprintCallable)
    bool ReflectChangesByGame();
    
    UFUNCTION(BlueprintCallable)
    void receiveRemoveChild(UMacanUserWidgetBase* child);
    
    UFUNCTION(BlueprintCallable)
    void receiveDestructedChild(UMacanUserWidgetBase* child);
    
    UFUNCTION(BlueprintCallable)
    void receiveConstructedChild(UMacanUserWidgetBase* child);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateWidgetNotice(EUIWidgetNoticeType inType);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateSwitchinCustomDisp(EUISwitchingDisp inType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateByUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateBySystem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateByGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIMouseEventMouseOver(FName Name, int32 Index, FName Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIMouseEventChangeInt32(FName Name, int32 Index, int32 Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIMouseEventChangeFloat(FName Name, int32 Index, float Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIMouseEventButtonDown(FName Name, int32 Index, EPadButton Value) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIAnimStop(EUIAnimType animType, UWidgetAnimation* widgetAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIAnimPlay(EUIAnimType animType, UWidgetAnimation* widgetAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUIAnimPause(bool isPause, EUIAnimType animType, UWidgetAnimation* widgetAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetupAfterCreatedByUIManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializedInGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCtrlBP(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeValid();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStateStay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStateReleaseStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStateReleaseEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStatePressedStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStatePressedEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStateOutStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStateOutEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStateOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStateOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStateNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStateInStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStateInEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStateFocused();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStateDisabledNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStateDisabledFocused();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeState(EUIState inUIState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeIsSelectFocused(bool newFocued);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeIsSelectDisabled(bool newDisabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeInvalid();
    
public:
    UFUNCTION(BlueprintCallable)
    void notifyConstructedToParent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isUIAnimPlaying(EUIAnimType animType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrepared() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMainWidget() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableAutoHScroll();
    
    UFUNCTION(BlueprintCallable)
    bool IsAlwayAutoHScroll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetAnimation* getWidgetAnimationPtr(EUIAnimType animType) const;
    
    UFUNCTION(BlueprintCallable)
    EUIState GetUIStateAndCheckOfTheNeedForUpdate(EUIState inChangeState, EUIResultNecessaryOrUnnecessary& result, bool isStateChange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUIState GetUIState() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRefCountUIStatePressedAndAnimPlaying(EUIResultZeroOrOther& result, UPARAM(Ref) int32& refCount, bool isChildALL, bool isGrandchildALL);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRefCountUIStateOpenType(EUIResultZeroOrOther& result, UPARAM(Ref) int32& refCount, bool isChildALL, bool isGrandchildALL);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRefCountUIStateCloseType(EUIResultZeroOrOther& result, UPARAM(Ref) int32& refCount, bool isChildALL, bool isGrandchildALL);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRefCountUIState(EUIResultZeroOrOther& result, UPARAM(Ref) int32& refCount, EUIState inUIState, bool isChildALL, bool isGrandchildALL);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRefCountUIAnimType(EUIResultZeroOrOther& result, UPARAM(Ref) int32& refCount, EUIAnimType inAnimType, bool isChildALL, bool isGrandchildALL);
    
    UFUNCTION(BlueprintCallable)
    EUIAnimType GetCurrentUIAnimType();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCountUIStatePressedAndAnimPlaying(EUIResultZeroOrOther& result, bool isChildALL, bool isGrandchildALL);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCountUIStateOpenType(EUIResultZeroOrOther& result, bool isChildALL, bool isGrandchildALL);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCountUIStateCloseType(EUIResultZeroOrOther& result, bool isChildALL, bool isGrandchildALL);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCountUIState(EUIResultZeroOrOther& result, EUIState inUIState, bool isChildALL, bool isGrandchildALL);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCountUIAnimType(EUIResultZeroOrOther& result, EUIAnimType inAnimType, bool isChildALL, bool isGrandchildALL);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteUIMouseDelegateMouseOver(FName Name, int32 Index, FName Value);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteUIMouseDelegatChangeInt32(FName Name, int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteUIMouseDelegatChangeFloat(FName Name, int32 Index, float Value);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteUIMouseDelegatButtonDown(FName Name, int32 Index, EPadButton Value);
    
    UFUNCTION(BlueprintCallable)
    void DebugPrintAnimationStats();
    
    UFUNCTION(BlueprintCallable)
    void Ctrl(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeUIStateByPressedFlag(bool IsPressed, EUIState inOtheState);
    
    UFUNCTION(BlueprintCallable)
    void AutoHScrollStop();
    
    UFUNCTION(BlueprintCallable)
    void AutoHScrollPlay();
    
};

