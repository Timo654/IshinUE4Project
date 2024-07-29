#include "StaffrollMacanUserWidget.h"

UStaffrollMacanUserWidget::UStaffrollMacanUserWidget() {
    this->progress = 0.00f;
}


void UStaffrollMacanUserWidget::StartLoad() {
}

void UStaffrollMacanUserWidget::Release() {
}

bool UStaffrollMacanUserWidget::IsReady() {
    return false;
}

TArray<FStaffrollInfo> UStaffrollMacanUserWidget::GetStaffRollInfomations() {
    return TArray<FStaffrollInfo>();
}

EUIStaffrollPlatform UStaffrollMacanUserWidget::GetPlatform() {
    return EUIStaffrollPlatform::PC;
}

EUIStaffrollLanguage UStaffrollMacanUserWidget::GetLanguage() {
    return EUIStaffrollLanguage::Japan;
}

bool UStaffrollMacanUserWidget::ExecSetData() {
    return false;
}


