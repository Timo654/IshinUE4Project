#pragma once
#include "CoreMinimal.h"
#include "EBtlStyle.h"
#include "TaishiCardStatusLayout.h"
#include "TaishiCardStatusList.generated.h"

USTRUCT(BlueprintType)
struct FTaishiCardStatusList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlStyle, FTaishiCardStatusLayout> layouts;
    
    LIKEADRAGONISHIN_API FTaishiCardStatusList();
};

