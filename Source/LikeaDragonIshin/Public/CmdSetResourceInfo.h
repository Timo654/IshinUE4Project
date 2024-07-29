#pragma once
#include "CoreMinimal.h"
#include "CmdSetResourceInfo.generated.h"

class UFighterCommandSetDataAsset;

USTRUCT(BlueprintType)
struct FCmdSetResourceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFighterCommandSetDataAsset* pData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UFighterCommandSetDataAsset*> vRefCmdSet;
    
    LIKEADRAGONISHIN_API FCmdSetResourceInfo();
};

