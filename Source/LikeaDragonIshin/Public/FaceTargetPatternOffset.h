#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FaceTargetPatternOffsetWeight.h"
#include "FaceTargetPatternOffset.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FFaceTargetPatternOffset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceTargetPatternOffsetWeight pat_anger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceTargetPatternOffsetWeight pat_joy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceTargetPatternOffsetWeight pat_joy2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceTargetPatternOffsetWeight pat_surp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceTargetPatternOffsetWeight pat_dead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceTargetPatternOffsetWeight pat_other;
    
    FFaceTargetPatternOffset();
};

