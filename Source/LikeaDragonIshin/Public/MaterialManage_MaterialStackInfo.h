#pragma once
#include "CoreMinimal.h"
#include "MaterialManage_MaterialStackInfo.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FMaterialManage_MaterialStackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Priotiry;
    
    FMaterialManage_MaterialStackInfo();
};

