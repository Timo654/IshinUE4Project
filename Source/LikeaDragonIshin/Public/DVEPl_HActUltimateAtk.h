#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_HActUltimateAtk.generated.h"

class UInputDeviceListener;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_HActUltimateAtk : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputDeviceListener* m_listener;
    
public:
    UDVEPl_HActUltimateAtk();

};

