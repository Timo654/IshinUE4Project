#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TaishiSkillEffectCtrlBase.generated.h"

class AParticle;

UCLASS(Abstract, Blueprintable)
class LIKEADRAGONISHIN_API UTaishiSkillEffectCtrlBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AParticle*> m_particle_array;
    
public:
    UTaishiSkillEffectCtrlBase();

};

