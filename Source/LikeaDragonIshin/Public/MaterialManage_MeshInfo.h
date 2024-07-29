#pragma once
#include "CoreMinimal.h"
#include "MaterialManage_MaterialStack.h"
#include "MaterialManage_MeshInfo.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FMaterialManage_MeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FMaterialManage_MaterialStack> Materials;
    
    FMaterialManage_MeshInfo();
};

