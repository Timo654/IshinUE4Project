#include "MacanUIDataMainMenuRyouri.h"

UMacanUIDataMainMenuRyouri::UMacanUIDataMainMenuRyouri() {
    this->detailStarNum = 0.00f;
    this->detailIsShowCheck = false;
}

void UMacanUIDataMainMenuRyouri::OnClick_ListEntry(int32 Index) {
}

void UMacanUIDataMainMenuRyouri::MouseOver_ListEntry(int32 Index) {
}

bool UMacanUIDataMainMenuRyouri::IsNeedUpdateThisUI(EMainMenuRyouriUI uiType, EUIResultOnOrOff& result) {
    return false;
}

int32 UMacanUIDataMainMenuRyouri::GetWheelNum() {
    return 0;
}

void UMacanUIDataMainMenuRyouri::FinishUpdateUI(EMainMenuRyouriUI uiType) {
}


