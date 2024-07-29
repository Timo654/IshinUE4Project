#include "MacanUIDataShopMenuShop.h"

UMacanUIDataShopMenuShop::UMacanUIDataShopMenuShop() {
    this->bfData = 0;
    this->isForcusedYesMessage = false;
    this->isSelectedYesNo = false;
    this->myInventoryPageMax = 0;
    this->myInventoryPageNow = 0;
    this->totalPrice = 0;
    this->totalOrder = 0;
    this->textWindowType = EUITextWindowType::Image;
    this->myMoneyIconType = EUIMoneyIconType::Money;
    this->isTabChangeInputR = false;
    this->isNotPlayTabChangeInputAnimation = true;
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
    this->playingAnimBlink = 0;
    this->playingAnimUnique0 = 0;
    this->playingAnimUnique1 = 0;
}

void UMacanUIDataShopMenuShop::UpdateYesNo(bool isForcedYes, bool isSelected) {
}

void UMacanUIDataShopMenuShop::UpdateTotalPrice(int32 inTotalPrice) {
}

void UMacanUIDataShopMenuShop::UpdateTotalOrder(int32 inTotalPrice) {
}

void UMacanUIDataShopMenuShop::UpdateShopInventory(TArray<FUIItemItemData>& inArray) {
}

void UMacanUIDataShopMenuShop::UpdateMyInventory(TArray<FUIItemItemData>& inArray, int32 pageNow, int32 paseMax) {
}

void UMacanUIDataShopMenuShop::UpdateMessage(FText& inMessage, EUITextWindowType inType) {
}

void UMacanUIDataShopMenuShop::UpdateBanner(EUIState inUIState) {
}

void UMacanUIDataShopMenuShop::SetFlag(EUISMShopBfType Type) {
}

void UMacanUIDataShopMenuShop::OpenMenu(bool isQuick) {
}

bool UMacanUIDataShopMenuShop::IsOnFlag(EUIResultOnOrOff& result, EUISMShopBfType Type) {
    return false;
}

bool UMacanUIDataShopMenuShop::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataShopMenuShop::DelFlag(EUISMShopBfType Type) {
}

void UMacanUIDataShopMenuShop::CloseMenu(bool isQuick) {
}


