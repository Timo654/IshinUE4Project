#pragma once
#include "CoreMinimal.h"
#include "EUICardLayout.h"
#include "TaishiCardData.h"
#include "TaishiCardDataLayout.generated.h"

USTRUCT(BlueprintType)
struct FTaishiCardDataLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUICardLayout, FTaishiCardData> cards;
    
    LIKEADRAGONISHIN_API FTaishiCardDataLayout();
};

