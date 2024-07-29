#include "MacanUserWidget_ScrollArrows.h"

UMacanUserWidget_ScrollArrows::UMacanUserWidget_ScrollArrows() {
    this->Arrow_Top = NULL;
    this->Arrow_Bottom = NULL;
    this->m_pTargetScrollBox = NULL;
}

void UMacanUserWidget_ScrollArrows::UpdateDisp(bool isDispTop, bool isDispBottom) {
}

void UMacanUserWidget_ScrollArrows::UpdateArrowsFromScrollBox(bool forcedInvisible, const UMacanScrollBox* inScrollBox) {
}

bool UMacanUserWidget_ScrollArrows::IsDispArrowTop() {
    return false;
}

bool UMacanUserWidget_ScrollArrows::IsDispArrowBottom() {
    return false;
}

bool UMacanUserWidget_ScrollArrows::IsDispArrow() {
    return false;
}


