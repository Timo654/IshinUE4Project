#pragma once
#include "CoreMinimal.h"
#include "UIMainMenuKyoukaAbilityData.h"
#include "UIMainMenuKyoukaAbilityDataArray.generated.h"

USTRUCT(BlueprintType)
struct FUIMainMenuKyoukaAbilityDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIMainMenuKyoukaAbilityData> ary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLimitBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDesabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPressed;
    
    LIKEADRAGONISHIN_API FUIMainMenuKyoukaAbilityDataArray();
};

