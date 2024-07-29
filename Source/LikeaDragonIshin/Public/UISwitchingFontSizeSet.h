#pragma once
#include "CoreMinimal.h"
#include "UISwitchingFontSizeSet.generated.h"

USTRUCT(BlueprintType)
struct FUISwitchingFontSizeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sizeSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sizeMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sizeLarge;
    
    LIKEADRAGONISHIN_API FUISwitchingFontSizeSet();
};

