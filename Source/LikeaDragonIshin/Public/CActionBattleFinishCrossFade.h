#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "CActionBattleFinishCrossFade.generated.h"

class AEffectInk;

UCLASS(Blueprintable)
class UCActionBattleFinishCrossFade : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEffectInk* EffectInk;
    
public:
    UCActionBattleFinishCrossFade();

};

