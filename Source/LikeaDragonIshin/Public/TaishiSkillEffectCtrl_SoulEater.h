#pragma once
#include "CoreMinimal.h"
#include "TaishiSkillEffectCtrlBase.h"
#include "TaishiSkillEffectCtrl_SoulEater.generated.h"

class UTaishiSkillEffectCtrl_SoulEaterBullet;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UTaishiSkillEffectCtrl_SoulEater : public UTaishiSkillEffectCtrlBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTaishiSkillEffectCtrl_SoulEaterBullet*> m_bullet_array;
    
public:
    UTaishiSkillEffectCtrl_SoulEater();

};

