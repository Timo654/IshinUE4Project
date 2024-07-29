#include "MacanUIDataRyouri.h"

UMacanUIDataRyouri::UMacanUIDataRyouri() {
    this->odaicCurrent = 0;
    this->odaicNext = 0;
    this->kiruHochoRate = 0.00f;
    this->kiruButtonPushStatus = eUI_ANM_RYOURI::eUI_ANM_GOOD;
    this->kiruButtonPushIndex = 0;
    this->choumiBarRate = 0.00f;
    this->yakuButtonType = ERyouriButtonType::Max;
    this->kanetsuButtonType = ERyouriButtonType::Max;
    this->choumiButtonType = ERyouriButtonType::Max;
    this->choumiPerfectRange = 0.00f;
    this->choumiGoodRange = 0.00f;
    this->odaiUIcon = ERyouriMethod::eRyouri_Method_Cut;
}

bool UMacanUIDataRyouri::IsNeedUpdateThisUI(ERyouriUI uiType, EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataRyouri::IsNeedUpdate(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataRyouri::FinishUpdateUI(ERyouriUI uiType) {
}


