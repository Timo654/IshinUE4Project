#pragma once
#include "CoreMinimal.h"
#include "_EenmyTarget.generated.h"

class UCanvasPanelSlot;
class UMacanUserWidget;
class UMacanUserWidget_BtlBossDisp;
class UMacanUserWidget_BtlEnemySubLife;

USTRUCT(BlueprintType)
struct F_EenmyTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlEnemySubLife* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* osm_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* osm_slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlBossDisp* BossDisp_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* BossDisp_slot;
    
    LIKEADRAGONISHIN_API F_EenmyTarget();
};

