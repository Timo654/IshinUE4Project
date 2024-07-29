#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionNichibuBase.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionNichibuBase : public UActionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_padListener;
    
public:
    UActionNichibuBase();

};

