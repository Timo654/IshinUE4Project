#include "DlcSubsystem.h"

UDlcSubsystem::UDlcSubsystem() {
}

bool UDlcSubsystem::ShowStore() {
    return false;
}

void UDlcSubsystem::ResetEntitlements() {
}

void UDlcSubsystem::ResetConsumableEntitlements() {
}

void UDlcSubsystem::QueryConsumable() {
}

void UDlcSubsystem::Query() {
}

bool UDlcSubsystem::IsStoreUIClosed() const {
    return false;
}

bool UDlcSubsystem::IsDownloaded(const EDlcId in_id) {
    return false;
}

bool UDlcSubsystem::IsAvailable(const EDlcId in_id) {
    return false;
}

bool UDlcSubsystem::IsAnyBonus() {
    return false;
}

void UDlcSubsystem::GetDlcItemInfo(TArray<FDlcItemInfo>& o_dlc_info) {
}

void UDlcSubsystem::DebugAccrueConsumable() {
}

bool UDlcSubsystem::Consume(FDlcItemInfo& o_dlc_info) {
    return false;
}


