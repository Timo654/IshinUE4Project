#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ActionMiniMakiwari.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionMiniMakiwari : public UActionMinigame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
public:
    UActionMiniMakiwari();

};

