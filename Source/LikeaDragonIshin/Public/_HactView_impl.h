#pragma once
#include "CoreMinimal.h"
#include "_HactView_impl.generated.h"

class UCanvasPanelSlot;
class UMacanUserWidget_BtlBossDisp;

USTRUCT(BlueprintType)
struct F_HactView_impl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlBossDisp* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* Slot;
    
    LIKEADRAGONISHIN_API F_HactView_impl();
};

