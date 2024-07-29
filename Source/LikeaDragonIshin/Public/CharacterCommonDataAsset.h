#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterCommonDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UCharacterCommonDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FaceTargetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FacePatternInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HandPatternInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FaceTargetWrinkleOffsetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FaceTargetPatternOffsetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BaseMaterialToFadeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AnimBlueprintFileInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ClothNodeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HactAnimInstanceSetting;
    
public:
    UCharacterCommonDataAsset();

    UFUNCTION(BlueprintCallable)
    UDataTable* GetHandPatternInfo();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetHactAnimInstanceSetting();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetFaceTargetWrinkleOffsetInfo();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetFaceTargetPatternOffsetInfo();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetFaceTargetInfo();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetFacePatternInfo();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetClothNodeInfo();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetBaseMaterialToFadeMaterial();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetAnimBlueprintFileInfo();
    
};

