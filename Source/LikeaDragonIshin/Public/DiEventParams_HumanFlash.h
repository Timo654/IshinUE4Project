#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_HumanFlashDrawInfo.h"
#include "EHumanFlashConds.h"
#include "EHumanFlashTypes.h"
#include "DiEventParams_HumanFlash.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_HumanFlash {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHumanFlashTypes _humanFlashType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHumanFlashConds _cond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _nodeFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _fadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _fadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_HumanFlashDrawInfo _drawInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _colorHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Loop;
    
    LIKEADRAGONISHIN_API FDiEventParams_HumanFlash();
};

