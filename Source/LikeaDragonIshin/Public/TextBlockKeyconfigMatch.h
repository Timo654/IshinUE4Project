#pragma once
#include "CoreMinimal.h"
#include "EKeyconfigSceneID.h"
#include "TextBlockKeyconfigMatch.generated.h"

USTRUCT(BlueprintType)
struct FTextBlockKeyconfigMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeyconfigSceneID Scene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString containWord1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString containWord2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 opt;
    
    LIKEADRAGONISHIN_API FTextBlockKeyconfigMatch();
};

