#include "MacanUserWidget_TaishiDungeonResult_Main.h"

UMacanUserWidget_TaishiDungeonResult_Main::UMacanUserWidget_TaishiDungeonResult_Main() {
    this->elem_end_btn = NULL;
    this->elem_missionName = NULL;
    this->elem_difficulty = NULL;
    this->stamp_switcher = NULL;
    this->stamp_clear = NULL;
    this->stamp_failed = NULL;
    this->elem_RewardMoney = NULL;
    this->elem_tab_title = NULL;
    this->item_list_box = NULL;
    this->item_list = NULL;
    this->escape_info = NULL;
    this->wbp_list_item_class = NULL;
    this->ScrollSpeed = 0.10f;
}


bool UMacanUserWidget_TaishiDungeonResult_Main::setSelectRecycleWeapon(bool is_select) {
    return false;
}

void UMacanUserWidget_TaishiDungeonResult_Main::Play(const FDungeonResultData& Data) {
}

void UMacanUserWidget_TaishiDungeonResult_Main::Next() {
}

bool UMacanUserWidget_TaishiDungeonResult_Main::isSelectRecycleWeapon() const {
    return false;
}

bool UMacanUserWidget_TaishiDungeonResult_Main::isNextable() const {
    return false;
}

bool UMacanUserWidget_TaishiDungeonResult_Main::IsEnd() const {
    return false;
}


