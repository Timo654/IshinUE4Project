#include "MacanUserWidget_BtlLauncherSkill.h"

UMacanUserWidget_BtlLauncherSkill::UMacanUserWidget_BtlLauncherSkill() {
    this->anim_in = NULL;
    this->anim_out = NULL;
    this->anim_play = NULL;
    this->arts_name = NULL;
    this->arts_image = NULL;
    this->playing_anim = NULL;
}

void UMacanUserWidget_BtlLauncherSkill::Stop() {
}

bool UMacanUserWidget_BtlLauncherSkill::IsPlaying() {
    return false;
}

void UMacanUserWidget_BtlLauncherSkill::Exec(ETaishiType Type, const FText& Name, UTexture2D* tex, float Length) {
}


