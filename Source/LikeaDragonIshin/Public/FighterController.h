#pragma once
#include "CoreMinimal.h"
#include "InputDeviceListener.h"
#include "FighterController.generated.h"

class ADevil2Human;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UFighterController : public UInputDeviceListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADevil2Human* Fighter_;
    
public:
    UFighterController();

};

