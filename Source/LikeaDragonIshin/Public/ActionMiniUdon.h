#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ActionMiniUdon.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionMiniUdon : public UActionMinigame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
public:
    UActionMiniUdon();

};

