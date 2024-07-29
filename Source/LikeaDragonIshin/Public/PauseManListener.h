#pragma once
#include "CoreMinimal.h"
#include "InputDeviceListener.h"
#include "PauseManListener.generated.h"

UCLASS(Blueprintable)
class UPauseManListener : public UInputDeviceListener {
    GENERATED_BODY()
public:
    UPauseManListener();

};

