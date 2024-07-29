#include "MacanUIDataMoney.h"

UMacanUIDataMoney::UMacanUIDataMoney() {
    this->bfData = 0;
    this->arrayMoneyData.AddDefaulted(3);
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
}

void UMacanUIDataMoney::UpdateValue(int32 inIndex, int32 InValue) {
}

void UMacanUIDataMoney::SetFlag(EUIMoneyBfType Type) {
}

void UMacanUIDataMoney::OpenWidget(int32 inIndex, EUIMoneyIconType iconType, bool isInvalidBG, bool isQuick) {
}

bool UMacanUIDataMoney::IsOnFlag(EUIResultOnOrOff& result, EUIMoneyBfType Type) {
    return false;
}

bool UMacanUIDataMoney::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataMoney::DelFlag(EUIMoneyBfType Type) {
}

void UMacanUIDataMoney::CloseWidget(int32 inIndex, EUIMoneyBfType inType, bool isQuick, bool isResetByWBP) {
}


