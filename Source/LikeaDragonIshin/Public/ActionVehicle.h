#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionVehicle.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionVehicle : public UActionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
public:
    UActionVehicle();

};

