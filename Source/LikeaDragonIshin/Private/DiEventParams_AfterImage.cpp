#include "DiEventParams_AfterImage.h"

FDiEventParams_AfterImage::FDiEventParams_AfterImage() {
    this->_cond = EAfterImageConditions::All;
    this->_afterImageType = EAfterImageTypes::Normal;
    this->_intervalSec = 0.00f;
    this->_lifeSec = 0.00f;
    this->_animSpeed = 0.00f;
    this->_fadeIn = 0.00f;
    this->_fadeOut = 0.00f;
    this->_blend = EAfterImageBlendModes::Opaque;
    this->_blurNum = 0;
    this->_blurDist = 0.00f;
    this->_maxColorA = 0.00f;
    this->_isCancel = false;
    this->_isNotHuman = false;
    this->_isNoScissor = false;
    this->_limitNum = 0;
}

