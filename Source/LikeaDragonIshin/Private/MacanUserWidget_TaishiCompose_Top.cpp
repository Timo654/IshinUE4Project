#include "MacanUserWidget_TaishiCompose_Top.h"

UMacanUserWidget_TaishiCompose_Top::UMacanUserWidget_TaishiCompose_Top() {
    this->elem_back = NULL;
    this->card_place = NULL;
    this->effect_lvup = NULL;
    this->elem_pos_card = NULL;
    this->target_card = NULL;
    this->effect_front = NULL;
    this->elem_btn = NULL;
    this->WAIT_TIMER = 0;
    this->WAIT_DELAY = 0;
    this->LVUP_DELAY = 0;
    this->exp_gauge_speed = 0.01f;
}

bool UMacanUserWidget_TaishiCompose_Top::IsEnd() const {
    return false;
}


