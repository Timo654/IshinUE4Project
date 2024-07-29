#include "TintiroManager.h"

ATintiroManager::ATintiroManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pListener = NULL;
    this->mc_Dice = NULL;
    this->m_pDiceEntity[0] = NULL;
    this->m_pDiceEntity[1] = NULL;
    this->m_pDiceEntity[2] = NULL;
    this->mp_Kiryu = NULL;
    this->mp_Enemy[0] = NULL;
    this->mp_Enemy[1] = NULL;
    this->mp_Enemy[2] = NULL;
    this->mc_Message = NULL;
    this->mc_Sound = NULL;
    this->mp_Parent = NULL;
    this->mp_Child[0] = NULL;
    this->mp_Child[1] = NULL;
    this->mp_Child[2] = NULL;
    this->UIData = NULL;
    this->pUIManager = NULL;
}

void ATintiroManager::SetUiData(UMacanUIDataTintiro* Data) {
}

void ATintiroManager::Init() {
}

void ATintiroManager::ExecAfterCamera() {
}

void ATintiroManager::Draw2D() {
}

void ATintiroManager::Draw() {
}


