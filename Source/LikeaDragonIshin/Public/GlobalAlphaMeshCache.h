#pragma once
#include "CoreMinimal.h"
#include "GlobalAlphaMaterialCache.h"
#include "GlobalAlphaMeshCache.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FGlobalAlphaMeshCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGlobalAlphaMaterialCache> Meshes;
    
    FGlobalAlphaMeshCache();
};

