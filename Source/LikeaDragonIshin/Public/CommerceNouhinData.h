#pragma once
#include "CoreMinimal.h"
#include "CommerceNouhinData.generated.h"

USTRUCT(BlueprintType)
struct FCommerceNouhinData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    LIKEADRAGONISHIN_API FCommerceNouhinData();
};

