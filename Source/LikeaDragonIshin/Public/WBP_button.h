#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EPadButton.h"
#include "WBP_button.generated.h"

USTRUCT(BlueprintType)
struct FWBP_button {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPadButton Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey kbdKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool canEdit;
    
    LIKEADRAGONISHIN_API FWBP_button();
};

