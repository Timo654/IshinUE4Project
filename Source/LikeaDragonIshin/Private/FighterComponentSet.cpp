#include "FighterComponentSet.h"

UFighterComponentSet::UFighterComponentSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_BattleSoundComponent = NULL;
    this->m_pSyncCollision = NULL;
    this->m_TargetDecide = NULL;
    this->m_Controller = NULL;
    this->m_OwnerHuman = NULL;
}


