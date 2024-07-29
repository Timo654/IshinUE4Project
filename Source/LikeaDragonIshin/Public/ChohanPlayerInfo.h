#pragma once
#include "CoreMinimal.h"
#include "ChohanPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FChohanPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 possessionPoint;
    
    LIKEADRAGONISHIN_API FChohanPlayerInfo();
};

