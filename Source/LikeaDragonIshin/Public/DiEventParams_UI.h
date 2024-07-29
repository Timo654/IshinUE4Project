#pragma once
#include "CoreMinimal.h"
#include "DiEventParams_UI.generated.h"

USTRUCT(BlueprintType)
struct FDiEventParams_UI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ui_name;
    
    LIKEADRAGONISHIN_API FDiEventParams_UI();
};

