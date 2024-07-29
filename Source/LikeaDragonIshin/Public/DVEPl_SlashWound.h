#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_SlashWound.generated.h"

class UEffectSlashWoundComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_SlashWound : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEffectSlashWoundComponent* EffectSlashWound;
    
public:
    UDVEPl_SlashWound();

};

