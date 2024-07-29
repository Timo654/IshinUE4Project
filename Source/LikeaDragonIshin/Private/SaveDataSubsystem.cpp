#include "SaveDataSubsystem.h"

USaveDataSubsystem::USaveDataSubsystem() {
}

void USaveDataSubsystem::Query() {
}

bool USaveDataSubsystem::IsActive() {
    return false;
}

void USaveDataSubsystem::GetSaveDataInfo(const ESortType sort_type, TArray<FSaveDataInfo>& o_save_info, const bool is_prev_gen, const bool is_clear, const bool is_contain_auto, bool is_auto_save_only) {
}

void USaveDataSubsystem::GetAutoSaveDataInfo(const ESortType sort_type, TArray<FSaveDataInfo>& o_save_info, const bool is_prev_gen) {
}

void USaveDataSubsystem::AutoSaveGameData(const bool no_capture) {
}


