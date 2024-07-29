#pragma once
#include "CoreMinimal.h"
#include "EPadButton.h"
#include "ButtonUIInfo.generated.h"

USTRUCT(BlueprintType)
struct FButtonUIInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPadButton Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText text;
    
    LIKEADRAGONISHIN_API FButtonUIInfo();
};

