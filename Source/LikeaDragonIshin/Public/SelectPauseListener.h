#pragma once
#include "CoreMinimal.h"
#include "InputDeviceListener.h"
#include "SelectPauseListener.generated.h"

UCLASS(Blueprintable)
class USelectPauseListener : public UInputDeviceListener {
    GENERATED_BODY()
public:
    USelectPauseListener();

};

