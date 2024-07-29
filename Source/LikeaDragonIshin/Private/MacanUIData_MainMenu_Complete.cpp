#include "MacanUIData_MainMenu_Complete.h"

UMacanUIData_MainMenu_Complete::UMacanUIData_MainMenu_Complete() {
    this->state_Main = EUIState::NotSet;
    this->state_Arrow_Category = EUIState::NotSet;
    this->state_Complete_BG = EUIState::NotSet;
    this->state_Complete_Category_List = EUIState::NotSet;
    this->state_Complete_List = EUIState::NotSet;
    this->state_Complete_List_00 = EUIState::NotSet;
    this->state_Complete_List_01 = EUIState::NotSet;
    this->state_Complete_List_BG = EUIState::NotSet;
    this->state_Complete_Arrow_00 = EUIState::NotSet;
    this->state_Complete_Arrow_01 = EUIState::NotSet;
    this->state_Info_TextWindow = EUIState::NotSet;
    this->state_Complete_Fishing_Window = EUIState::NotSet;
    this->state_SubStory_Map = EUIState::NotSet;
    this->state_big_category_icon = EUIState::NotSet;
    this->state_category_icon = EUIState::NotSet;
    this->is_finish_fade_in = false;
    this->is_finish_fade_out = false;
    this->is_finish_fade_in_category_ = false;
    this->is_finish_fade_out_category_ = false;
    this->is_SubStory = false;
    this->m_push_l = false;
    this->m_push_r = false;
    this->m_list00_clear_num = 0;
    this->m_list00_total_num = 0;
    this->m_cursor_num = 0;
    this->m_cursor_list00_01_num = 0;
    this->m_list01_category_clear_num = 0;
    this->m_list01_category_total_num = 0;
    this->m_category_num = 0;
    this->m_big_category_num = 0;
    this->m_arrow_top = false;
    this->m_arrow_bottom = false;
    this->m_category_clear = false;
    this->m_big_category_clear = false;
    this->m_fishing_init = false;
    this->m_visible_ratio = true;
    this->m_mouse_wheel = 0;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_SubStory_Map(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Mouse_Wheel(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Info_TextWindow_textChange(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Info_TextWindow(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Complete_List_Cursor(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Complete_List_BG(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Complete_List_01(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Complete_List_00(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Complete_List(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Complete_Fishing_Window(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Complete_Category_List(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Complete_BG(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Complete_Arrow_01(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Complete_Arrow_00(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Arrow_Category(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Add_List_Item_Category(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty_Add_List_Item(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Complete::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

FComplete_List UMacanUIData_MainMenu_Complete::getListItem_list01(int32 Index) {
    return FComplete_List{};
}

FComplete_List UMacanUIData_MainMenu_Complete::getListItem(int32 Index) {
    return FComplete_List{};
}

FComplete_List UMacanUIData_MainMenu_Complete::getCurrentCursorList_list01() {
    return FComplete_List{};
}

FComplete_List UMacanUIData_MainMenu_Complete::getCurrentCursorList() {
    return FComplete_List{};
}

void UMacanUIData_MainMenu_Complete::DelDirty_SubStory_Map() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Mouse_Wheel() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Info_TextWindow_textChange() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Info_TextWindow() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Complete_List_Cursor() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Complete_List_BG() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Complete_List_01() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Complete_List_00() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Complete_List() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Complete_Fishing_Window() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Complete_Category_List() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Complete_BG() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Complete_Arrow_01() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Complete_Arrow_00() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Arrow_Category() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Add_List_Item_Category() {
}

void UMacanUIData_MainMenu_Complete::DelDirty_Add_List_Item() {
}


