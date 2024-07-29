#pragma once
#include "CoreMinimal.h"
#include "PokerPlayerBase.h"
#include "PokerPlayer.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class APokerPlayer : public APokerPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_plistener;
    
public:
    APokerPlayer(const FObjectInitializer& ObjectInitializer);

};

