#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_DiEventElement.h"
#include "DiEventParams_AfterImage.h"
#include "AnimNotifyState_DvElAfterImage.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class LIKEADRAGONISHIN_API UAnimNotifyState_DvElAfterImage : public UAnimNotifyState_DiEventElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_AfterImage Param;
    
    UAnimNotifyState_DvElAfterImage();

};

