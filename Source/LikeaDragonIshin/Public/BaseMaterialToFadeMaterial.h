#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BaseMaterialToFadeMaterial.generated.h"

class UMaterialInstanceConstant;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FBaseMaterialToFadeMaterial : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* Material;
    
    FBaseMaterialToFadeMaterial();
};

