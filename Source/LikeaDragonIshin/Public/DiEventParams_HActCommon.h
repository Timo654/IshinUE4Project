#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActCommon.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParamArg;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActCommon();
};

