#include "MacanUIDataActionButtonAccess.h"

UMacanUIDataActionButtonAccess::UMacanUIDataActionButtonAccess() {
    this->bfData = 0;
}

void UMacanUIDataActionButtonAccess::OpenWidget(EMacanUIDataActionButtonAccessBfType inType, bool isQuick) {
}

bool UMacanUIDataActionButtonAccess::IsOnFlag(EUIResultOnOrOff& result, EMacanUIDataActionButtonAccessBfType Type) {
    return false;
}

bool UMacanUIDataActionButtonAccess::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataActionButtonAccess::DelFlag(EMacanUIDataActionButtonAccessBfType Type) {
}

void UMacanUIDataActionButtonAccess::CloseWidget(EMacanUIDataActionButtonAccessBfType inType, bool isQuick) {
}


