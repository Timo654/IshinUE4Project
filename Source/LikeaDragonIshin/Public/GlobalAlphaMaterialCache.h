#pragma once
#include "CoreMinimal.h"
#include "GlobalAlphaMaterialInfo.h"
#include "GlobalAlphaMaterialCache.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FGlobalAlphaMaterialCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMeshComponent> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FGlobalAlphaMaterialInfo> Materials;
    
    FGlobalAlphaMaterialCache();
};

