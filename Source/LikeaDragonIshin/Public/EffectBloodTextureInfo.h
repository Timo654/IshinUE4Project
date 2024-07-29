#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EffectBloodTextureInfo.generated.h"

USTRUCT(BlueprintType)
struct FEffectBloodTextureInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ColorTexturePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath NormalTexturePath;
    
    LIKEADRAGONISHIN_API FEffectBloodTextureInfo();
};

