#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UISwitchingSubtitleBack.generated.h"

USTRUCT(BlueprintType)
struct FUISwitchingSubtitleBack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor noneBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor thinBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor darkBack;
    
    LIKEADRAGONISHIN_API FUISwitchingSubtitleBack();
};

