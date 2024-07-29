#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ActionMiniKakashi.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class UActionMiniKakashi : public UActionMinigame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
public:
    UActionMiniKakashi();

};

