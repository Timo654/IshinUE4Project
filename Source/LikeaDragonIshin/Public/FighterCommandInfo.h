#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFighterCommandMode.h"
#include "FighterChangeCommandInfo.h"
#include "FighterCommandInfo.generated.h"

USTRUCT(BlueprintType)
struct FFighterCommandInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFighterCommandMode mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MontagePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFighterChangeCommandInfo> ChangeCommandInfoTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSync;
    
    LIKEADRAGONISHIN_API FFighterCommandInfo();
};

