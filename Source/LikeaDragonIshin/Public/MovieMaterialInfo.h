#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MovieMaterialInfo.generated.h"

class UManaTexture;
class UMaterial;

USTRUCT(BlueprintType)
struct FMovieMaterialInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> MovieMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UManaTexture> MovieTexture;
    
    LIKEADRAGONISHIN_API FMovieMaterialInfo();
};

