#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_StageObject.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_StageObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _stageObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _dispStageObject;
    
    LIKEADRAGONISHIN_API FDiEventParams_StageObject();
};

