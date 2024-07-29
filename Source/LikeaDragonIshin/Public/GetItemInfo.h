#pragma once
#include "CoreMinimal.h"
#include "GetItemInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FGetItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    LIKEADRAGONISHIN_API FGetItemInfo();
};

