#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputDeviceListener.generated.h"

class UAppPad;
class UInputDeviceSlot;

UCLASS(Blueprintable)
class UInputDeviceListener : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceSlot* m_pDevice;
    
public:
    UInputDeviceListener();

    UFUNCTION(BlueprintCallable)
    UAppPad* GetScenePad(int32 Scene);
    
    UFUNCTION(BlueprintCallable)
    UAppPad* GetPad();
    
};

