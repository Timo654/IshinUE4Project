#pragma once
#include "CoreMinimal.h"
#include "ECorrelationArrowData.h"
#include "MacanUserWidget.h"
#include "MUW_MainMenuCorrelationArrow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMUW_MainMenuCorrelationArrow : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECorrelationArrowData arrowType;
    
    UMUW_MainMenuCorrelationArrow();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetArrowInfo();
    
};

