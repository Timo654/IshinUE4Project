#include "DiEventParams_SoundSE.h"

FDiEventParams_SoundSE::FDiEventParams_SoundSE() {
    this->sound_id = 0;
    this->not_affect_pan = false;
    this->not_affect_decay = false;
    this->use_custom_decay = false;
    this->near_dist = 0.00f;
    this->near_vol = 0.00f;
    this->far_dist = 0.00f;
    this->far_vol = 0.00f;
    this->use_offset_vol = false;
    this->offset_vol = 0;
}

