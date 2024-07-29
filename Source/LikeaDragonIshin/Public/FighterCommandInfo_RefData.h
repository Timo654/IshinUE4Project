#pragma once
#include "CoreMinimal.h"
#include "EFighterCommandMode.h"
#include "FighterCommandInfo_RefData.generated.h"

class UFighterCommandSetDataAsset;

USTRUCT(BlueprintType)
struct FFighterCommandInfo_RefData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFighterCommandMode mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFighterCommandSetDataAsset* RefCmdSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RefCmdID;
    
    LIKEADRAGONISHIN_API FFighterCommandInfo_RefData();
};

