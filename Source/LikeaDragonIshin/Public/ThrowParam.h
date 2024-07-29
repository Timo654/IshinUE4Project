#pragma once
#include "CoreMinimal.h"
#include "EThrowHandType.h"
#include "ThrowParam.generated.h"

USTRUCT(BlueprintType)
struct FThrowParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThrowHandType Hand;
    
    LIKEADRAGONISHIN_API FThrowParam();
};

