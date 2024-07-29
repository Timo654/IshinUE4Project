#include "AnimNotifyState_Particle.h"

UAnimNotifyState_Particle::UAnimNotifyState_Particle() {
    this->_isOfsPosNodeLocal = false;
    this->_isOfsPosSync = false;
    this->_isOfsAngRiseSync = false;
    this->_isOfsAngPlaySync = false;
    this->_isOfsAngGlobalAxis = false;
    this->RotateRoot = false;
    this->Particle = NULL;
    this->ParentHuman = NULL;
}


