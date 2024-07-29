#include "InputStateIK.h"

FInputState::FInputState() {
    this->CardActive = false;
    this->isSkillMode = false;
    this->isAvailableSpecial = false;
    this->isStyleChange = false;
    this->nowStyle = EBtlStyle::Sude;
}

