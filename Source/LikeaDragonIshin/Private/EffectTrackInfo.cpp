#include "EffectTrackInfo.h"

FEffectTrackInfo::FEffectTrackInfo() {
    this->default_id = 0;
    this->scale0 = 0.00f;
    this->scale1 = 0.00f;
    this->tex_anim_u = 0.00f;
    this->tex_anim_v = 0.00f;
    this->alpha_dec = 0;
    this->refraction_scale = 0.00f;
    this->tex_no = 0;
    this->tip_tex_no = 0;
    this->ref_tex_no = 0;
    this->is_throw = false;
    this->is_multi = false;
    this->is_tip = false;
    this->is_add = false;
    this->is_refraction = false;
    this->is_transfar_off = false;
    this->is_overwrite_off = false;
    this->is_all_uv_anim = false;
    this->is_glare = false;
    this->Priority = 0;
    this->glare_scale = 0.00f;
    this->utiming = 0;
    this->vtiming = 0;
}

