#include "MacanUIData_MainMenu_Activity.h"

UMacanUIData_MainMenu_Activity::UMacanUIData_MainMenu_Activity() {
    this->state_Main = EUIState::NotSet;
    this->state_Arrow = EUIState::NotSet;
    this->state_Arrow_Category = EUIState::NotSet;
    this->state_BG = EUIState::NotSet;
    this->state_F_Gauge = EUIState::NotSet;
    this->state_ItemName = EUIState::NotSet;
    this->state_List = EUIState::NotSet;
    this->state_List_Bg = EUIState::NotSet;
    this->state_List_Entry = EUIState::NotSet;
    this->state_Tab = EUIState::NotSet;
    this->state_Top = EUIState::NotSet;
    this->state_Top_ListItem = EUIState::NotSet;
    this->state_Text_Window = EUIState::NotSet;
    this->is_finish_fade_in = false;
    this->is_finish_fade_out = false;
    this->m_cursor_item = 0;
    this->m_tab_item = 0;
    this->m_arrow_category_l = 0;
    this->m_arrow_category_r = 0;
    this->m_arrow_top_visible = false;
    this->m_arrow_bottom_visible = false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty_Top_ListItem(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty_Top(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty_TextWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty_Tab(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty_Main(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty_List_Entry(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty_List_Bg(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty_List(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty_ItemName(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty_F_Gauge(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty_Cursor(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty_BG(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty_Arrow_Category(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty_Arrow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Activity::getNeedSpace_before_and_after_colon() {
    return false;
}

bool UMacanUIData_MainMenu_Activity::getNeedSpace_after_colon() {
    return false;
}

FActivity_List UMacanUIData_MainMenu_Activity::get_cursor_activity() {
    return FActivity_List{};
}

void UMacanUIData_MainMenu_Activity::DelDirty_Top_ListItem() {
}

void UMacanUIData_MainMenu_Activity::DelDirty_Top() {
}

void UMacanUIData_MainMenu_Activity::DelDirty_TextWindow() {
}

void UMacanUIData_MainMenu_Activity::DelDirty_Tab() {
}

void UMacanUIData_MainMenu_Activity::DelDirty_Main() {
}

void UMacanUIData_MainMenu_Activity::DelDirty_List_Entry() {
}

void UMacanUIData_MainMenu_Activity::DelDirty_List_Bg() {
}

void UMacanUIData_MainMenu_Activity::DelDirty_List() {
}

void UMacanUIData_MainMenu_Activity::DelDirty_ItemName() {
}

void UMacanUIData_MainMenu_Activity::DelDirty_F_Gauge() {
}

void UMacanUIData_MainMenu_Activity::DelDirty_Cursor() {
}

void UMacanUIData_MainMenu_Activity::DelDirty_BG() {
}

void UMacanUIData_MainMenu_Activity::DelDirty_Arrow_Category() {
}

void UMacanUIData_MainMenu_Activity::DelDirty_Arrow() {
}


