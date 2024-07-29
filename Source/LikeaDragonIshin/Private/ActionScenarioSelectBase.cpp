#include "ActionScenarioSelectBase.h"

AActionScenarioSelectBase::AActionScenarioSelectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Parent = NULL;
}

void AActionScenarioSelectBase::PushDecide() {
}

void AActionScenarioSelectBase::PushCancel() {
}

void AActionScenarioSelectBase::ProfileClear() {
}

void AActionScenarioSelectBase::GotoMission() {
}

void AActionScenarioSelectBase::CursorMove(int32 dir) {
}

void AActionScenarioSelectBase::CategoryChange() {
}


