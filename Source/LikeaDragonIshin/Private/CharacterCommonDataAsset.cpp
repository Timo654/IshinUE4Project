#include "CharacterCommonDataAsset.h"

UCharacterCommonDataAsset::UCharacterCommonDataAsset() {
    this->FaceTargetInfo = NULL;
    this->FacePatternInfo = NULL;
    this->HandPatternInfo = NULL;
    this->FaceTargetWrinkleOffsetInfo = NULL;
    this->FaceTargetPatternOffsetInfo = NULL;
    this->BaseMaterialToFadeMaterial = NULL;
    this->AnimBlueprintFileInfo = NULL;
    this->ClothNodeInfo = NULL;
    this->HactAnimInstanceSetting = NULL;
}

UDataTable* UCharacterCommonDataAsset::GetHandPatternInfo() {
    return NULL;
}

UDataTable* UCharacterCommonDataAsset::GetHactAnimInstanceSetting() {
    return NULL;
}

UDataTable* UCharacterCommonDataAsset::GetFaceTargetWrinkleOffsetInfo() {
    return NULL;
}

UDataTable* UCharacterCommonDataAsset::GetFaceTargetPatternOffsetInfo() {
    return NULL;
}

UDataTable* UCharacterCommonDataAsset::GetFaceTargetInfo() {
    return NULL;
}

UDataTable* UCharacterCommonDataAsset::GetFacePatternInfo() {
    return NULL;
}

UDataTable* UCharacterCommonDataAsset::GetClothNodeInfo() {
    return NULL;
}

UDataTable* UCharacterCommonDataAsset::GetBaseMaterialToFadeMaterial() {
    return NULL;
}

UDataTable* UCharacterCommonDataAsset::GetAnimBlueprintFileInfo() {
    return NULL;
}


