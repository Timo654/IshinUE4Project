#include "ActionBase.h"
#include "Components/SceneComponent.h"

AActionBase::AActionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_actionID = eMACAN_ACT_ID::eACT_ID_ILLEGAL;
    this->m_parent = NULL;
    this->m_pairObjID = eMACAN_ACT_OBJ_ID::eACT_ID_ILLEGAL;
}

bool AActionBase::RequestDeleteAction() {
    return false;
}

bool AActionBase::IsContainsAction(eMACAN_ACT_ID actionID) const {
    return false;
}

void AActionBase::InsertAction(eMACAN_ACT_ID actionID, AActionBase* Action) {
}

AActionBase* AActionBase::GetActionRecursive(eMACAN_ACT_ID actionID) const {
    return NULL;
}

eMACAN_ACT_ID AActionBase::GetActionID() const {
    return eMACAN_ACT_ID::ROOT;
}

AActionBase* AActionBase::GetAction(eMACAN_ACT_ID actionID) const {
    return NULL;
}

bool AActionBase::DeleteActionImmediate() {
    return false;
}


