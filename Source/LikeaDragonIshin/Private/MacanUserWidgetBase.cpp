#include "MacanUserWidgetBase.h"

UMacanUserWidgetBase::UMacanUserWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->mouseDelegateIndex = -1;
    this->isMouseDelegateMyself = false;
    this->defaultVisible = ESlateVisibility::SelfHitTestInvisible;
    this->defaultInvisible = ESlateVisibility::Collapsed;
    this->defaultRenderOpacity = 1.00f;
    this->disableAutoVisibleChange = false;
    this->disableAutoInvisibleChange = false;
    this->UIManager = NULL;
    this->uiInfo = NULL;
    this->uiMainType = EUIMainType::NotSet;
    this->uiState = EUIState::NotSet;
    this->uiStateReq = EUIState::NotSet;
    this->stateOverrideAnimationType = EUIAnimType::NotSet;
    this->isSelectItem = false;
    this->isSelectCursor = false;
    this->isSelectFocused = false;
    this->isSelectDisabled = false;
    this->anyID = -1;
    this->isRenderOpacityChangeNotice = false;
    this->isCustomDispEnable = false;
    this->isPropagationChild = false;
    this->isPropagationChildInOutOnOff = false;
    this->eCurrentAnimType = EUIAnimType::NotSet;
    this->animDefaultSEType = EUIAnimDefaultSEType::NotSet;
    this->parentMacanUserWidget = NULL;
}

void UMacanUserWidgetBase::UIMouseFuncSetNameAndIndexAndAncestor(FName Name, int32 Index, UMacanUserWidgetBase* inTargetWidget) {
}

void UMacanUserWidgetBase::UIMouseFuncSetNameAndIndex(FName Name, int32 Index) {
}

EUIResultMouseButton UMacanUserWidgetBase::UIMouseButtonBranch(const FPointerEvent& InMouseEvent, EUIResultMouseButton& result) {
    return EUIResultMouseButton::Left;
}

void UMacanUserWidgetBase::UIFuncUpdatePointAndText(int32 inPoint, bool isForced, bool isUseGrouping, int32& TargetPoint, UTextBlock* targetText, FText formatText, FText unitText) {
}

void UMacanUserWidgetBase::UIFuncUpdateCountAndText(int32 inCount, bool isForced, int32& targetCount, UTextBlock* targetText) {
}

bool UMacanUserWidgetBase::UIFuncUIStateIsPressed(EUIState inState, EUIResultSuccessOrFailed& result) {
    return false;
}

bool UMacanUserWidgetBase::UIFuncUIStateIsOpenOrClose(EUIState inState, EUIResultSuccessOrFailed& result) {
    return false;
}

bool UMacanUserWidgetBase::UIFuncUIStateIsOpenCloseOther(EUIState inState, EUIResultOpenCloseOther& result) {
    return false;
}

bool UMacanUserWidgetBase::UIFuncUIStateIsOpen(EUIState inState, EUIResultSuccessOrFailed& result) {
    return false;
}

bool UMacanUserWidgetBase::UIFuncUIStateIsInOnOutOffOther(EUIState inState, EUIResultInOnOutOffOther& result) {
    return false;
}

bool UMacanUserWidgetBase::UIFuncUIStateIsClose(EUIState inState, EUIResultSuccessOrFailed& result) {
    return false;
}

bool UMacanUserWidgetBase::UIFuncDecrementCounterAndZeroCheck(int32& inCounter, EUIResultSuccessOrFailed& result) {
    return false;
}

void UMacanUserWidgetBase::UIBaseFuncSetMyAncestorToTargetWidget(UMacanUserWidgetBase* inTargetWidget) {
}

void UMacanUserWidgetBase::UIBaseFuncSetMyAncestorFromTargetWidget(UMacanUserWidgetBase* inTargetWidget) {
}

void UMacanUserWidgetBase::UIAnimStop() {
}

bool UMacanUserWidgetBase::UIAnimPlay(EUIAnimType animType, bool IsEnd) {
    return false;
}

void UMacanUserWidgetBase::UIAnimPause(bool isPause) {
}

bool UMacanUserWidgetBase::UIAnimGaugeRatio(int32 Index, float ratio) {
    return false;
}

bool UMacanUserWidgetBase::UIAnimChangePatterns(int32 Index, int32 indexSec) {
    return false;
}

bool UMacanUserWidgetBase::UIAnimChangePattern(int32 indexSec) {
    return false;
}

void UMacanUserWidgetBase::SetVisibilityDefaultVisible() {
}

void UMacanUserWidgetBase::SetVisibilityDefaultInvisible() {
}

bool UMacanUserWidgetBase::SetupAfterCreatedByUIManager(UUIManager* inManager, UMacanUIInfo* inInfo, EUIMainType inType) {
    return false;
}

bool UMacanUserWidgetBase::SetUIStateLimitedOpenClose(EUIState inState) {
    return false;
}

EUIState UMacanUserWidgetBase::SetUIStateCheckNeedForUpdate(EUIState inChangeState, EUIResultNecessaryOrUnnecessary& result) {
    return EUIState::NotSet;
}

bool UMacanUserWidgetBase::SetUIState(EUIState inState) {
    return false;
}

void UMacanUserWidgetBase::SetRenderOpacityChangeNoticeFlag(bool inFlag) {
}

void UMacanUserWidgetBase::setParentMacanUserWidget(UMacanUserWidgetBase* Parent) {
}

