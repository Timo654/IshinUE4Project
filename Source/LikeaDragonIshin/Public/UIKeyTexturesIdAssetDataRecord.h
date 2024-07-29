#pragma once
#include "CoreMinimal.h"
#include "UIKeyTexturesIdAssetDataRecord.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FUIKeyTexturesIdAssetDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> pSoftTex2d;
    
    LIKEADRAGONISHIN_API FUIKeyTexturesIdAssetDataRecord();
};

