#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "CActionEffectFinishBattle.generated.h"

class APostEffectColorCorrecction;

UCLASS(Blueprintable)
class UCActionEffectFinishBattle : public UActionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostEffectColorCorrecction* ColorCorrecction;
    
public:
    UCActionEffectFinishBattle();

};

