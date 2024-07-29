#pragma once
#include "CoreMinimal.h"
#include "HactReactorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHactReactorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* attach_parent;
    
    LIKEADRAGONISHIN_API FHactReactorInfo();
};

