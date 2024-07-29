#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "_BossDispRect.generated.h"

USTRUCT(BlueprintType)
struct F_BossDispRect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D allignment;
    
    LIKEADRAGONISHIN_API F_BossDispRect();
};

