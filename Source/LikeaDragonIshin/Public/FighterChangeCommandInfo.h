#pragma once
#include "CoreMinimal.h"
#include "FighterCommandSetCond.h"
#include "FighterChangeCommandInfo.generated.h"

class UFighterCommandSetDataAsset;

USTRUCT(BlueprintType)
struct FFighterChangeCommandInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFighterCommandSetDataAsset* RefOtherCommandSetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFighterCommandSetCond> CondTbl;
    
    LIKEADRAGONISHIN_API FFighterChangeCommandInfo();
};

