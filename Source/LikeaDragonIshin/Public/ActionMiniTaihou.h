#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ActionMiniTaihou.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionMiniTaihou : public UActionMinigame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
public:
    UActionMiniTaihou();

};

