#include "OichokabuEnemyBase.h"

AOichokabuEnemyBase::AOichokabuEnemyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FirstSelectWaitTime = 0.00f;
}

void AOichokabuEnemyBase::UpdateWaitTime(float DeltaTime) {
}

void AOichokabuEnemyBase::FirstCardChoiceThink() {
}


