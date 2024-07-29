#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_SoundStream.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_SoundStream {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bgm_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_stop;
    
    LIKEADRAGONISHIN_API FDiEventParams_SoundStream();
};

