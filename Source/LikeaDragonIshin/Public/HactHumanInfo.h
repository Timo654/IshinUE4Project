#pragma once
#include "CoreMinimal.h"
#include "HactHumanInfo.generated.h"

class ADevil2Human;

USTRUCT(BlueprintType)
struct FHactHumanInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADevil2Human* p_actor_human;
    
    LIKEADRAGONISHIN_API FHactHumanInfo();
};

