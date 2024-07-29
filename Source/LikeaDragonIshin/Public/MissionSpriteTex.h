#pragma once
#include "CoreMinimal.h"
#include "MissionSpriteTex.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMissionSpriteTex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* place;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Object;
    
    LIKEADRAGONISHIN_API FMissionSpriteTex();
};

