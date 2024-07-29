#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DiEventParams_Fade.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_Fade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor _fadeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _setFadeIgnoreBezier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _setFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _setFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> anim;
    
    LIKEADRAGONISHIN_API FDiEventParams_Fade();
};

