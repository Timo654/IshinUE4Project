#include "MacanUIDataOpenning.h"

UMacanUIDataOpenning::UMacanUIDataOpenning() {
    this->pageType = EUIOpeningPageType::NAME_SIZE_MAX;
}

bool UMacanUIDataOpenning::IsJapaneseLanguage() const {
    return false;
}

bool UMacanUIDataOpenning::IsAsianLanguage() const {
    return false;
}


