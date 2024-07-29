#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "CActionOtazunemono.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UCActionOtazunemono : public UActionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_pInputListener;
    
public:
    UCActionOtazunemono();

};

