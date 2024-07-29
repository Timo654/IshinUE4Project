#include "DiEventParams_Blur.h"

FDiEventParams_Blur::FDiEventParams_Blur() {
    this->blur_type = EBlurTypes::MultipleExposureNormal;
    this->Scale = 0.00f;
    this->is_auto_camera = false;
    this->is_use_pos = false;
    this->is_z_mask_use = false;
    this->z_mask_start = 0.00f;
    this->z_mask_linear_dir = 0.00f;
}

