#include "DiEventParams_TrackHuman.h"

FDiEventParams_TrackHuman::FDiEventParams_TrackHuman() {
    this->_scale0 = 0.00f;
    this->_scale1 = 0.00f;
    this->_timingU = 0;
    this->_timingV = 0;
    this->_velU = 0.00f;
    this->_velV = 0.00f;
    this->_decA = 0;
    this->_glareScale = 0.00f;
    this->_refractionScale = 0.00f;
    this->_texID = 0;
    this->_refractionTexID = 0;
    this->_tipTexID = 0;
    this->_supportRot = false;
    this->_supportTip = false;
    this->_supportEColi = false;
    this->_supportAdd = false;
    this->_supportGlare = false;
    this->_supportRef = false;
    this->_supportEnemy = false;
    this->_supportCalc2 = false;
    this->_supportTransferOff = false;
    this->_supportOverwriteOff = false;
    this->_version = 0;
    this->_isHandLeft = false;
}

