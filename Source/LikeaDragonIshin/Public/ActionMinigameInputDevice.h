#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ActionMinigameInputDevice.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionMinigameInputDevice : public UActionMinigame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
public:
    UActionMinigameInputDevice();

};

