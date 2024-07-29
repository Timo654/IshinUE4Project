#pragma once
#include "CoreMinimal.h"
#include "MaterialManage_MaterialStackInfo.h"
#include "MaterialManage_MaterialStack.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FMaterialManage_MaterialStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMaterialManage_MaterialStackInfo> Stack;
    
    FMaterialManage_MaterialStack();
};

