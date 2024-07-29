#include "FighterManager.h"

UFighterManager::UFighterManager() {
}

FFighterID UFighterManager::RequestFighterForBP(const FFighterData& in_args) {
    return FFighterID{};
}

bool UFighterManager::NoAliveEnemyCheck() {
    return false;
}

AFighter* UFighterManager::GetActorPlayer() const {
    return NULL;
}

void UFighterManager::DeleteFighter(FFighterID in_id) {
}

FFighterID UFighterManager::DebugRequestFighter(EBtlCtrlType in_id) {
    return FFighterID{};
}


