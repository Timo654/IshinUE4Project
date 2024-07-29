#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PtcVectorArray.generated.h"

USTRUCT(BlueprintType)
struct FPtcVectorArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vectors;
    
    LIKEADRAGONISHIN_API FPtcVectorArray();
};

