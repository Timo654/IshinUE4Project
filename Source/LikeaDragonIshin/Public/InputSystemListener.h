#pragma once
#include "CoreMinimal.h"
#include "InputDeviceListener.h"
#include "InputSystemListener.generated.h"

UCLASS(Blueprintable)
class UInputSystemListener : public UInputDeviceListener {
    GENERATED_BODY()
public:
    UInputSystemListener();

};

