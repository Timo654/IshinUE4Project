#include "DiEventParams_Ptc.h"

FDiEventParams_Ptc::FDiEventParams_Ptc() {
    this->_isOfsPosNodeLocal = false;
    this->_isOfsPosSync = false;
    this->_isOfsAngRiseSync = false;
    this->_isOfsAngPlaySync = false;
    this->_isOfsAngGlobalAxis = false;
    this->_isNearFade = false;
    this->_nearFadeStart = 0.00f;
    this->_nearFadeEnd = 0.00f;
    this->_isSort = false;
    this->_sortType = ESortTypes::Unable;
    this->_isPostEffect = false;
    this->_postEffectType = EPostEffectTypes::Enable;
    this->_isCamera = false;
    this->_isCameraNode = false;
    this->_cameraDistance = 0.00f;
    this->_isForceY = false;
    this->_forceYType = EForceYTypes::Absolute;
    this->_forceYOffset = 0.00f;
    this->Loop = false;
    this->EndToNormalPlay = false;
    this->_isOptionOnlyEntry = false;
    this->_isOptionNoChkVisible = false;
    this->DispAllow = false;
    this->SortPriority = 0;
}

