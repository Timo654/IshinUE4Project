#pragma once
#include "CoreMinimal.h"
#include "TaishiCardData.h"
#include "TaishiCardState.h"
#include "ComposeMaterialDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FComposeMaterialDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaishiCardData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaishiCardState State;
    
    LIKEADRAGONISHIN_API FComposeMaterialDataStruct();
};

