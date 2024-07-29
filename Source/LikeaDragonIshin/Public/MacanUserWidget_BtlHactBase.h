#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlHactBase.generated.h"

class UMacanUserWidget_BtlHactGaugeMain;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlHactBase : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlHactGaugeMain* elem_gauge_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlHactGaugeMain* elem_gauge_val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlHactGaugeMain* elem_gauge_delta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlHactGaugeMain* elem_gauge_delta_under;
    
    UMacanUserWidget_BtlHactBase();

    UFUNCTION(BlueprintCallable)
    void setVal(float Val, float Delta);
    
};

