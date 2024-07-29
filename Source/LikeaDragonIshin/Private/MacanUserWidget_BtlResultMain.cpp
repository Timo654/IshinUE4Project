#include "MacanUserWidget_BtlResultMain.h"

UMacanUserWidget_BtlResultMain::UMacanUserWidget_BtlResultMain() {
    this->bg_elem = NULL;
    this->rank_effect_B = NULL;
    this->rank_elem = NULL;
    this->reward_text = NULL;
    this->rank_leage0 = NULL;
    this->rank_leage1 = NULL;
    this->rankup_effect = NULL;
    this->exp_elem = NULL;
    this->exp_money_elem = NULL;
    this->rank_effect_T = NULL;
    this->card_slot = NULL;
    this->taishi_detail_screen = NULL;
    this->elem_btn = NULL;
    this->ScrollSpeed = 0.01f;
}

void UMacanUserWidget_BtlResultMain::showBtnGuide() {
}

void UMacanUserWidget_BtlResultMain::scrollTaishi(int32 Delta) {
}

void UMacanUserWidget_BtlResultMain::Play(const FBtlResultData& result_data) {
}

void UMacanUserWidget_BtlResultMain::openTaishiDetail() {
}

void UMacanUserWidget_BtlResultMain::Next() {
}

bool UMacanUserWidget_BtlResultMain::isShowBtnGuide() const {
    return false;
}

bool UMacanUserWidget_BtlResultMain::IsEnd() const {
    return false;
}

bool UMacanUserWidget_BtlResultMain::IsDispTaishiDetail() const {
    return false;
}

bool UMacanUserWidget_BtlResultMain::isDestable() const {
    return false;
}

bool UMacanUserWidget_BtlResultMain::IsAbleOpenTaishiDetail() const {
    return false;
}

void UMacanUserWidget_BtlResultMain::hideBtnGuide() {
}


