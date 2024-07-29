#include "ActionSpawner.h"

AActionSpawner::AActionSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_actionID = eMACAN_ACT_ID::eACT_ID_ILLEGAL;
    this->m_parent = NULL;
}


