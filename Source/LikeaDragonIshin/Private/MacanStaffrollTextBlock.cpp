#include "MacanStaffrollTextBlock.h"

UMacanStaffrollTextBlock::UMacanStaffrollTextBlock() {
    this->bIsVariable = false;
    this->bNoPixelSnapping = true;
    this->MinDesiredWidth = 0.00f;
    this->bWrapWithInvalidationPanel = false;
    this->bAutoWrapText = false;
    this->TextTransformPolicy = ETextTransformPolicy::None;
    this->bSimpleTextMode = false;
}

void UMacanStaffrollTextBlock::SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy) {
}

void UMacanStaffrollTextBlock::SetText(FText InText) {
}

void UMacanStaffrollTextBlock::SetStrikeBrush(FSlateBrush InStrikeBrush) {
}

void UMacanStaffrollTextBlock::SetShadowOffset(FVector2D InShadowOffset) {
}

void UMacanStaffrollTextBlock::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
}

void UMacanStaffrollTextBlock::setOpacity(float InOpacity) {
}

void UMacanStaffrollTextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
}

void UMacanStaffrollTextBlock::SetFont(FSlateFontInfo InFontInfo) {
}

void UMacanStaffrollTextBlock::SetColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void UMacanStaffrollTextBlock::SetAutoWrapText(bool InAutoTextWrap) {
}

FText UMacanStaffrollTextBlock::GetText() const {
    return FText::GetEmpty();
}

UMaterialInstanceDynamic* UMacanStaffrollTextBlock::GetDynamicOutlineMaterial() {
    return NULL;
}

UMaterialInstanceDynamic* UMacanStaffrollTextBlock::GetDynamicFontMaterial() {
    return NULL;
}


