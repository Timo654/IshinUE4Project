#pragma once
#include "CoreMinimal.h"
#include "FighterChangeCommandInfo.h"
#include "FighterCommandInfo_ModeReady.generated.h"

class UFighterCommandSetDataAsset;

USTRUCT(BlueprintType)
struct FFighterCommandInfo_ModeReady {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFighterCommandSetDataAsset*> PreRefOtherCommandSetTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFighterChangeCommandInfo> ChangeCommandInfoTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFighterCommandSetDataAsset*> AfterRefOtherCommandSetTbl;
    
    LIKEADRAGONISHIN_API FFighterCommandInfo_ModeReady();
};

