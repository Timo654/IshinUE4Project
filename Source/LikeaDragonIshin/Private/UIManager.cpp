#include "UIManager.h"
#include "Templates/SubclassOf.h"

UUIManager::UUIManager() {
    this->m_BtnGuideHUIState = EUIState::NotSet;
    this->m_SystemFontType = EUIMacanSystemFontType::Mincho;
    this->m_CurrentFontSizeType = EUISwitchingFontSizeType::Medium;
    this->m_SubtitleFontSizeType = EUISwitchingFontSizeType::Medium;
    this->m_TextColorType = EUISwitchingFontColorType::White;
    this->m_TextSpeakerColorType = EUISwitchingFontColorType::White;
    this->m_SubtitleColorType = EUISwitchingFontColorType::White;
    this->m_SubtitleSpeakerColorType = EUISwitchingFontColorType::White;
    this->m_SubtitleBackColorType = EUISwitchingBackColorType::Clear;
    this->m_TextWindowColorType = EUISwitchingTextWindowColorType::Thin;
    this->m_UiDisp = EUISwitchingDisp::Disp;
    this->input_listener = NULL;
}

void UUIManager::StaticFuncUpdateInvalidationBoxCacheFlag(bool isCanCache) {
}

void UUIManager::StaticFuncUpdateBtnGuide(const TArray<FUIBtnGuideItemData>& inArray, EUIMainType inTargetType) {
}

void UUIManager::StaticFuncForcedCollectGarbage() {
}

EPadButton UUIManager::StaticFuncConvTruePadButtonType(EPadButton inSrcType) {
    return EPadButton::CROSS;
}

EPadButton UUIManager::StaticFuncConvEWBPButtoniconTypeToEPadButton(EWBPButtoniconType inSrcType) {
    return EPadButton::CROSS;
}

EPadButton UUIManager::StaticFuncConvEUIInputKeyAndMouseToEPadButton(EUIInputKeyAndMouse inSrcType) {
    return EPadButton::CROSS;
}

FName UUIManager::StaticFuncConvEPadButtonToFName(EPadButton inSrcType) {
    return NAME_None;
}

EWBPButtoniconType UUIManager::StaticFuncConvEPadButtonToEWBPButtoniconType(EPadButton inSrcType) {
    return EWBPButtoniconType::PS4_Batsu;
}

EUIInputKeyAndMouse UUIManager::StaticFuncConvEPadButtonToEUIInputKeyAndMouse(EPadButton inSrcType) {
    return EUIInputKeyAndMouse::NotSet;
}

void UUIManager::SetWidgetNotice(EUIWidgetNoticeType inType) {
}

bool UUIManager::SetUIState(EUIMainType inType, EUIState inState, bool isCheckNeedForUpdate) {
    return false;
}

void UUIManager::SetUiDisp() {
}

void UUIManager::SetTextWindowColorType() {
}

void UUIManager::SetTextSpeakerColorType() {
}

void UUIManager::SetTextColorType() {
}

void UUIManager::SetSystemFontType() {
}

void UUIManager::SetSubtitleSpeakerColorType() {
}

void UUIManager::SetSubtitleFontSizeType() {
}

void UUIManager::SetSubtitleColorType() {
}

void UUIManager::SetSubtitleBackColorType() {
}

void UUIManager::SetEnableCtrl(UMacanUserWidgetBase* Widget) {
}

void UUIManager::SetDisableCtrl(UMacanUserWidgetBase* Widget) {
}

bool UUIManager::SetCurrentInputKeyboardType(EUIInputKeyboardType inType) {
    return false;
}

bool UUIManager::SetCurrentInputDeviceType(EUIInputDeviceType inType, bool isEnableFordedInputDevide) {
    return false;
}

void UUIManager::SetCurrentFontSizeType() {
}

bool UUIManager::RemoveMainWidget(EUIMainType inType) {
    return false;
}

bool UUIManager::ReflectChangesByUI(EUIMainType inType) {
    return false;
}

bool UUIManager::ReflectChangesBySystem(EUIMainType inType) {
    return false;
}

bool UUIManager::ReflectChangesByGame(EUIMainType inType) {
    return false;
}

bool UUIManager::Prepare() {
    return false;
}

bool UUIManager::LoadMainWidget(EUIMainType inType, bool isAsync) {
    return false;
}

bool UUIManager::IsXboxOne() {
    return false;
}

bool UUIManager::isMainWidgetLoading(EUIMainType inType) const {
    return false;
}

bool UUIManager::isMainWidgetLoaded(EUIMainType inType) const {
    return false;
}

bool UUIManager::isMainWidgetCreated(EUIMainType inType) const {
    return false;
}

bool UUIManager::isMainWidgetAddedViewport(EUIMainType inType) const {
    return false;
}

bool UUIManager::IsAccessibilityHideUI() {
    return false;
}

void UUIManager::GetZOrderPresetRecord(EUIZOrderType Target, FUIZOrderPresetAssetDataRecord& record, EUIResultSuccessOrFailed& result) {
}

