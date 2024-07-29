#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HactAnimInstanceSetting.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FHactAnimInstanceSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverWriteFaceTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsingMotionFaceTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsingMotionFaceTargetAddParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionFaceTargetToParamWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAutoWrinkle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrinkleOffsetWeight;
    
    FHactAnimInstanceSetting();
};

