#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RimFlashPisitionInfo.generated.h"

USTRUCT(BlueprintType)
struct FRimFlashPisitionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float dist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    LIKEADRAGONISHIN_API FRimFlashPisitionInfo();
};

