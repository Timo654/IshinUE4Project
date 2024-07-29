#include "CommonGameInstance.h"

UCommonGameInstance::UCommonGameInstance() {
    this->CharacterCommon = NULL;
    this->HumanTextureChangeData = NULL;
    this->MergedMeshList = NULL;
    this->DLCModelList = NULL;
    this->AuthPlatformSettingData = NULL;
    this->SSSProfileTableData = NULL;
    this->SSSTextureTableData = NULL;
    this->StageColliMaterial = NULL;
    this->Devil2LightData = NULL;
    this->EffectCommon = NULL;
    this->FukubikiWdrId = 0;
    this->MiniMapManager = NULL;
}

UDataTable* UCommonGameInstance::GetStageColliMaterial() {
    return NULL;
}

UDataTable* UCommonGameInstance::GetSSSTextureTableData() {
    return NULL;
}

UDataTable* UCommonGameInstance::GetSSSProfileTableData() {
    return NULL;
}

UDataTable* UCommonGameInstance::GetMergedMeshList() {
    return NULL;
}

UDataTable* UCommonGameInstance::GetHumanTextureChangeData() {
    return NULL;
}

TArray<UDataTable*> UCommonGameInstance::GetHumanListArray() {
    return TArray<UDataTable*>();
}

UEffectCommonDataAsset* UCommonGameInstance::GetEffectCommon() {
    return NULL;
}

UDataTable* UCommonGameInstance::GetDLCModelList() {
    return NULL;
}

UDataTable* UCommonGameInstance::GetDevil2LightData() {
    return NULL;
}

TArray<UDataTable*> UCommonGameInstance::GetDEditColorArray() {
    return TArray<UDataTable*>();
}

TArray<UDataTable*> UCommonGameInstance::GetCharaInfoArray() {
    return TArray<UDataTable*>();
}

UCharacterCommonDataAsset* UCommonGameInstance::GetCharacterCommon() {
    return NULL;
}

TArray<UDataTable*> UCommonGameInstance::GetCharaArc() {
    return TArray<UDataTable*>();
}

UDataTable* UCommonGameInstance::GetAuthPlatformSettingData() {
    return NULL;
}


