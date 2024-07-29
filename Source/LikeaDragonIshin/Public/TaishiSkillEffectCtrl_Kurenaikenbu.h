#pragma once
#include "CoreMinimal.h"
#include "TaishiSkillEffectCtrlBase.h"
#include "TaishiSkillEffectCtrl_Kurenaikenbu.generated.h"

class UTaishiSkillEffectCtrl_Kurenaikenbu_Bullet;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UTaishiSkillEffectCtrl_Kurenaikenbu : public UTaishiSkillEffectCtrlBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTaishiSkillEffectCtrl_Kurenaikenbu_Bullet*> m_bullet_array;
    
public:
    UTaishiSkillEffectCtrl_Kurenaikenbu();

};

