#pragma once
#include "CoreMinimal.h"
#include "InputDeviceListener.h"
#include "DebugCameraListener.generated.h"

UCLASS(Blueprintable)
class UDebugCameraListener : public UInputDeviceListener {
    GENERATED_BODY()
public:
    UDebugCameraListener();

};

