#include "AnimNotifyState_DiEventElement.h"

UAnimNotifyState_DiEventElement::UAnimNotifyState_DiEventElement() {
    this->RotateType = 0;
    this->Ground = false;
    this->DisableScale = false;
    this->EnableOverwriteTotalTime = false;
    this->OverwriteTotalTime = 0.00f;
    this->DisableEndDelete = false;
    this->m_CurrentActor = NULL;
}


