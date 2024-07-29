#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActKeepGameMotion.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActKeepGameMotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dummy;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActKeepGameMotion();
};

