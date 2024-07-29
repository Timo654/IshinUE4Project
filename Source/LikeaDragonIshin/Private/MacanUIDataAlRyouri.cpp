#include "MacanUIDataAlRyouri.h"

UMacanUIDataAlRyouri::UMacanUIDataAlRyouri() {
}

void UMacanUIDataAlRyouri::OnClick_ListEntry(int32 Index) {
}

void UMacanUIDataAlRyouri::MouseOver_ListEntry(int32 Index) {
}

bool UMacanUIDataAlRyouri::IsNeedUpdateThisUI(ERyouriMenuUI uiType, EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataAlRyouri::IsNeedUpdate(EUIResultOnOrOff& result) {
    return false;
}

int32 UMacanUIDataAlRyouri::GetWheelNum() const {
    return 0;
}

TArray<FUIItemItemData> UMacanUIDataAlRyouri::GetItemList() const {
    return TArray<FUIItemItemData>();
}

FText UMacanUIDataAlRyouri::GetHarukaMessage() const {
    return FText::GetEmpty();
}

TArray<FRyouriSyokuzaiUI> UMacanUIDataAlRyouri::GetDetailSyokuzaiList() const {
    return TArray<FRyouriSyokuzaiUI>();
}

float UMacanUIDataAlRyouri::GetDetailStarNum() const {
    return 0.0f;
}

FText UMacanUIDataAlRyouri::GetDetailName() const {
    return FText::GetEmpty();
}

void UMacanUIDataAlRyouri::FinishUpdateUI(ERyouriMenuUI uiType) {
}


