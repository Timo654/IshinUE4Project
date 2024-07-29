#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_Dummy.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_Dummy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dummy;
    
    LIKEADRAGONISHIN_API FDiEventParams_Dummy();
};

