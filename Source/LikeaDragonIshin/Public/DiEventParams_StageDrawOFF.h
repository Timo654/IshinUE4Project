#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_StageDrawOFF.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_StageDrawOFF {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverwriteExposure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureEve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureNgt;
    
    LIKEADRAGONISHIN_API FDiEventParams_StageDrawOFF();
};

