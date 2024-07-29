#pragma once
#include "CoreMinimal.h"
#include "TaishiSkillEffectCtrlBase.h"
#include "TaishiSkillEffectCtrl_Jigentou.generated.h"

class ADevil2Human;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UTaishiSkillEffectCtrl_Jigentou : public UTaishiSkillEffectCtrlBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADevil2Human*> m_out_ignore;
    
public:
    UTaishiSkillEffectCtrl_Jigentou();

};

