#pragma once
#include "CoreMinimal.h"
#include "TickableGameInstanceSubsystem.h"
#include "DebugMenuManager.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UDebugMenuManager : public UTickableGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
public:
    UDebugMenuManager();

};

