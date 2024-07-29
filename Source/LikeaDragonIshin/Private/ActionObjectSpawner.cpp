#include "ActionObjectSpawner.h"

AActionObjectSpawner::AActionObjectSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_actionID = eMACAN_ACT_OBJ_ID::eACT_ID_ILLEGAL;
    this->m_parent = NULL;
}


