#include "MacanUIDataFukubiki.h"

UMacanUIDataFukubiki::UMacanUIDataFukubiki() {
    this->buttonGuideWidget = NULL;
    this->prizeListWidget = NULL;
    this->isVisibleButtonGuide = false;
    this->isVisiblePrizeList = false;
    this->prizeInfoArray.AddDefaulted(5);
}

void UMacanUIDataFukubiki::SetVisiblePrizeList(bool IsVisible) {
}

void UMacanUIDataFukubiki::SetVisibleButtonGuide(bool IsVisible) {
}

void UMacanUIDataFukubiki::SetItemInfosByNum(TArray<int32> numbers, TArray<int32> getCounts) {
}

void UMacanUIDataFukubiki::SetItemInfosByID(TArray<FName> IDs, TArray<int32> getCounts) {
}

void UMacanUIDataFukubiki::SetItemInfoByNum(int32 Index, int32 Number, int32 getCount) {
}

void UMacanUIDataFukubiki::SetItemInfoByID(int32 Index, FName ID, int32 getCount) {
}


