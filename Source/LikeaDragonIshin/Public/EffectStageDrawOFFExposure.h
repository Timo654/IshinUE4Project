#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EffectStageDrawOFFExposure.generated.h"

USTRUCT(BlueprintType)
struct FEffectStageDrawOFFExposure : public FTableRowBase {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposureScale;
    
    LIKEADRAGONISHIN_API FEffectStageDrawOFFExposure();
};

