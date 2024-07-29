#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputDeviceSlot.generated.h"

class UAppPad;
class UInputDeviceListener;

UCLASS(Blueprintable)
class UInputDeviceSlot : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UInputDeviceListener*, int32> m_PriorityChangeRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppPad* m_pad;
    
public:
    UInputDeviceSlot();

};

