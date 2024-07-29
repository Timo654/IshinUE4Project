#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/GameInstance.h"
#include "Devil2LightDataStruct.h"
#include "ESurfaceType.h"
#include "StageColliDataStruct.h"
#include "CommonGameInstance.generated.h"

class ADevil2LightPoint;
class AMiniMapManager;
class UCharacterCommonDataAsset;
class UDataTable;
class UEffectCommonDataAsset;
class UInputDeviceListener;

UCLASS(Blueprintable, NonTransient)
class LIKEADRAGONISHIN_API UCommonGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> CharaInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> HumanListArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> DEditColorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterCommonDataAsset* CharacterCommon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HumanTextureChangeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MergedMeshList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DLCModelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AuthPlatformSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SSSProfileTableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SSSTextureTableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> CharArcArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StageColliMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Devil2LightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEffectCommonDataAsset* EffectCommon;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath BtlCtrlTypeDataAsset_Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath BtlPlayerBP_Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath BtlEnemyBP_Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath BtlNpcBP_Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FukubikiWdrId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESurfaceType, FStageColliDataStruct> StageColliMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDevil2LightDataStruct> Devil2LightDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ADevil2LightPoint*> Devil2LightPointMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADevil2LightPoint*> Devil2SubPLightActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMiniMapManager* MiniMapManager;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, UInputDeviceListener*> menuPadListenerMap;
    
    UCommonGameInstance();

    UFUNCTION(BlueprintCallable)
    UDataTable* GetStageColliMaterial();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetSSSTextureTableData();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetSSSProfileTableData();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetMergedMeshList();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetHumanTextureChangeData();
    
    UFUNCTION(BlueprintCallable)
    TArray<UDataTable*> GetHumanListArray();
    
    UFUNCTION(BlueprintCallable)
    UEffectCommonDataAsset* GetEffectCommon();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetDLCModelList();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetDevil2LightData();
    
    UFUNCTION(BlueprintCallable)
    TArray<UDataTable*> GetDEditColorArray();
    
    UFUNCTION(BlueprintCallable)
    TArray<UDataTable*> GetCharaInfoArray();
    
    UFUNCTION(BlueprintCallable)
    UCharacterCommonDataAsset* GetCharacterCommon();
    
    UFUNCTION(BlueprintCallable)
    TArray<UDataTable*> GetCharaArc();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetAuthPlatformSettingData();
    
};

