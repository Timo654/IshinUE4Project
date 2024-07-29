#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MacanUserWidget.h"
#include "MUW_CorrelationCursor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMUW_CorrelationCursor : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D absolutePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D renderTransformPosition;
    
    UMUW_CorrelationCursor();

};

