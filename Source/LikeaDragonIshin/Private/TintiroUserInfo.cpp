#include "TintiroUserInfo.h"

FTintiroUserInfo::FTintiroUserInfo() {
    this->IsUpdateData = false;
    this->possessionPoint = 0;
    this->betPoint = 0;
    this->WindowBackState = EUIState::NotSet;
    this->iconType = EUITintiroUserIconType::None;
    this->IsModifiedIcon = false;
    this->MeIconType = EUITintiroMeIconType::None;
    this->demeKind = EUIDemeType::eTINTIRO_DEME_NONE;
    this->DemeIconState = EUIState::NotSet;
    this->ShowThreeIconState = EUIState::NotSet;
}

