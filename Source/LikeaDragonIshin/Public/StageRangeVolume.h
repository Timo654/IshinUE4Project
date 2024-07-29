#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "StageRangeData.h"
#include "StageRangeVolume.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AStageRangeVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RangeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ModeFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStageRangeData> StageRangeData;
    
    AStageRangeVolume(const FObjectInitializer& ObjectInitializer);

};

