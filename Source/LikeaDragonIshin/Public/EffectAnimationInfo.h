#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EffectAnimationInfo.generated.h"

USTRUCT(BlueprintType)
struct FEffectAnimationInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AnimationPath;
    
    LIKEADRAGONISHIN_API FEffectAnimationInfo();
};

