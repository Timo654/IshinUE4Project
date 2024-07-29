#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MergedMeshData.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FMergedMeshData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tmp;
    
    FMergedMeshData();
};

