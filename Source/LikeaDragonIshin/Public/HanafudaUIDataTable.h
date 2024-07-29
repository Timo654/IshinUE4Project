#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHanafudaAttribute.h"
#include "HanafudaUIDataTable.generated.h"

USTRUCT(BlueprintType)
struct FHanafudaUIDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHanafudaAttribute HanafudaAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText YakuName;
    
    LIKEADRAGONISHIN_API FHanafudaUIDataTable();
};

