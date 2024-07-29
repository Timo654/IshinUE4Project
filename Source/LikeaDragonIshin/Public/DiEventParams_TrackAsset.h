#pragma once
#include "CoreMinimal.h"
#include "ETrackTypes.h"
#include "DiEventParams_TrackAsset.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_TrackAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrackTypes Type;
    
    LIKEADRAGONISHIN_API FDiEventParams_TrackAsset();
};

