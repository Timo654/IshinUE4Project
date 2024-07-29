#pragma once
#include "CoreMinimal.h"
#include "EPadButton.h"
#include "EWBPButtoniconType.h"
#include "UIBtnGuideItemData.generated.h"

USTRUCT(BlueprintType)
struct FUIBtnGuideItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWBPButtoniconType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPadButton padBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText texttabName;
    
    LIKEADRAGONISHIN_API FUIBtnGuideItemData();
};

