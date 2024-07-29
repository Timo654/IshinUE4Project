#pragma once
#include "CoreMinimal.h"
#include "EKeyconfigSceneID.h"
#include "TextBlockKeyconfigMatch.h"
#include "TextBlockKeyconfigInfo.generated.h"

USTRUCT(BlueprintType)
struct FTextBlockKeyconfigInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeyconfigSceneID defaultScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextBlockKeyconfigMatch> patterns;
    
    LIKEADRAGONISHIN_API FTextBlockKeyconfigInfo();
};

