#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EffectInkTextureInfo.generated.h"

USTRUCT(BlueprintType)
struct FEffectInkTextureInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TexturePath;
    
    LIKEADRAGONISHIN_API FEffectInkTextureInfo();
};

