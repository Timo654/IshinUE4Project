#pragma once
#include "CoreMinimal.h"
#include "BtlZetsugiAimData.generated.h"

class UCanvasPanelSlot;
class UMacanUserWidget;

USTRUCT(BlueprintType)
struct FBtlZetsugiAimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* Slot;
    
    LIKEADRAGONISHIN_API FBtlZetsugiAimData();
};

