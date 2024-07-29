#include "MacanUIDataBetWindow.h"

UMacanUIDataBetWindow::UMacanUIDataBetWindow() {
    this->isSelectedTextColor = false;
    this->havePoint = 0;
    this->betPoint = 0;
    this->betMaxKeta = 0;
    this->betLineKeta = 0;
    this->dividendPoint = 0;
    this->DecideAnimationTime = 0.80f;
    this->WindowType = EBetWindowType::Default;
}

void UMacanUIDataBetWindow::UpdateDecideAnimation(float DeltaTime) {
}

bool UMacanUIDataBetWindow::ShowWindow() {
    return false;
}

bool UMacanUIDataBetWindow::SetTextColorChohan(bool isSelected) {
    return false;
}

bool UMacanUIDataBetWindow::SetHavePoint(int32 Point) {
    return false;
}

bool UMacanUIDataBetWindow::SetDividentText(FText text) {
    return false;
}

bool UMacanUIDataBetWindow::SetDividendPointChohan(int32 Point) {
    return false;
}

bool UMacanUIDataBetWindow::SetBetPoint(int32 Point, int32 maxKeta, int32 lineKeta) {
    return false;
}

bool UMacanUIDataBetWindow::SetAllPointDefault(int32 have, int32 bet, int32 maxKeta, int32 lineKeta) {
    return false;
}

bool UMacanUIDataBetWindow::SetAllPointChohan(int32 have, int32 bet, int32 Dividend, int32 maxKeta, int32 lineKeta) {
    return false;
}

bool UMacanUIDataBetWindow::PlayEnterAnimationChohan() {
    return false;
}

bool UMacanUIDataBetWindow::PlayDecideAnimation(int32 have) {
    return false;
}

bool UMacanUIDataBetWindow::OpenWindow(EBetWindowType Type) {
    return false;
}

bool UMacanUIDataBetWindow::IsNeedUpdateThisUI(EBetUI uiType, EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataBetWindow::IsNeedUpdate(EUIResultOnOrOff& result) {
    return false;
}

bool UMacanUIDataBetWindow::HideWindow() {
    return false;
}

void UMacanUIDataBetWindow::FinishUpdateUI(EBetUI uiType) {
}

bool UMacanUIDataBetWindow::CloseWindow() {
    return false;
}


