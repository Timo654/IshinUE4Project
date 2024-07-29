#include "MacanUIDataChapterTitle.h"

UMacanUIDataChapterTitle::UMacanUIDataChapterTitle() {
    this->bfData = 0;
    this->chapterNum = 1;
    this->animType = EUIMacanUIDataChapterTitleAnimType::Jp;
}

void UMacanUIDataChapterTitle::PlayAnim(int32 inChapterNum, EUIMacanUIDataChapterTitleAnimType inAnimType) {
}

bool UMacanUIDataChapterTitle::IsOnFlag(EUIResultOnOrOff& result, EUIMacanUIDataChapterTitleBfType Type) {
    return false;
}

bool UMacanUIDataChapterTitle::IsDirty(EUIResultOnOrOff& result) {
    return false;
}

void UMacanUIDataChapterTitle::DelFlag(EUIMacanUIDataChapterTitleBfType Type) {
}


