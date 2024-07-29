#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionStaffrollObject.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionStaffrollObject : public UActionObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* listener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_BgmTime;
    
    UActionStaffrollObject();

};

