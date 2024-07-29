#pragma once
#include "CoreMinimal.h"
#include "WandererAliasList.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FWandererAliasList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FWandererAliasList();
};

