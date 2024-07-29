#include "FighterCommandInfo_ModeSync.h"

FFighterCommandInfo_ModeSync::FFighterCommandInfo_ModeSync() {
    this->SelfRole = EFSyncRole::Require;
    this->SelfPos = EFSyncPosBase::OWN;
    this->SelfRot = EFSyncRotBase::OWN;
    this->IsReviseSelf = false;
    this->TargetRole = EFSyncRole::Require;
    this->TargetPos = EFSyncPosBase::OWN;
    this->TargetRot = EFSyncRotBase::OWN;
    this->IsReviseTarget = false;
    this->IsPoseBlend = false;
}

