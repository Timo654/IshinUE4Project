#pragma once
#include "CoreMinimal.h"
#include "MngNichibuBGMDetail.generated.h"

USTRUCT(BlueprintType)
struct FMngNichibuBGMDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText modeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 highScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText rankText;
    
    LIKEADRAGONISHIN_API FMngNichibuBGMDetail();
};

