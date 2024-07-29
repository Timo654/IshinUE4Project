#include "MacanUserWidget_TaishiDetail_DetailFull.h"

UMacanUserWidget_TaishiDetail_DetailFull::UMacanUserWidget_TaishiDetail_DetailFull() {
    this->text_Lv = NULL;
    this->text_LvMax = NULL;
    this->elem_ExpGauge = NULL;
    this->text_HP = NULL;
    this->text_Charge = NULL;
    this->text_Skill = NULL;
    this->text_Skill_detail = NULL;
    this->text_Skill_Reinforce = NULL;
    this->elem_SkillStar = NULL;
    this->text_LeaderSkill = NULL;
    this->text_LeaderSkill_detail = NULL;
    this->text_LeaderSkill_Reinforce = NULL;
    this->elem_LeaderSkillStar = NULL;
    this->elem_rarity = NULL;
    this->elem_awake = NULL;
    this->elem_card = NULL;
    this->elem_comment = NULL;
    this->elem_Delta_Lv = NULL;
    this->elem_Delta_Hp = NULL;
    this->elem_Delta_Charge = NULL;
    this->elem_Delta_Skill = NULL;
    this->elem_Delta_LeaderSkill = NULL;
    this->elem_chuseishin = NULL;
}

void UMacanUserWidget_TaishiDetail_DetailFull::SetState(const FTaishiCardState& State) {
}

void UMacanUserWidget_TaishiDetail_DetailFull::SetData(const FTaishiCardDataDetail& Data, bool forceAvailable) {
}

void UMacanUserWidget_TaishiDetail_DetailFull::overwriteComment(const FText& Comment) {
}

void UMacanUserWidget_TaishiDetail_DetailFull::on() {
}

void UMacanUserWidget_TaishiDetail_DetailFull::off() {
}


