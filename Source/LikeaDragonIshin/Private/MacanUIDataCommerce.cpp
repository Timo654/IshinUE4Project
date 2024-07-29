#include "MacanUIDataCommerce.h"

UMacanUIDataCommerce::UMacanUIDataCommerce() {
    this->isNouhinCursolHide = false;
    this->back02IconZResultRate = 0.00f;
    this->back02bk15ZResultHide = false;
    this->handOverCursol = 100;
    this->isHandOverCursolLast = false;
    this->menuItemList.AddDefaulted(6);
    this->listItem01Show.AddDefaulted(7);
    this->listItem02Show.AddDefaulted(10);
    this->isShowBase = false;
    this->isShowOrderSelect = false;
    this->isShowOrderProperty = false;
    this->isShowOrderHandOver = false;
    this->isShowResult = false;
    this->isYesNoWindowUpdate = false;
    this->isResultYesNo = false;
    this->isDecideYesNo = false;
}

bool UMacanUIDataCommerce::IsNeedUpdateThisUI(ECommerceUI uiType, EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataCommerce::IsNeedUpdate(EUIResultOnOrOff& result) {
    return false;
}

int32 UMacanUIDataCommerce::GetHandOverNum() {
    return 0;
}

void UMacanUIDataCommerce::FinishUpdateUI(ECommerceUI uiType) {
}


