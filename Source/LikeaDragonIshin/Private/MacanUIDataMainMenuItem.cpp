#include "MacanUIDataMainMenuItem.h"

UMacanUIDataMainMenuItem::UMacanUIDataMainMenuItem() {
    this->bfData = 0;
    this->popupIndex = 0;
    this->currentTabType = EUIMMItemTabType::CarryItem;
    this->currentSortType = EUIMMItemSortType::Normal;
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
    this->playingAnimBlink = 0;
    this->pTextureValuables = NULL;
}

void UMacanUIDataMainMenuItem::UpdateTextureValuables(UTexture2D* inTexture2D) {
}

void UMacanUIDataMainMenuItem::UpdateSortType(EUIMMItemSortType inType) {
}

void UMacanUIDataMainMenuItem::UpdateItemData(TArray<FUIItemItemData>& inArray, int32 inColmun) {
}

void UMacanUIDataMainMenuItem::UpdateBadgeTabs(bool Carry, bool Crops, bool Fish, bool Material, bool Valuables) {
}

void UMacanUIDataMainMenuItem::PlayPopupUsedMessage(int32 inIndex, FText& inMessage) {
}

void UMacanUIDataMainMenuItem::OpenWidget(EUIMMItemBfType inType, bool isQuick) {
}

bool UMacanUIDataMainMenuItem::IsOnFlag(EUIResultOnOrOff& result, EUIMMItemBfType Type) {
    return false;
}

bool UMacanUIDataMainMenuItem::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataMainMenuItem::DelFlag(EUIMMItemBfType Type) {
}

void UMacanUIDataMainMenuItem::CloseWidget(EUIMMItemBfType inType, bool isQuick) {
}

bool UMacanUIDataMainMenuItem::CheckReplaceAndSetCurrentSelectionItemPool() {
    return false;
}


