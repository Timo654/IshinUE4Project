#pragma once
#include "CoreMinimal.h"
#include "ChildThunder.generated.h"

class AParticle;

USTRUCT(BlueprintType)
struct FChildThunder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AParticle* Particle;
    
    LIKEADRAGONISHIN_API FChildThunder();
};

