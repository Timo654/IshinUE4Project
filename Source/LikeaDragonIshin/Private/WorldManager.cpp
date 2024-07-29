#include "WorldManager.h"
#include "Templates/SubclassOf.h"

UWorldManager::UWorldManager() {
    this->m_rootAction = NULL;
}

void UWorldManager::OnWorldBeginPlay() {
}

void UWorldManager::OnLevelLoaded() {
}

bool UWorldManager::IsThereAction(eMACAN_ACT_ID actionID, AActionBase* Parent) {
    return false;
}

AActionBase* UWorldManager::InsertAction(eMACAN_ACT_ID actionID, AActionBase* Parent) {
    return NULL;
}

void UWorldManager::GetActionTypeCast(eMACAN_ACT_ID actionID, AActionBase* Parent, TSubclassOf<AActionBase> ActionClass, AActionBase*& outAction) {
}

AActionBase* UWorldManager::GetActionBase(eMACAN_ACT_ID actionID, AActionBase* Parent) {
    return NULL;
}


