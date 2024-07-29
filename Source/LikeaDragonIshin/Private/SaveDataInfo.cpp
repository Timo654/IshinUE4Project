#include "SaveDataInfo.h"

FSaveDataInfo::FSaveDataInfo() {
    this->DataType = ESaveDataType::None;
    this->Status = ESaveDataStatus::OK;
    this->SaveIndex = 0;
    this->IsClear = false;
    this->IsAutoSave = false;
}

