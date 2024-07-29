#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EffectMaterialInfo.generated.h"

USTRUCT(BlueprintType)
struct FEffectMaterialInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> MaterialPaths;
    
    LIKEADRAGONISHIN_API FEffectMaterialInfo();
};

