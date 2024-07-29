#pragma once
#include "CoreMinimal.h"
#include "EBodyDamagePosition.h"
#include "DiEventParams_BodyDamageAdd.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_BodyDamageAdd {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyDamagePosition _pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _val;
    
    LIKEADRAGONISHIN_API FDiEventParams_BodyDamageAdd();
};

