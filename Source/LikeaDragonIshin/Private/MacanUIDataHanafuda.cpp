#include "MacanUIDataHanafuda.h"

UMacanUIDataHanafuda::UMacanUIDataHanafuda() {
    this->playerInfoArray.AddDefaulted(2);
    this->currentPlayerType = EHanafudaPlayerType::Max;
    this->parentPlayerType = EHanafudaPlayerType::Max;
    this->nowMonth = 1;
    this->handCursorArray.AddDefaulted(4);
    this->fieldCursorArray.AddDefaulted(4);
    this->kirakiraArray.AddDefaulted(8);
    this->aifudaNumArray.AddDefaulted(8);
    this->yakuGet = EHanafudaAttribute::HA_Max;
    this->stateMenu = EUIState::NotSet;
    this->cursorMenu = 0;
    this->isUpdateCursorMenu = false;
    this->enterMenu = false;
    this->isUpdateEnterMenu = false;
    this->typeMenu = EHanafudaMenuType::Begining;
    this->isUpdateTypeMenu = false;
    this->isUpdateItemListMenu = false;
    this->stateSetting = EUIState::NotSet;
    this->cursorSettingV = 0;
    this->cursorSettingH = 0;
    this->enterSetting = false;
    this->stateRuleDescription = EUIState::NotSet;
    this->pageRuleDescription = 0;
    this->stateYakuDescription = EUIState::NotSet;
    this->pageYakuDescription = 0;
    this->stateExplanation = EUIState::NotSet;
    this->stateLineInfo01 = EUIState::NotSet;
    this->stateLineInfo02 = EUIState::NotSet;
    this->stateYakuList = EUIState::NotSet;
    this->arrayYakuListState.AddDefaulted(13);
    this->stateSelectKoiKoi = EUIState::NotSet;
    this->cursorSelectKoiKoi = 0;
    this->isUpdateCursorSelectKoiKoi = false;
    this->enterSelectKoiKoi = false;
    this->isUpdateListSelectKoiKoi = false;
    this->totalPointSelectKoiKoi = 0;
    this->isOpenChoiceWindowSelectKoiKoi = true;
    this->stateResult = EUIState::NotSet;
    this->isSkipResult = false;
    this->isUpdateListResult = false;
    this->isWinResult = false;
    this->totalPointResult = 0;
    this->stateOyaDescisionMonth = EUIState::NotSet;
    this->numLeftOyaDescisionMonth = 0;
    this->numRightOyaDescisionMonth = 0;
    this->statePossessionPoint = EUIState::NotSet;
    this->firstMenuIndex = 0;
    this->customCursol = 0;
    this->sankakuCursol = 0;
    this->choiceUserWidget = NULL;
    this->sankakuChoiceUserWidget = NULL;
}

void UMacanUIDataHanafuda::UpdateSankakuCursol(int32 cursol) {
}

void UMacanUIDataHanafuda::UpdateFirstMenuCursol(int32 Index) {
}

void UMacanUIDataHanafuda::UpdateCustomSwitch(int32 Value) {
}

void UMacanUIDataHanafuda::UpdateCustomCursol(int32 Index) {
}

bool UMacanUIDataHanafuda::SkipResult() {
    return false;
}

void UMacanUIDataHanafuda::ShowUI() {
}

bool UMacanUIDataHanafuda::SetYakuListStateArray(TArray<EHanafudaYakuState>& setArray) {
    return false;
}

bool UMacanUIDataHanafuda::SetYakuGet(EHanafudaAttribute yaku) {
    return false;
}

bool UMacanUIDataHanafuda::SetVisibleKiraKiraAll(bool visible) {
    return false;
}

bool UMacanUIDataHanafuda::SetVisibleKiraKira(int32 Index, bool visible) {
    return false;
}

bool UMacanUIDataHanafuda::SetVisibleHandCursorAll(bool visible) {
    return false;
}

bool UMacanUIDataHanafuda::SetVisibleHandCursor(int32 Index, bool visible) {
    return false;
}

bool UMacanUIDataHanafuda::SetVisibleFieldCursorAll(bool visible) {
    return false;
}

bool UMacanUIDataHanafuda::SetVisibleFieldCursor(int32 Index, bool visible) {
    return false;
}

bool UMacanUIDataHanafuda::SetVisibleAifudaNumAll(bool visible) {
    return false;
}

bool UMacanUIDataHanafuda::SetVisibleAifudaNum(int32 Index, bool visible) {
    return false;
}

