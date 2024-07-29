#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_BtlHactGaugeEff.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlHactGaugeEff : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* transPanel;
    
    UMacanUserWidget_BtlHactGaugeEff();

};

