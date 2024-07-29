#include "MacanUserWidget_MngTaihou.h"

UMacanUserWidget_MngTaihou::UMacanUserWidget_MngTaihou() {
    this->m_gauge = 0.00f;
    this->m_shot_num = 0;
    this->m_wait_time = 0.00f;
    this->m_score = 0;
    this->m_best_score = 0;
    this->m_is_best_upda = 0;
    this->m_rank = 0;
    this->m_sight_ratio = 1.00f;
    this->m_switch_time = 0.00f;
    this->m_switch_comp_time = 0.00f;
    this->m_gauge_gold = 0.00f;
    this->m_gauge_silver = 0.00f;
    this->m_just_num = 0;
    this->m_chip_num = 0;
    this->m_total_num = 0;
    this->m_is_slash = false;
    this->m_gauge_current = 0.00f;
    this->m_rank_change = 0;
    this->m_now_rank = 0;
    this->m_curse_idx = 0;
    this->m_start_caption_state = 0;
}









void UMacanUserWidget_MngTaihou::MacanUpdateComponent() {
}







