#include "MacanUIDataUdon.h"

UMacanUIDataUdon::UMacanUIDataUdon() {
}

bool UMacanUIDataUdon::IsNeedUpdateThisUI(EPokerUI uiType, EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataUdon::IsNeedUpdate(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataUdon::FinishUpdateUI(EPokerUI uiType) {
}


