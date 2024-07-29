#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OichokabuCardNumberInfo.generated.h"

USTRUCT(BlueprintType)
struct FOichokabuCardNumberInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isPrint;
    
    LIKEADRAGONISHIN_API FOichokabuCardNumberInfo();
};

