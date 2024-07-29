#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActInvisible.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActInvisible {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Wanderer;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActInvisible();
};

