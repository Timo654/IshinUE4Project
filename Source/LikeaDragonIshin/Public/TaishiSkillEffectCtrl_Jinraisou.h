#pragma once
#include "CoreMinimal.h"
#include "ChildThunder.h"
#include "TaishiSkillEffectCtrlBase.h"
#include "TaishiSkillEffectCtrl_Jinraisou.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UTaishiSkillEffectCtrl_Jinraisou : public UTaishiSkillEffectCtrlBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FChildThunder> m_child_bullet_paticle_array;
    
public:
    UTaishiSkillEffectCtrl_Jinraisou();

};

