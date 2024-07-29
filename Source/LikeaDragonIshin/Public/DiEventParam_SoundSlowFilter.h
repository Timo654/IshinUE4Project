#pragma once
#include "CoreMinimal.h"
#include "DiEventParam_SoundSlowFilter.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParam_SoundSlowFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> anim;
    
    LIKEADRAGONISHIN_API FDiEventParam_SoundSlowFilter();
};

