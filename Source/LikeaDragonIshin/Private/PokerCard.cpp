#include "PokerCard.h"

APokerCard::APokerCard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->cardType = ETrunpCardType::Club_10;
    this->cardSuit = ETrunpSuit::unknown;
    this->cardNumber = ETrunpNumber::card_10;
    this->m_dispStatus = EPokerCardDispStatus::Back;
    this->m_moveTime = 0.00f;
    this->m_offsetFlg = false;
    this->m_fMoveSpeed = 0.00f;
    this->m_fScaleSpeed = 0.00f;
    this->m_rotDegX = 0.00f;
    this->targetPosLerpValue = 0.00f;
    this->rotxLerpValue = 0.00f;
    this->rotzLerpValue = 0.00f;
    this->targetPosSpeed = 1.00f;
    this->rotxSpeed = 1.00f;
    this->rotzSpeed = 1.00f;
    this->isRotxDownOnly = false;
    this->isGrayOut = false;
}


void APokerCard::SetMoveAction(EPokerCardMoveAction MoveAction) {
}

bool APokerCard::Set(ETrunpCardType Type) {
    return false;
}


void APokerCard::ResetMoveStatus(const EPokerCardMoveStatus moveStatus) {
}


bool APokerCard::IsMoveStatus(const EPokerCardMoveStatus moveStatus) {
    return false;
}


