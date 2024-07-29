#pragma once
#include "CoreMinimal.h"
#include "EBtlValuation.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlValuation_Valuation.generated.h"

class UMacanUserWidget_BtlValuation_ValuationText;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlValuation_Valuation : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_BtlValuation_ValuationText* elem_valuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget* elem_bg;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlValuation, int32> ValuationDic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerLength;
    
public:
    UMacanUserWidget_BtlValuation_Valuation();

};

