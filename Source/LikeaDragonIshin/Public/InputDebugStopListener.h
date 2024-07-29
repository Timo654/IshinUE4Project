#pragma once
#include "CoreMinimal.h"
#include "InputDeviceListener.h"
#include "InputDebugStopListener.generated.h"

UCLASS(Blueprintable)
class UInputDebugStopListener : public UInputDeviceListener {
    GENERATED_BODY()
public:
    UInputDebugStopListener();

};

