#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActEnd.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActEnd {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool chain_camera;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActEnd();
};

