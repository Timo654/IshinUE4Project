#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSSTextureData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FSSSTextureData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> Original;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> Replaced;
    
    FSSSTextureData();
};

