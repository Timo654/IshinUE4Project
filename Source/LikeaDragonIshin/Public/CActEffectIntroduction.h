#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "CActEffectIntroduction.generated.h"

class APostEffectColorCorrecction;
class APostEffectGradation;

UCLASS(Blueprintable)
class UCActEffectIntroduction : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostEffectColorCorrecction* ColorCorrecction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostEffectGradation* Gradation;
    
public:
    UCActEffectIntroduction();

};

