#pragma once
#include "CoreMinimal.h"
#include "ButtonUIPlatform.generated.h"

USTRUCT(BlueprintType)
struct FButtonUIPlatform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Texture;
    
    LIKEADRAGONISHIN_API FButtonUIPlatform();
};

