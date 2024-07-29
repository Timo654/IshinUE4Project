#include "MacanUIData_MainMenu_Letter.h"

UMacanUIData_MainMenu_Letter::UMacanUIData_MainMenu_Letter() {
    this->state_Base = EUIState::NotSet;
    this->state_Folder = EUIState::NotSet;
    this->state_Mail = EUIState::NotSet;
    this->state_Contents = EUIState::NotSet;
    this->state_Overlay = EUIState::NotSet;
    this->m_picture_index = 0;
    this->m_folder_cursor_num = 0;
    this->m_mail_cursor_num = -1;
    this->m_folder_arrow_up_visible = false;
    this->m_folder_arrow_bottom_visible = false;
    this->m_mail_arrow_up_visible = false;
    this->m_mail_arrow_bottom_visible = false;
    this->m_contents_arrow_left_visible = false;
    this->m_contents_arrow_right_visible = false;
    this->scrollRate = 0.00f;
    this->maxScrollOffset = 0.00f;
    this->m_overlay_arrow_top = false;
    this->m_overlay_arrow_bottom = false;
    this->m_is_enableScroll_MailList = true;
}

bool UMacanUIData_MainMenu_Letter::NativeBfIsTemplate(EUIResultOnOrOff& result, int32& bf, int32 Flags) {
    return false;
}

bool UMacanUIData_MainMenu_Letter::IsDirty_Overlay(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Letter::IsDirty_Mail(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Letter::IsDirty_Folder(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Letter::IsDirty_Contents(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Letter::IsDirty_Base(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Letter::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIData_MainMenu_Letter::DelDirty_Overlay() {
}

void UMacanUIData_MainMenu_Letter::DelDirty_Mail() {
}

void UMacanUIData_MainMenu_Letter::DelDirty_Folder() {
}

void UMacanUIData_MainMenu_Letter::DelDirty_Contents() {
}

void UMacanUIData_MainMenu_Letter::DelDirty_Base() {
}


