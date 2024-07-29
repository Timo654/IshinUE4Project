#pragma once
#include "CoreMinimal.h"
#include "EBtlStyle.h"
#include "TaishiCardDataLayout.h"
#include "TaishiCardDataList.generated.h"

USTRUCT(BlueprintType)
struct FTaishiCardDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlStyle, FTaishiCardDataLayout> layouts;
    
    LIKEADRAGONISHIN_API FTaishiCardDataList();
};