void UUIManager::GetUISystemFontRecord(EUIMacanSystemFontType Target, FUISystemFontDataRecord& record, EUIResultSuccessOrFailed& result) {
}

EUIState UUIManager::GetUIState(EUIMainType inType) {
    return EUIState::NotSet;
}

void UUIManager::GetUIKeyTexturesIdRecord(FName Target, FUIKeyTexturesIdAssetDataRecord& record, EUIResultSuccessOrFailed& result) {
}

void UUIManager::GetUIInfoAndUIData(EUIMainType inType, UMacanUIInfo*& uiInfo, UMacanUIData*& UIData, EUIResultSuccessOrFailed& result) {
}

UMacanUIInfo* UUIManager::GetUIInfo(EUIMainType inType, EUIResultSuccessOrFailed& result) {
    return NULL;
}

EUISwitchingDisp UUIManager::GetUiDisp() {
    return EUISwitchingDisp::Disp;
}

void UUIManager::GetUIData(EUIMainType inType, TSubclassOf<UMacanUIData> dataClass, UMacanUIData*& outUIData, EUIResultSuccessOrFailed& result) {
}

void UUIManager::GetUIAnimParamRecord(EUIAnimType Target, FUIAnimParamAssetDataRecord& record, EUIResultSuccessOrFailed& result) {
}

EUISwitchingTextWindowColorType UUIManager::GetTextWindowColorType() {
    return EUISwitchingTextWindowColorType::Thin;
}

EUISwitchingFontColorType UUIManager::GetTextSpeakerColorType() {
    return EUISwitchingFontColorType::White;
}

EUISwitchingFontColorType UUIManager::GetTextColorType() {
    return EUISwitchingFontColorType::White;
}

EUIMacanSystemFontType UUIManager::GetSystemFontType() {
    return EUIMacanSystemFontType::Mincho;
}

FName UUIManager::GetSystemFontName() {
    return NAME_None;
}

bool UUIManager::getSwitch_repeat2(EPadButton btn, EUIResultSuccessOrFailed& result) {
    return false;
}

bool UUIManager::getSwitch_repeat(EPadButton btn) {
    return false;
}

bool UUIManager::getSwitch_push2(EPadButton btn, EUIResultSuccessOrFailed& result) {
    return false;
}

bool UUIManager::getSwitch_push(EPadButton btn) {
    return false;
}

bool UUIManager::getSwitch_pull2(EPadButton btn, EUIResultSuccessOrFailed& result) {
    return false;
}

bool UUIManager::getSwitch_pull(EPadButton btn) {
    return false;
}

bool UUIManager::getSwitch_now2(EPadButton btn, EUIResultSuccessOrFailed& result) {
    return false;
}

bool UUIManager::getSwitch_now(EPadButton btn) {
    return false;
}

EUISwitchingFontColorType UUIManager::GetSubtitleSpeakerColorType() {
    return EUISwitchingFontColorType::White;
}

EUISwitchingFontSizeType UUIManager::GetSubtitleFontSizeType() {
    return EUISwitchingFontSizeType::Small;
}

EUISwitchingFontColorType UUIManager::GetSubtitleColorType() {
    return EUISwitchingFontColorType::White;
}

EUISwitchingBackColorType UUIManager::GetSubtitleBackColorType() {
    return EUISwitchingBackColorType::Clear;
}

void UUIManager::GetMainWidgetRecord(EUIMainType Target, FUIMainWidgetAssetDataRecord& record, EUIResultSuccessOrFailed& result) {
}

EUIInputDeviceType UUIManager::GetLastInputPadType() {
    return EUIInputDeviceType::DS4;
}

void UUIManager::getItemAbilityIconRecord(EItemAbilityType skill_type, FUIItemAbilityIconPresetDataRecord& record, EUIResultSuccessOrFailed& result) {
}

EUIPlatformType UUIManager::GetCurrentPlatformType() {
    return EUIPlatformType::Undef;
}

FString UUIManager::GetCurrentPlatformKeyword() {
    return TEXT("");
}

EUIInputKeyboardType UUIManager::GetCurrentInputKeyboardType() {
    return EUIInputKeyboardType::symbol;
}

EUIInputDeviceType UUIManager::GetCurrentInputDeviceType() {
    return EUIInputDeviceType::DS4;
}

EUISwitchingFontSizeType UUIManager::GetCurrentFontSizeType() {
    return EUISwitchingFontSizeType::Small;
}

void UUIManager::GetColorPresetRecord(EUIColorPreset Target, FUIColorPresetDataRecord& record, EUIResultSuccessOrFailed& result) {
}

bool UUIManager::CreateMainWidget(EUIMainType inType) {
    return false;
}

bool UUIManager::Cleanup(bool isDestoryALL) {
    return false;
}

void UUIManager::CallbackLoadedWidget(EUIMainType inType) {
}

bool UUIManager::AddViewPortMainWidget(EUIMainType inType) {
    return false;
}


