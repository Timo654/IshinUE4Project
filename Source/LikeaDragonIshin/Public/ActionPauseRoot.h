#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionPauseRoot.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionPauseRoot : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
public:
    UActionPauseRoot();

};

