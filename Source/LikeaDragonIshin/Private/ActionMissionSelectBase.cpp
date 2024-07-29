#include "ActionMissionSelectBase.h"

AActionMissionSelectBase::AActionMissionSelectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Parent = NULL;
}

void AActionMissionSelectBase::PageChange(float wheel) {
}

void AActionMissionSelectBase::GotoScenario() {
}

void AActionMissionSelectBase::CursorMove(int32 dir) {
}

void AActionMissionSelectBase::ChangeSeq() {
}

void AActionMissionSelectBase::CategoryChange(float wheel) {
}


