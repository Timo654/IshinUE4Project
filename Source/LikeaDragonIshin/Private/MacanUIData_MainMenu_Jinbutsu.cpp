#include "MacanUIData_MainMenu_Jinbutsu.h"

UMacanUIData_MainMenu_Jinbutsu::UMacanUIData_MainMenu_Jinbutsu() {
    this->state_Base = EUIState::NotSet;
    this->state_Win = EUIState::NotSet;
    this->is_finish_fade_in_base = false;
    this->is_finish_fade_out_base = false;
    this->m_jinbutsu_index = 0;
    this->mode = 0;
    this->selectCharacter = ECorrelationCharacter::None;
    this->selectOrganization = ECorrelationOrganization::None;
    this->currentDiagramWidget = NULL;
    this->isSelectingAny = false;
    this->m_pCorrelationTable = NULL;
    this->m_pCorrelationGroupTable = NULL;
    this->m_pCorrelationArrowTable = NULL;
}

void UMacanUIData_MainMenu_Jinbutsu::SetExplanationText(const FText& InText) {
}

bool UMacanUIData_MainMenu_Jinbutsu::IsDirty_Win(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Jinbutsu::IsDirty_ModeChange(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Jinbutsu::IsDirty_Cursor(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Jinbutsu::IsDirty_Base(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIData_MainMenu_Jinbutsu::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

FString UMacanUIData_MainMenu_Jinbutsu::GetPersonRowNameText() {
    return TEXT("");
}

FString UMacanUIData_MainMenu_Jinbutsu::GetGroupRowNameText() {
    return TEXT("");
}

void UMacanUIData_MainMenu_Jinbutsu::DelDirty_Win() {
}

void UMacanUIData_MainMenu_Jinbutsu::DelDirty_ModeChange() {
}

void UMacanUIData_MainMenu_Jinbutsu::DelDirty_Cursor() {
}

void UMacanUIData_MainMenu_Jinbutsu::DelDirty_Base() {
}


