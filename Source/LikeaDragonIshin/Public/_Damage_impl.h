#pragma once
#include "CoreMinimal.h"
#include "_Damage_impl.generated.h"

class UCanvasPanelSlot;
class UMacanUserWidget_DamageNumDisp;

USTRUCT(BlueprintType)
struct F_Damage_impl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_DamageNumDisp* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* Slot;
    
    LIKEADRAGONISHIN_API F_Damage_impl();
};

