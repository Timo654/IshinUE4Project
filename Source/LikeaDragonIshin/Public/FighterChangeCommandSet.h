#pragma once
#include "CoreMinimal.h"
#include "FighterCommandSetCond.h"
#include "FighterChangeCommandSet.generated.h"

class UFighterCommandSetDataAsset;

USTRUCT(BlueprintType)
struct FFighterChangeCommandSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFighterCommandSetDataAsset* CommandSetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFighterCommandSetCond> CondTbl;
    
    LIKEADRAGONISHIN_API FFighterChangeCommandSet();
};

