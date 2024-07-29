#include "DiEventParams_HumanFlashPack.h"

FDiEventParams_HumanFlashPack::FDiEventParams_HumanFlashPack() {
    this->_humanFlashType = EHumanFlashTypes::Normal;
    this->_cond = EHumanFlashConds::Always;
    this->_nodeFile = 0;
    this->_fadeIn = 0.00f;
    this->_fadeOut = 0.00f;
}

