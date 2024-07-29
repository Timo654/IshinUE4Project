#include "DiEventParams_ColorCorrection.h"

FDiEventParams_ColorCorrection::FDiEventParams_ColorCorrection() {
    this->luminance = 0.00f;
    this->Saturation = 0.00f;
    this->Contrast = 0.00f;
    this->_use_normal = false;
    this->_use_shadows = false;
    this->_use_midtones = false;
    this->_use_highlights = false;
    this->_use_preset = false;
    this->preset_id = 0;
}

