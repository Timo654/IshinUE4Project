#include "MacanUserWidget_TaishiRecruit_Top.h"

UMacanUserWidget_TaishiRecruit_Top::UMacanUserWidget_TaishiRecruit_Top() {
    this->effect_Back = NULL;
    this->card_place = NULL;
    this->effect_front = NULL;
    this->effect_bg = NULL;
    this->elem_success = NULL;
    this->elem_btn = NULL;
    this->WAIT_SUCCESS_TIMER = 0;
}

void UMacanUserWidget_TaishiRecruit_Top::on(int32 _Lv, const FTaishiCardDataDetail& taishi_detail) {
}

bool UMacanUserWidget_TaishiRecruit_Top::IsEnd() const {
    return false;
}


