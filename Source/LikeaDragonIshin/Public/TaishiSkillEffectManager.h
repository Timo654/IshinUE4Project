#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "TaishiSkillEffectManager.generated.h"

class UTaishiSkillEffectCtrlBase;
class UTaishiSkillSequenceEffectCtrlBase;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API ATaishiSkillEffectManager : public AActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTaishiSkillEffectCtrlBase*> m_effect_ctrl_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTaishiSkillSequenceEffectCtrlBase*> m_sequence_effect_ctrl_table;
    
public:
    ATaishiSkillEffectManager(const FObjectInitializer& ObjectInitializer);

};