bool UMacanUIDataHanafuda::SetupItemMenu(EHanafudaMenuType menuType) {
    return false;
}

bool UMacanUIDataHanafuda::SetSetting(FHanafudaSettingsInfo& inSettingsInfo) {
    return false;
}

bool UMacanUIDataHanafuda::SetSelfPoint(int32 Point) {
    return false;
}

bool UMacanUIDataHanafuda::SetPossessionPoint(int32 Point) {
    return false;
}

bool UMacanUIDataHanafuda::SetParent(EHanafudaPlayerType playerType) {
    return false;
}

bool UMacanUIDataHanafuda::SetPageYakuDescription(int32 Index) {
    return false;
}

bool UMacanUIDataHanafuda::SetPageRuleDescription(int32 Index) {
    return false;
}

bool UMacanUIDataHanafuda::SetMonth(int32 Month) {
    return false;
}

bool UMacanUIDataHanafuda::SetMenuCursor(int32 Index) {
    return false;
}

bool UMacanUIDataHanafuda::SetKiraKira(int32 Index, FVector2D& Pos) {
    return false;
}

bool UMacanUIDataHanafuda::SetHandCursor(int32 Index, FVector2D& Pos) {
    return false;
}

bool UMacanUIDataHanafuda::SetFieldCursor(int32 Index, FVector2D& Pos) {
    return false;
}

bool UMacanUIDataHanafuda::SetEnemyPoint(int32 Point) {
    return false;
}

bool UMacanUIDataHanafuda::SetCursorSetting(int32 indexV, int32 indexH) {
    return false;
}

bool UMacanUIDataHanafuda::SetCursorSelectKoiKoi(int32 Index) {
    return false;
}

bool UMacanUIDataHanafuda::SetCurrentPlayer(EHanafudaPlayerType playerType) {
    return false;
}

bool UMacanUIDataHanafuda::SetAifudaNum(int32 Index, FVector2D& Pos, int32 Num) {
    return false;
}

bool UMacanUIDataHanafuda::OpenYakuList() {
    return false;
}

bool UMacanUIDataHanafuda::OpenYakuDescription() {
    return false;
}

bool UMacanUIDataHanafuda::OpenSetting() {
    return false;
}

bool UMacanUIDataHanafuda::OpenSelectKoiKoi(TArray<EHanafudaAttribute>& yakuArray, TArray<int32> pointArray, int32 totalPoint, FText playerName, bool isOpenChoiceWindow) {
    return false;
}

void UMacanUIDataHanafuda::OpenSankaku() {
}

bool UMacanUIDataHanafuda::OpenRuleDescription() {
    return false;
}

bool UMacanUIDataHanafuda::OpenResult(TArray<FText>& textArray, int32 totalPoint, FText& totalText, bool isWin) {
    return false;
}

bool UMacanUIDataHanafuda::OpenPossessionPoint() {
    return false;
}

bool UMacanUIDataHanafuda::OpenOyaDescisionMonth(int32 leftMonth, int32 rightMonth) {
    return false;
}

bool UMacanUIDataHanafuda::OpenMenu(EHanafudaMenuType menuType) {
    return false;
}

bool UMacanUIDataHanafuda::OpenLineInfo02(FText& text) {
    return false;
}

bool UMacanUIDataHanafuda::OpenLineInfo01(FText& text) {
    return false;
}

void UMacanUIDataHanafuda::OpenFirstMenu() {
}

bool UMacanUIDataHanafuda::OpenExplanation() {
    return false;
}

void UMacanUIDataHanafuda::OpenCustomView() {
}

void UMacanUIDataHanafuda::OpenCustom() {
}

void UMacanUIDataHanafuda::OffFlagIsUpdateListSelectKoiKoi() {
}

void UMacanUIDataHanafuda::OffFlagIsUpdateListResult() {
}

void UMacanUIDataHanafuda::OffFlagIsUpdateCursorSelectKoiKoi() {
}

void UMacanUIDataHanafuda::OffFlagIsSkipResult() {
}

void UMacanUIDataHanafuda::OffFlagEnterCursorSelectKoiKoi() {
}

