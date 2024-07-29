#include "DiEventParams_ScreenMask.h"

FDiEventParams_ScreenMask::FDiEventParams_ScreenMask() {
    this->is_enable = false;
    this->Type = EPostEffectMaskType::invalid;
    this->is_node = false;
    this->trans_x = 0.00f;
    this->trans_y = 0.00f;
    this->rotate = 0.00f;
    this->Scale = 0.00f;
    this->alpha_scale = 0.00f;
}

