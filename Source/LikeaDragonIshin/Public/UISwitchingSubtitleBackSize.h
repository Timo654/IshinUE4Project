#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UISwitchingSubtitleBackSize.generated.h"

USTRUCT(BlueprintType)
struct FUISwitchingSubtitleBackSize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D smallSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D normalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D bigSize;
    
    LIKEADRAGONISHIN_API FUISwitchingSubtitleBackSize();
};

