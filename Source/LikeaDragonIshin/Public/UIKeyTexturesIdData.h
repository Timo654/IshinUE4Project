#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UIKeyTexturesIdData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FUIKeyTexturesIdData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> pSoftTex2d;
    
    LIKEADRAGONISHIN_API FUIKeyTexturesIdData();
};

