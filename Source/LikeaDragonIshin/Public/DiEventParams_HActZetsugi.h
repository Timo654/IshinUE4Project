#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActZetsugi.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActZetsugi {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dummy;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActZetsugi();
};

