#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActStart.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool chain_camera;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActStart();
};

