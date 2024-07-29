#pragma once
#include "CoreMinimal.h"
#include "ActionNichibuBase.h"
#include "ActionNichibuNormal.generated.h"

class APostEffectColorCorrecction;

UCLASS(Blueprintable)
class UActionNichibuNormal : public UActionNichibuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APostEffectColorCorrecction* ColorCorrecction;
    
public:
    UActionNichibuNormal();

};

