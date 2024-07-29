#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAttributeResult.h"
#include "EHanafudaAttribute.h"
#include "KoikoiAttribute.generated.h"

USTRUCT(BlueprintType)
struct FKoikoiAttribute : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHanafudaAttribute attributeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttributeResult result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Point;
    
    LIKEADRAGONISHIN_API FKoikoiAttribute();
};