bool UMacanUIDataHanafuda::IsNeedUpdateThisUI(EKoikoiUI uiType, EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyYakuList(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyYakuGet(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyYakuDescription(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyUpdateFirstMenu(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtySetting(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtySelfPoint(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtySelfName(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtySelectKoiKoi(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyRuleDescription(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyResult(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyPossessionPoint(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyParent(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyOyaDescisionMonth(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyOpenFirstMenu(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyMonth(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyMenu(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyLineInfo02(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyLineInfo01(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyKiraKira(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyHandCursor(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyFieldCursor(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyExplanation(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyEnemyPoint(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyEnemyName(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyDecideFirstMenu(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyCurrentPlayer(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirtyAifudaNum(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataHanafuda::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataHanafuda::HideUI() {
}

int32 UMacanUIDataHanafuda::GetMenuLastItemNum(EHanafudaMenuType menuType) const {
    return 0;
}

bool UMacanUIDataHanafuda::FirstInitalize(FHanafudaPlayerInfo& typeSelf, FHanafudaPlayerInfo& typeEnemy) {
    return false;
}

void UMacanUIDataHanafuda::FinishUpdateUI(EKoikoiUI uiType) {
}

bool UMacanUIDataHanafuda::EnterMenuCursor() {
    return false;
}

bool UMacanUIDataHanafuda::EnterCursorSelectKoiKoi() {
    return false;
}

bool UMacanUIDataHanafuda::EnterCursorCursorSetting() {
    return false;
}

void UMacanUIDataHanafuda::DelBfDirtyYakuList() {
}

void UMacanUIDataHanafuda::DelBfDirtyYakuGet() {
}

void UMacanUIDataHanafuda::DelBfDirtyYakuDescription() {
}

void UMacanUIDataHanafuda::DelBfDirtySetting() {
}

void UMacanUIDataHanafuda::DelBfDirtySelfPoint() {
}

void UMacanUIDataHanafuda::DelBfDirtySelfName() {
}

void UMacanUIDataHanafuda::DelBfDirtySelectKoiKoi() {
}

void UMacanUIDataHanafuda::DelBfDirtyRuleDescription() {
}

void UMacanUIDataHanafuda::DelBfDirtyResult() {
}

void UMacanUIDataHanafuda::DelBfDirtyPossessionPoint() {
}

void UMacanUIDataHanafuda::DelBfDirtyParent() {
}

void UMacanUIDataHanafuda::DelBfDirtyOyaDescisionMonth() {
}

void UMacanUIDataHanafuda::DelBfDirtyMonth() {
}

void UMacanUIDataHanafuda::DelBfDirtyMenu() {
}

void UMacanUIDataHanafuda::DelBfDirtyLineInfo02() {
}

void UMacanUIDataHanafuda::DelBfDirtyLineInfo01() {
}

void UMacanUIDataHanafuda::DelBfDirtyKiraKira() {
}

void UMacanUIDataHanafuda::DelBfDirtyHandCursor() {
}

void UMacanUIDataHanafuda::DelBfDirtyFirstMenu() {
}

void UMacanUIDataHanafuda::DelBfDirtyFieldCursor() {
}

void UMacanUIDataHanafuda::DelBfDirtyExplanation() {
}

void UMacanUIDataHanafuda::DelBfDirtyEnemyPoint() {
}

void UMacanUIDataHanafuda::DelBfDirtyEnemyName() {
}

void UMacanUIDataHanafuda::DelBfDirtyCurrentPlayer() {
}

void UMacanUIDataHanafuda::DelBfDirtyAifudaNum() {
}

void UMacanUIDataHanafuda::DecideSankaku() {
}

void UMacanUIDataHanafuda::DecideFirstMenu() {
}

void UMacanUIDataHanafuda::DecideCustomView() {
}

void UMacanUIDataHanafuda::DecideCustom() {
}

bool UMacanUIDataHanafuda::CloseYakuList() {
    return false;
}

bool UMacanUIDataHanafuda::CloseYakuDescription() {
    return false;
}

bool UMacanUIDataHanafuda::CloseSetting() {
    return false;
}

bool UMacanUIDataHanafuda::CloseSelectKoiKoi() {
    return false;
}

bool UMacanUIDataHanafuda::CloseRuleDescription() {
    return false;
}

bool UMacanUIDataHanafuda::CloseResult() {
    return false;
}

bool UMacanUIDataHanafuda::ClosePossessionPoint() {
    return false;
}

bool UMacanUIDataHanafuda::CloseOyaDescisionMonth() {
    return false;
}

bool UMacanUIDataHanafuda::CloseMenu() {
    return false;
}

bool UMacanUIDataHanafuda::CloseLineInfo02() {
    return false;
}

bool UMacanUIDataHanafuda::CloseLineInfo01() {
    return false;
}

bool UMacanUIDataHanafuda::CloseExplanation() {
    return false;
}


