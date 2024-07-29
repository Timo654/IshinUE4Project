#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionObjectInputDeviceBase.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionObjectInputDeviceBase : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
public:
    UActionObjectInputDeviceBase();

};

