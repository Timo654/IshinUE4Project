#include "ParticleEditorSetting.h"

UParticleEditorSetting::UParticleEditorSetting() {
    this->LoadCommonFile = false;
    this->VisibleArrowInEditor = false;
    this->VisibleArrowInGame = false;
    this->VisibleIDInGame = false;
    this->VisibleInfoInGame = false;
    this->VisibleIDInGameOnlyRendered = false;
    this->VisibleBounds = false;
    this->ForceBranchCollision = false;
    this->ForceBranchCollisionMaterial = ESurfaceType::Default;
    this->ForceBranchWeaponPowerUp = false;
    this->ForceBranchGuard = false;
    this->ForceBranchGuardNo = 0;
    this->ForceBranchGuardBreak = false;
    this->ForceBranchGuardBreakNo = 0;
    this->ForceBranchHitPlayer = false;
    this->ForceBranchHitEnemy = false;
    this->ForceBranchRate = false;
    this->ForceBranchRateNo = 0;
    this->VisibleElementGuid = false;
    this->DisableElement = false;
    this->DisableElementID = false;
    this->OnlyElementID = false;
    this->OutputElementLog = false;
    this->ChangeSeparateTranslucencyScreenPercentage = false;
    this->SeparateTranslucencyScreenPercentage = 100;
    this->ParticleInvalidCompile = false;
}


