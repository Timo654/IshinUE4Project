#include "LocalizedTextManager.h"

ULocalizedTextManager::ULocalizedTextManager() {
    this->m_pLocalizedTextDataAsset = NULL;
}

void ULocalizedTextManager::BP_UnLoadStringTable(EUIMainType Type) {
}

void ULocalizedTextManager::BP_UnLoadAuthStringTable(const FString& TableId) {
}

void ULocalizedTextManager::BP_LoadStringTable(EUIMainType Type) {
}

void ULocalizedTextManager::BP_LoadAuthStringTable(const FString& TableId) {
}

FText ULocalizedTextManager::BP_ConvertLocalizedTextFromFText(const FText& pureString) const {
    return FText::GetEmpty();
}

FText ULocalizedTextManager::BP_ConvertLocalizedTextByUIType(const FText& InText, EUIMainType uiType) const {
    return FText::GetEmpty();
}

FText ULocalizedTextManager::BP_ConvertLocalizedText(const FString& pureString) const {
    return FText::GetEmpty();
}


