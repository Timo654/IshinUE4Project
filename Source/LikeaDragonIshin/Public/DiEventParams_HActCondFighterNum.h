#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HActCondFighterNum.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HActCondFighterNum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlagNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotFlag;
    
    LIKEADRAGONISHIN_API FDiEventParams_HActCondFighterNum();
};

