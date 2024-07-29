#include "MacanUIDataBattleCaption.h"

UMacanUIDataBattleCaption::UMacanUIDataBattleCaption() {
    this->blur_start_frame = 0.00f;
    this->blur_end_frame = 0.00f;
    this->Scene = eUI_OC_CAP::eUI_OC_INVALID;
    this->isUseFromTransform = false;
    this->effectActor = NULL;
    this->isUIUpdate.AddDefaulted(3);
    this->postProcessVol = NULL;
}

void UMacanUIDataBattleCaption::UseFromTransform(FTransform trans) {
}

void UMacanUIDataBattleCaption::UnUseFromTransform() {
}

void UMacanUIDataBattleCaption::StopCaption() {
}

UNiagaraComponent* UMacanUIDataBattleCaption::SpawnEffectEncount(FVector posOffset, FVector Scale, float ZOffset) {
    return NULL;
}

UNiagaraComponent* UMacanUIDataBattleCaption::SpawnEffectBoss(FVector posOffset, FVector Scale, float ZOffset) {
    return NULL;
}

void UMacanUIDataBattleCaption::SetPlayFlag(bool flag) {
}

void UMacanUIDataBattleCaption::SetPlayEffectFlag(bool flag) {
}

void UMacanUIDataBattleCaption::PlayCaption() {
}

void UMacanUIDataBattleCaption::LoadEffectEncount() {
}

void UMacanUIDataBattleCaption::LoadEffectBoss() {
}

void UMacanUIDataBattleCaption::LoadCaption(const FString& in_layout, const FString& in_name, const FString& in_caption, const FString& in_emblem, const FString& in_subtitle, float in_start, float in_end, eUI_OC_CAP in_scene) {
}

bool UMacanUIDataBattleCaption::IsUiInvisibleAll() {
    return false;
}

bool UMacanUIDataBattleCaption::IsRendererbleTexture(UTextureRenderTarget2D* Texture) {
    return false;
}

bool UMacanUIDataBattleCaption::IsNeedUpdateThisUI(EBattleCaptionUI uiType, EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataBattleCaption::IsNeedUpdate(EUIResultOnOrOff& result) {
    return false;
}

FVector2D UMacanUIDataBattleCaption::GetRenderTargetSize() {
    return FVector2D{};
}

EBattleCaptionLanguage UMacanUIDataBattleCaption::GetLanguage() {
    return EBattleCaptionLanguage::Jp;
}

FLinearColor UMacanUIDataBattleCaption::GetInverseColorTemperature() {
    return FLinearColor{};
}

void UMacanUIDataBattleCaption::FinishUpdateUI(EBattleCaptionUI uiType) {
}

bool UMacanUIDataBattleCaption::DrawWidgetToTarget(UTextureRenderTarget2D* Target, UUserWidget* WidgetToRender, FVector2D DrawSize, bool UseGamma, TEnumAsByte<TextureFilter> Filter, float DeltaTime) {
    return false;
}

bool UMacanUIDataBattleCaption::DrawUWidgetToTarget(UTextureRenderTarget2D* Target, UWidget* WidgetToRender, FVector2D DrawSize, bool UseGamma, TEnumAsByte<TextureFilter> Filter, float DeltaTime) {
    return false;
}


