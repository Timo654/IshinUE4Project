#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_ShoesOFF.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_ShoesOFF {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dummy;
    
    LIKEADRAGONISHIN_API FDiEventParams_ShoesOFF();
};

