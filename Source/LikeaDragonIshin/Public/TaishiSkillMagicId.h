#pragma once
#include "CoreMinimal.h"
#include "TaishiSkillMagicId.generated.h"

USTRUCT(BlueprintType)
struct LIKEADRAGONISHIN_API FTaishiSkillMagicId {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ID;
    
    FTaishiSkillMagicId();
};

