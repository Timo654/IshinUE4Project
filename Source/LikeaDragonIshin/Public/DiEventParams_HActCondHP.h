#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActCondHP.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActCondHP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlagNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CondType;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActCondHP();
};

