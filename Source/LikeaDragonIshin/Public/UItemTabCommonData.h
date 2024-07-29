#pragma once
#include "CoreMinimal.h"
#include "UItemTabCommonData.generated.h"

USTRUCT(BlueprintType)
struct FUItemTabCommonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 badgeNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDisable;
    
    LIKEADRAGONISHIN_API FUItemTabCommonData();
};

