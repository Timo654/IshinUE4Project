#include "ActionObjectBase.h"

UActionObjectBase::UActionObjectBase() {
    this->m_actionID = eMACAN_ACT_OBJ_ID::eACT_ID_ILLEGAL;
    this->m_parent = NULL;
    this->pairAction = NULL;
}

void UActionObjectBase::Update(float DeltaTime) {
}

bool UActionObjectBase::RequestDeleteAction() {
    return false;
}

bool UActionObjectBase::IsContainsAction(eMACAN_ACT_OBJ_ID actionID) const {
    return false;
}

void UActionObjectBase::InsertAction(eMACAN_ACT_OBJ_ID actionID, UActionObjectBase* Action) {
}

UActionObjectBase* UActionObjectBase::GetActionRecursive(eMACAN_ACT_OBJ_ID actionID) const {
    return NULL;
}

eMACAN_ACT_OBJ_ID UActionObjectBase::GetActionID() const {
    return eMACAN_ACT_OBJ_ID::ROOT;
}

UActionObjectBase* UActionObjectBase::GetAction(eMACAN_ACT_OBJ_ID actionID) const {
    return NULL;
}

void UActionObjectBase::EndUpdate() {
}

bool UActionObjectBase::DeleteActionImmediate() {
    return false;
}

void UActionObjectBase::BeginUpdate() {
}


