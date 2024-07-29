#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_Vibration.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_Vibration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 vib_idx;
    
    LIKEADRAGONISHIN_API FDiEventParams_Vibration();
};

