#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActDisableSetting.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActDisableSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActDisableSetting();
};

