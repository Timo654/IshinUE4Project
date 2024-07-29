#include "MacanUIDataMiniMapAddress.h"

UMacanUIDataMiniMapAddress::UMacanUIDataMiniMapAddress() {
    this->bfData = 0;
    this->ReqDestinationArrival = false;
    this->playingAnimOpen = 0;
    this->playingAnimClose = 0;
}

void UMacanUIDataMiniMapAddress::UpdateAddressText(const FText& InText) {
}

void UMacanUIDataMiniMapAddress::SetFlag(EUIMiniMapAddressBfType Type) {
}

void UMacanUIDataMiniMapAddress::OpenWidget(EUIMiniMapAddressBfType inType, bool isQuick) {
}

bool UMacanUIDataMiniMapAddress::IsOnFlag(EUIResultOnOrOff& result, EUIMiniMapAddressBfType Type) {
    return false;
}

bool UMacanUIDataMiniMapAddress::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataMiniMapAddress::DelFlag(EUIMiniMapAddressBfType Type) {
}

void UMacanUIDataMiniMapAddress::CloseWidget(EUIMiniMapAddressBfType inType, bool isQuick) {
}


