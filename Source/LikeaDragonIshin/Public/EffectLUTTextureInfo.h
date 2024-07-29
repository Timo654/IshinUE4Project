#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EffectLUTTextureInfo.generated.h"

USTRUCT(BlueprintType)
struct FEffectLUTTextureInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TexturePath;
    
    LIKEADRAGONISHIN_API FEffectLUTTextureInfo();
};

