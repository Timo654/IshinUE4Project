#include "CommerceEntryData.h"

FCommerceEntryData::FCommerceEntryData() {
    this->category = ECommerceCategory::VEGETABLE;
    this->bCurrent = false;
    this->canNouhin = false;
    this->isNouhin = false;
    this->isNew = false;
    this->isAddReward = false;
    this->categoryFrame = 0.00f;
    this->nouhinFrame = 0.00f;
    this->IsEmpty = false;
    this->progressType = PROGRESS_TYPE::PROGRESS_TYPE_UN_COMPLETE;
}

