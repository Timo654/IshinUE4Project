#pragma once
#include "CoreMinimal.h"
#include "EBodyDamagePosition.h"
#include "BodyDamagePlayInfo.generated.h"

USTRUCT(BlueprintType)
struct FBodyDamagePlayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyDamagePosition position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    LIKEADRAGONISHIN_API FBodyDamagePlayInfo();
};

