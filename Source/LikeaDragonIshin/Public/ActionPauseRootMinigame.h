#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionPauseRootMinigame.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionPauseRootMinigame : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
public:
    UActionPauseRootMinigame();

};

