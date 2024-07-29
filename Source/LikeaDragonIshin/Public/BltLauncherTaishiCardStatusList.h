#pragma once
#include "CoreMinimal.h"
#include "TaishiCardState.h"
#include "BltLauncherTaishiCardStatusList.generated.h"

USTRUCT(BlueprintType)
struct FBltLauncherTaishiCardStatusList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTaishiCardState> card_status;
    
    LIKEADRAGONISHIN_API FBltLauncherTaishiCardStatusList();
};

