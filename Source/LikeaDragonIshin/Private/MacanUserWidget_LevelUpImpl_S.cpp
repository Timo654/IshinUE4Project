#include "MacanUserWidget_LevelUpImpl_S.h"

UMacanUserWidget_LevelUpImpl_S::UMacanUserWidget_LevelUpImpl_S() {
    this->default_anim = NULL;
}

void UMacanUserWidget_LevelUpImpl_S::Play(EBtlStyle Style) {
}

bool UMacanUserWidget_LevelUpImpl_S::IsPlaying() const {
    return false;
}

TMap<EBtlStyle, int32> UMacanUserWidget_LevelUpImpl_S::getStyleIdxDic() const {
    return TMap<EBtlStyle, int32>();
}

TMap<EBtlStyle, FLinearColor> UMacanUserWidget_LevelUpImpl_S::getStyleColorDic() const {
    return TMap<EBtlStyle, FLinearColor>();
}

void UMacanUserWidget_LevelUpImpl_S::abort() {
}


