#pragma once
#include "CoreMinimal.h"
#include "WindowChoiceItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FWindowChoiceItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDisabled;
    
    LIKEADRAGONISHIN_API FWindowChoiceItemInfo();
};

