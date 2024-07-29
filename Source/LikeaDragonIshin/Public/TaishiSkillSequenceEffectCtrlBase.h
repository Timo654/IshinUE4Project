#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TaishiSkillSequenceEffectCtrlBase.generated.h"

class ALevelSequenceActor;

UCLASS(Abstract, Blueprintable)
class LIKEADRAGONISHIN_API UTaishiSkillSequenceEffectCtrlBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALevelSequenceActor*> m_sequence_actor_array;
    
public:
    UTaishiSkillSequenceEffectCtrlBase();

};

