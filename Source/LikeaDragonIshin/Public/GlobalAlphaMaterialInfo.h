#pragma once
#include "CoreMinimal.h"
#include "GlobalAlphaMaterialInfo.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FGlobalAlphaMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMaterialInstanceDynamic> FadeMaterial;
    
    FGlobalAlphaMaterialInfo();
};

