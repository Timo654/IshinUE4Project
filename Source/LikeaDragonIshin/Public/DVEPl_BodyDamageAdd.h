#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_BodyDamageAdd.generated.h"

class UEffectBodyDamageComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_BodyDamageAdd : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEffectBodyDamageComponent* EffectBodyDamage;
    
public:
    UDVEPl_BodyDamageAdd();

};

