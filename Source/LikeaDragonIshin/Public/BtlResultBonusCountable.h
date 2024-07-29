#pragma once
#include "CoreMinimal.h"
#include "BtlResultBonusCountable.generated.h"

USTRUCT(BlueprintType)
struct FBtlResultBonusCountable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    LIKEADRAGONISHIN_API FBtlResultBonusCountable();
};

