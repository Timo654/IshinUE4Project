#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActValidate.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActValidate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlagNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotFlag;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActValidate();
};

