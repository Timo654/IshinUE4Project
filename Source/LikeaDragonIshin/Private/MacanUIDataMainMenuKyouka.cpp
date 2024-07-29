#include "MacanUIDataMainMenuKyouka.h"

UMacanUIDataMainMenuKyouka::UMacanUIDataMainMenuKyouka() {
    this->bfData = 0;
    this->arrayAbilityDataArray.AddDefaulted(7);
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
    this->playingAnimBlink = 0;
    this->isPlayingAnimAbilityLevelUp = false;
}

void UMacanUIDataMainMenuKyouka::SetFlag(EUIMainMenuKyoukaBfType Type) {
}

void UMacanUIDataMainMenuKyouka::OpenWidget(EUIMainMenuKyoukaBfType inType, bool isQuick) {
}

bool UMacanUIDataMainMenuKyouka::IsVisibleStyleIconSword(EUIResultVisibleOrInvisible& result, int32 inCategory, int32 inIndex) {
    return false;
}

bool UMacanUIDataMainMenuKyouka::IsVisibleStyleIconSude(EUIResultVisibleOrInvisible& result, int32 inCategory, int32 inIndex) {
    return false;
}

bool UMacanUIDataMainMenuKyouka::IsVisibleStyleIconSpecial(EUIResultVisibleOrInvisible& result, int32 inCategory, int32 inIndex) {
    return false;
}

void UMacanUIDataMainMenuKyouka::IsVisibleStyleIcons(int32 inCategory, int32 inIndex, bool& sude, bool& sword, bool& Gun, bool& ranbu, bool& Special) {
}

bool UMacanUIDataMainMenuKyouka::IsVisibleStyleIconRanbu(EUIResultVisibleOrInvisible& result, int32 inCategory, int32 inIndex) {
    return false;
}

bool UMacanUIDataMainMenuKyouka::IsVisibleStyleIconGun(EUIResultVisibleOrInvisible& result, int32 inCategory, int32 inIndex) {
    return false;
}

bool UMacanUIDataMainMenuKyouka::IsOnFlag(EUIResultOnOrOff& result, EUIMainMenuKyoukaBfType Type) {
    return false;
}

bool UMacanUIDataMainMenuKyouka::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

FText UMacanUIDataMainMenuKyouka::GetSkillName(int32 inCategory, int32 inIndex) {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UMacanUIDataMainMenuKyouka::GetSetumeiTextureSoftPtr(int32 inCategory, int32 inIndex) {
    return NULL;
}

FString UMacanUIDataMainMenuKyouka::GetSetumeiTextureName(int32 inCategory, int32 inIndex) {
    return TEXT("");
}

FText UMacanUIDataMainMenuKyouka::GetExplain(int32 inCategory, int32 inIndex) {
    return FText::GetEmpty();
}

FText UMacanUIDataMainMenuKyouka::GetControl(int32 inCategory, int32 inIndex) {
    return FText::GetEmpty();
}

EUIState UMacanUIDataMainMenuKyouka::FindUIState(EUIResultSuccessOrFailed& result, EUIMainMenuKyoukaBfType inType) {
    return EUIState::NotSet;
}

void UMacanUIDataMainMenuKyouka::DelFlag(EUIMainMenuKyoukaBfType Type) {
}

void UMacanUIDataMainMenuKyouka::CloseWidget(EUIMainMenuKyoukaBfType inType, bool isQuick) {
}


