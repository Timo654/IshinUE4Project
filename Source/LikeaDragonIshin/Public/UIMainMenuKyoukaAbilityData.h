#pragma once
#include "CoreMinimal.h"
#include "EUIMMKyoukaUnitState.h"
#include "UIMainMenuKyoukaAbilityData.generated.h"

USTRUCT(BlueprintType)
struct FUIMainMenuKyoukaAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDesabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIMMKyoukaUnitState unitState;
    
    LIKEADRAGONISHIN_API FUIMainMenuKyoukaAbilityData();
};

