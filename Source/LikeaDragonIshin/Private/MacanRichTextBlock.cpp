#include "MacanRichTextBlock.h"

UMacanRichTextBlock::UMacanRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->_IsEnableDispCount = false;
    this->_DispCharacterCount = 0;
    this->_CurrentTextStyle = TEXT("Default");
    this->_OverrideCurrentFontSize = 0;
    this->isSetHilightColor = false;
    this->_EnableOverrideCurrentColor = false;
    this->_isInvariantMacan = false;
    this->_ControlWrapTextByLanguage = false;
    this->_ObliqueParamShearX = -0.25f;
    this->_ObliqueParamShearY = 0.00f;
    this->_ObliqueParamOffsetCoefficient = 0.00f;
}

void UMacanRichTextBlock::UpdateOverrideCurrentColor(FSlateColor& inColor) {
}

void UMacanRichTextBlock::UpdateCurrentTextStyle(FName InName) {
}

void UMacanRichTextBlock::SetNumTextPlusUnderline(int32 inNum, int32 inMaxDigits, int32 inLineDigit) {
}

void UMacanRichTextBlock::SetEnableDispCount(bool IsEnable) {
}

void UMacanRichTextBlock::SetCharacterCount(int32 inCount) {
}

void UMacanRichTextBlock::SetAccessibilitySetting() {
}

void UMacanRichTextBlock::OnUpdateSystemFont(FName InName) {
}

void UMacanRichTextBlock::OnUpdateSwitchingTextSpeakerColor(EUISwitchingFontColorType inType) {
}

void UMacanRichTextBlock::OnUpdateSwitchingTextColor(EUISwitchingFontColorType inType) {
}

void UMacanRichTextBlock::OnUpdateSwitchingSubtitleSpeakerColor(EUISwitchingFontColorType inType) {
}

void UMacanRichTextBlock::OnUpdateSwitchingSubtitleFontSize(EUISwitchingFontSizeType inType) {
}

void UMacanRichTextBlock::OnUpdateSwitchingSubtitleColor(EUISwitchingFontColorType inType) {
}

void UMacanRichTextBlock::OnUpdateSwitchingFontSize(EUISwitchingFontSizeType inType) {
}

void UMacanRichTextBlock::OnUpdateDipFontInvisible(bool isInvisible) {
}

void UMacanRichTextBlock::OnUpdateButtonIcon() {
}

FString UMacanRichTextBlock::GetCharacterStringFullText() {
    return TEXT("");
}

int32 UMacanRichTextBlock::GetCharacterCountLength() {
    return 0;
}


