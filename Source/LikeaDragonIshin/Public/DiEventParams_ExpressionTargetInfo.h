#pragma once
#include "CoreMinimal.h"
#include "EFaceTargetType.h"
#include "DiEventParams_ExpressionTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_ExpressionTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaceTargetType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Blend;
    
    LIKEADRAGONISHIN_API FDiEventParams_ExpressionTargetInfo();
};

