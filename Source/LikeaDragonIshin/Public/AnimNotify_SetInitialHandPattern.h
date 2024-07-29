#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_SetInitialHandPattern.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class LIKEADRAGONISHIN_API UAnimNotify_SetInitialHandPattern : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLastFrame;
    
    UAnimNotify_SetInitialHandPattern();

};

