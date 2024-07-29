#include "GameManager.h"
#include "Templates/SubclassOf.h"

UGameManager::UGameManager() {
    this->m_rootActionObject = NULL;
}

bool UGameManager::IsThereActionObject(eMACAN_ACT_OBJ_ID actionID, UActionObjectBase* Parent) {
    return false;
}

UActionObjectBase* UGameManager::InsertActionObject(eMACAN_ACT_OBJ_ID actionID, UActionObjectBase* Parent) {
    return NULL;
}

void UGameManager::GetActionObjectTypeCast(eMACAN_ACT_OBJ_ID actionID, UActionObjectBase* Parent, TSubclassOf<UActionObjectBase> ActionClass, UActionObjectBase*& outAction) {
}

UActionObjectBase* UGameManager::GetActionBaseObject(eMACAN_ACT_OBJ_ID actionID, UActionObjectBase* Parent) {
    return NULL;
}


