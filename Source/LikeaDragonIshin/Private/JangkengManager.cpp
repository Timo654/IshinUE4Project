#include "JangkengManager.h"

AJangkengManager::AJangkengManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_is_end = false;
    this->m_player = NULL;
    this->m_companion = NULL;
}

void AJangkengManager::SetScenarioResult(bool is_win) {
}

void AJangkengManager::SetPlayerHuman(ADevil2Human* Player) {
}

void AJangkengManager::SetIsActive(bool Active) {
}

void AJangkengManager::SetCompanionHuman(ADevil2Human* companion) {
}

bool AJangkengManager::ReturnSequence(bool win) {
    return false;
}

void AJangkengManager::PlayDecideEff() {
}

FVector AJangkengManager::GetPlayerKataLPos() {
    return FVector{};
}

FVector AJangkengManager::GetCompanionKubiPos() {
    return FVector{};
}


bool AJangkengManager::CheckDipWinForce() {
    return false;
}


