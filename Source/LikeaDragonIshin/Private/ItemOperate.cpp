#include "ItemOperate.h"

AItemOperate::AItemOperate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AItemOperate::IsItemKindEquipFromNumId(int32 item_id) {
    return false;
}

bool AItemOperate::IsItemKindEquipFromItemId(FName item_id) {
    return false;
}

bool AItemOperate::IsDlcItemID(int32 item_id) {
    return false;
}

TSoftObjectPtr<UTexture2D> AItemOperate::GetWeaponZoomIconFromNumId(int32 item_id) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> AItemOperate::GetWeaponZoomIconFromItemId(FName item_id) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> AItemOperate::GetWeaponSilhouetteIconFromNumId(int32 item_id) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> AItemOperate::GetWeaponSilhouetteIconFromItemId(FName item_id) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> AItemOperate::GetWeaponDetailIconFromNumId(int32 item_id) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> AItemOperate::GetWeaponDetailIconFromItemId(FName item_id) {
    return NULL;
}

int32 AItemOperate::GetUniqueMarkFromNumId(int32 item_id, int32 Index) {
    return 0;
}

int32 AItemOperate::GetUniqueMarkFromItemId(FName item_id, int32 Index) {
    return 0;
}

EItemAbilityType AItemOperate::GetUniqueAbilityEnumFromItemId(FName item_id, int32 Index) {
    return EItemAbilityType::EMPTY;
}

int32 AItemOperate::GetRarityFromNumId(int32 item_id) {
    return 0;
}

int32 AItemOperate::GetRarityFromItemId(FName item_id) {
    return 0;
}

TSoftObjectPtr<UTexture2D> AItemOperate::GetPictSoftTexturePtrFromNumIdLarge(int32 item_id) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> AItemOperate::GetPictSoftTexturePtrFromNumId(int32 item_id) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> AItemOperate::GetPictSoftTexturePtrFromItemId(FName item_id) {
    return NULL;
}

UTexture2D* AItemOperate::GetMarkTextureFromInt(int32 mark_id) {
    return NULL;
}

UTexture2D* AItemOperate::GetMarkTextureFromEItemAbilityS(EItemAbilityType mark_id) {
    return NULL;
}

UTexture2D* AItemOperate::GetMarkTextureFromEItemAbility(EItemAbilityType mark_id) {
    return NULL;
}

UTexture2D* AItemOperate::GetMarkTextureFile(int32 mark_id) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> AItemOperate::GetMarkSoftTexturePtrFromEItemAbilityS(EItemAbilityType mark_id) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> AItemOperate::GetMarkSoftTexturePtrFromEItemAbility(EItemAbilityType mark_id) {
    return NULL;
}

FText AItemOperate::GetMarkNameFromEItemAbility(EItemAbilityType mark_id) {
    return FText::GetEmpty();
}

bool AItemOperate::GetMarkIsKaku(EItemAbilityType markID) {
    return false;
}

int32 AItemOperate::GetMarkFromNumId(int32 item_id) {
    return 0;
}

int32 AItemOperate::GetMarkFromItemId(FName item_id) {
    return 0;
}

FText AItemOperate::GetMarkExplainFromEItemAbility(EItemAbilityType mark_id, EItemAbilityRarity skill_lv) {
    return FText::GetEmpty();
}

FText AItemOperate::GetItemNameFromNumId(int32 item_id) {
    return FText::GetEmpty();
}

FText AItemOperate::GetItemNameFromItemId(FName item_id) {
    return FText::GetEmpty();
}

int32 AItemOperate::GetItemKindMaxCount() {
    return 0;
}

int32 AItemOperate::GetItemKindFromNumId(int32 item_id) {
    return 0;
}

int32 AItemOperate::GetItemKindFromItemId(FName item_id) {
    return 0;
}

FString AItemOperate::GetItemIdFromNumber(int32 ID) {
    return TEXT("");
}

FText AItemOperate::GetItemExplanationFromNumId(int32 item_id) {
    return FText::GetEmpty();
}

FText AItemOperate::GetItemExplanationFromItemId(FName item_id) {
    return FText::GetEmpty();
}

int32 AItemOperate::GetItemAllCount() {
    return 0;
}

UTexture2D* AItemOperate::GetIconFromNumId(int32 item_id) {
    return NULL;
}

UTexture2D* AItemOperate::GetIconFromItemId(FName item_id) {
    return NULL;
}

EItemAbilityType AItemOperate::GetAbilityEnumFromItemId(FName item_id) {
    return EItemAbilityType::EMPTY;
}

bool AItemOperate::CheckArmProtectorFromNumber(int32 ID) {
    return false;
}

bool AItemOperate::CheckArmProtector(FName ItemId) {
    return false;
}


