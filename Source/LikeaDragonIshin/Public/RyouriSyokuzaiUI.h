#pragma once
#include "CoreMinimal.h"
#include "RyouriSyokuzaiUI.generated.h"

USTRUCT(BlueprintType)
struct FRyouriSyokuzaiUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText needNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText totalNum;
    
    LIKEADRAGONISHIN_API FRyouriSyokuzaiUI();
};

