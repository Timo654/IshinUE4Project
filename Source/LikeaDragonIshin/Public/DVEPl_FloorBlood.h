#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_FloorBlood.generated.h"

class AEffectBlood;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_FloorBlood : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEffectBlood* EffectBlood;
    
public:
    UDVEPl_FloorBlood();

};

