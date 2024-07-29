#include "MacanUserWidget_TaishiMenuSortie.h"

UMacanUserWidget_TaishiMenuSortie::UMacanUserWidget_TaishiMenuSortie() {
    this->elem_title = NULL;
    this->elem_base = NULL;
    this->elem_infotext = NULL;
    this->location_list = NULL;
    this->location_info = NULL;
    this->mission_listview = NULL;
    this->mission_info = NULL;
    this->mission_item_info = NULL;
    this->elem_btn = NULL;
}

void UMacanUserWidget_TaishiMenuSortie::regist_mission(int32 Location, int32 mission, const FText& Name, float difficulty, bool isNew, bool isCleared, const TArray<FText>& _item_list, int32 reward_money, bool is_open) {
}

void UMacanUserWidget_TaishiMenuSortie::on() {
}

void UMacanUserWidget_TaishiMenuSortie::off() {
}

bool UMacanUserWidget_TaishiMenuSortie::isFocus() const {
    return false;
}

void UMacanUserWidget_TaishiMenuSortie::getSelection(int32& Location, int32& mission) {
}