void UMacanUserWidgetBase::SetIsSelectFocused(bool newFocued) {
}

void UMacanUserWidgetBase::SetIsSelectDisabled(bool newDisabled) {
}

void UMacanUserWidgetBase::SetEnableCtrl() {
}

void UMacanUserWidgetBase::SetDisableCtrl() {
}

bool UMacanUserWidgetBase::ReflectChangesByUI() {
    return false;
}

bool UMacanUserWidgetBase::ReflectChangesBySystem() {
    return false;
}

bool UMacanUserWidgetBase::ReflectChangesByGame() {
    return false;
}

void UMacanUserWidgetBase::receiveRemoveChild(UMacanUserWidgetBase* child) {
}

void UMacanUserWidgetBase::receiveDestructedChild(UMacanUserWidgetBase* child) {
}

void UMacanUserWidgetBase::receiveConstructedChild(UMacanUserWidgetBase* child) {
}

void UMacanUserWidgetBase::OnUpdateWidgetNotice(EUIWidgetNoticeType inType) {
}

void UMacanUserWidgetBase::OnUpdateSwitchinCustomDisp(EUISwitchingDisp inType) {
}



































void UMacanUserWidgetBase::notifyConstructedToParent() {
}

bool UMacanUserWidgetBase::isUIAnimPlaying(EUIAnimType animType) const {
    return false;
}

bool UMacanUserWidgetBase::IsPrepared() const {
    return false;
}

bool UMacanUserWidgetBase::IsMainWidget() const {
    return false;
}

bool UMacanUserWidgetBase::IsEnableAutoHScroll() {
    return false;
}

bool UMacanUserWidgetBase::IsAlwayAutoHScroll() {
    return false;
}

UWidgetAnimation* UMacanUserWidgetBase::getWidgetAnimationPtr(EUIAnimType animType) const {
    return NULL;
}

EUIState UMacanUserWidgetBase::GetUIStateAndCheckOfTheNeedForUpdate(EUIState inChangeState, EUIResultNecessaryOrUnnecessary& result, bool isStateChange) {
    return EUIState::NotSet;
}

EUIState UMacanUserWidgetBase::GetUIState() const {
    return EUIState::NotSet;
}

int32 UMacanUserWidgetBase::GetRefCountUIStatePressedAndAnimPlaying(EUIResultZeroOrOther& result, int32& refCount, bool isChildALL, bool isGrandchildALL) {
    return 0;
}

int32 UMacanUserWidgetBase::GetRefCountUIStateOpenType(EUIResultZeroOrOther& result, int32& refCount, bool isChildALL, bool isGrandchildALL) {
    return 0;
}

int32 UMacanUserWidgetBase::GetRefCountUIStateCloseType(EUIResultZeroOrOther& result, int32& refCount, bool isChildALL, bool isGrandchildALL) {
    return 0;
}

int32 UMacanUserWidgetBase::GetRefCountUIState(EUIResultZeroOrOther& result, int32& refCount, EUIState inUIState, bool isChildALL, bool isGrandchildALL) {
    return 0;
}

int32 UMacanUserWidgetBase::GetRefCountUIAnimType(EUIResultZeroOrOther& result, int32& refCount, EUIAnimType inAnimType, bool isChildALL, bool isGrandchildALL) {
    return 0;
}

EUIAnimType UMacanUserWidgetBase::GetCurrentUIAnimType() {
    return EUIAnimType::NotSet;
}

int32 UMacanUserWidgetBase::GetCountUIStatePressedAndAnimPlaying(EUIResultZeroOrOther& result, bool isChildALL, bool isGrandchildALL) {
    return 0;
}

int32 UMacanUserWidgetBase::GetCountUIStateOpenType(EUIResultZeroOrOther& result, bool isChildALL, bool isGrandchildALL) {
    return 0;
}

int32 UMacanUserWidgetBase::GetCountUIStateCloseType(EUIResultZeroOrOther& result, bool isChildALL, bool isGrandchildALL) {
    return 0;
}

int32 UMacanUserWidgetBase::GetCountUIState(EUIResultZeroOrOther& result, EUIState inUIState, bool isChildALL, bool isGrandchildALL) {
    return 0;
}

int32 UMacanUserWidgetBase::GetCountUIAnimType(EUIResultZeroOrOther& result, EUIAnimType inAnimType, bool isChildALL, bool isGrandchildALL) {
    return 0;
}

void UMacanUserWidgetBase::ExecuteUIMouseDelegateMouseOver(FName Name, int32 Index, FName Value) {
}

void UMacanUserWidgetBase::ExecuteUIMouseDelegatChangeInt32(FName Name, int32 Index, int32 Value) {
}

void UMacanUserWidgetBase::ExecuteUIMouseDelegatChangeFloat(FName Name, int32 Index, float Value) {
}

void UMacanUserWidgetBase::ExecuteUIMouseDelegatButtonDown(FName Name, int32 Index, EPadButton Value) {
}

void UMacanUserWidgetBase::DebugPrintAnimationStats() {
}

void UMacanUserWidgetBase::Ctrl(float DeltaTime) {
}

bool UMacanUserWidgetBase::ChangeUIStateByPressedFlag(bool IsPressed, EUIState inOtheState) {
    return false;
}

void UMacanUserWidgetBase::AutoHScrollStop() {
}

void UMacanUserWidgetBase::AutoHScrollPlay() {
}


