#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlValuation_ValuationText.generated.h"

class UMacanUserWidget_SimpleSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlValuation_ValuationText : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_SimpleSwitcher* elem_rank00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_SimpleSwitcher* elem_rank01;
    
    UMacanUserWidget_BtlValuation_ValuationText();

};

