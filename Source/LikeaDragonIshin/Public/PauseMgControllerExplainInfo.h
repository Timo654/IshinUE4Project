#pragma once
#include "CoreMinimal.h"
#include "EPadButton.h"
#include "PauseMgControllerExplainInfo.generated.h"

USTRUCT(BlueprintType)
struct FPauseMgControllerExplainInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPadButton defaultButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText explainText;
    
    LIKEADRAGONISHIN_API FPauseMgControllerExplainInfo();
};

