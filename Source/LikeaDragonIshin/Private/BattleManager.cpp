#include "BattleManager.h"

UBattleManager::UBattleManager() {
    this->m_FighterManager = NULL;
    this->m_BtlParamManager = NULL;
}

void UBattleManager::SetStartType(const EBtlStartType inStartType) {
}

void UBattleManager::SetPhase(const EBtlPhase InPhase) {
}

EBtlStartType UBattleManager::GetStartType() const {
    return EBtlStartType::None;
}

EBtlSpecialBattle UBattleManager::GetSpecialType() const {
    return EBtlSpecialBattle::None;
}

EBtlPhase UBattleManager::GetPhase() const {
    return EBtlPhase::None;
}

UBtlParamManager* UBattleManager::GetParamManager() const {
    return NULL;
}

UFighterManager* UBattleManager::GetFighterManager() const {
    return NULL;
}

EBtlStyle UBattleManager::GetBattleStyle() const {
    return EBtlStyle::Sude;
}


