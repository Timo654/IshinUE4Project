#pragma once
#include "CoreMinimal.h"
#include "ERimFlashPosition.h"
#include "RimFlashPlayInfo.generated.h"

USTRUCT(BlueprintType)
struct FRimFlashPlayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERimFlashPosition position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    LIKEADRAGONISHIN_API FRimFlashPlayInfo();
};

