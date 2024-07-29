#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SkillFireOption.h"
#include "TaishiSkillMagicId.h"
#include "AnimNotify_TaishiSkill_SkillFire.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class LIKEADRAGONISHIN_API UAnimNotify_TaishiSkill_SkillFire : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaishiSkillMagicId SkillMagicId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillFireOption SkillFireOption_;
    
public:
    UAnimNotify_TaishiSkill_SkillFire();

};

