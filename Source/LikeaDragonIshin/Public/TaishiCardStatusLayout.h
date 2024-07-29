#pragma once
#include "CoreMinimal.h"
#include "EUICardLayout.h"
#include "TaishiCardState.h"
#include "TaishiCardStatusLayout.generated.h"

USTRUCT(BlueprintType)
struct FTaishiCardStatusLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUICardLayout, FTaishiCardState> cards;
    
    LIKEADRAGONISHIN_API FTaishiCardStatusLayout();
};

