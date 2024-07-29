#pragma once
#include "CoreMinimal.h"
#include "ERyouriButtonType.h"
#include "RyouriKiruBar.generated.h"

USTRUCT(BlueprintType)
struct FRyouriKiruBar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERyouriButtonType ButtonType;
    
    LIKEADRAGONISHIN_API FRyouriKiruBar();
};

