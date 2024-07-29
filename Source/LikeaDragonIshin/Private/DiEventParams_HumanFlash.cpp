#include "DiEventParams_HumanFlash.h"

FDiEventParams_HumanFlash::FDiEventParams_HumanFlash() {
    this->_humanFlashType = EHumanFlashTypes::Normal;
    this->_cond = EHumanFlashConds::Always;
    this->_nodeFile = 0;
    this->_fadeIn = 0.00f;
    this->_fadeOut = 0.00f;
    this->_colorHide = false;
    this->Loop = false;
}

