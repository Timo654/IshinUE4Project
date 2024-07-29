#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "EEffectEventType.h"
#include "ActEffectEventPlay.generated.h"

class AEffectEvent;

UCLASS(Blueprintable)
class UActEffectEventPlay : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEffectEventType, AEffectEvent*> EffectEvents;
    
public:
    UActEffectEventPlay();

};

