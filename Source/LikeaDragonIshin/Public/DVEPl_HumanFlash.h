#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_HumanFlash.generated.h"

class UEffectRimFlashComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_HumanFlash : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEffectRimFlashComponent* RimFlash;
    
public:
    UDVEPl_HumanFlash();

};

