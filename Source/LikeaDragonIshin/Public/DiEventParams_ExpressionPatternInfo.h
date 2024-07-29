#pragma once
#include "CoreMinimal.h"
#include "EFacePatternType.h"
#include "DiEventParams_ExpressionPatternInfo.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_ExpressionPatternInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFacePatternType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Blend;
    
    LIKEADRAGONISHIN_API FDiEventParams_ExpressionPatternInfo();
};

