#pragma once
#include "CoreMinimal.h"
#include "MissionSpriteTex.h"
#include "MissionMap.generated.h"

USTRUCT(BlueprintType)
struct FMissionMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMissionSpriteTex> MissionMap;
    
    LIKEADRAGONISHIN_API FMissionMap();
};

