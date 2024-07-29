#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MacanUserWidget_CardMainCommonData.generated.h"

USTRUCT(BlueprintType)
struct FMacanUserWidget_CardMainCommonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor visible_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor disable_color;
    
    LIKEADRAGONISHIN_API FMacanUserWidget_CardMainCommonData();
};

