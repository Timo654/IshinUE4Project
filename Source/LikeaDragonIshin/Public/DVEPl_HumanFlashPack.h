#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_HumanFlashPack.generated.h"

class UEffectRimFlashComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_HumanFlashPack : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEffectRimFlashComponent* RimFlash;
    
public:
    UDVEPl_HumanFlashPack();

};

