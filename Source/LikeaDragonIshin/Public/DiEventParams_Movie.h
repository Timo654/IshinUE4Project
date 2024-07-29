#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_Movie.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_Movie {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MovieName;
    
    LIKEADRAGONISHIN_API FDiEventParams_Movie();
};

