#pragma once
#include "CoreMinimal.h"
#include "EFighterCommandTriggerAllParam.h"
#include "FighterCommandSetCond.generated.h"

USTRUCT(BlueprintType)
struct FFighterCommandSetCond {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFighterCommandTriggerAllParam Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParamInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParamString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNot;
    
    LIKEADRAGONISHIN_API FFighterCommandSetCond();
};

