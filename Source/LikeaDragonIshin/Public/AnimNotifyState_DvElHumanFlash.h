#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_DiEventElement.h"
#include "DiEventParams_HumanFlash.h"
#include "AnimNotifyState_DvElHumanFlash.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class LIKEADRAGONISHIN_API UAnimNotifyState_DvElHumanFlash : public UAnimNotifyState_DiEventElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_HumanFlash Param;
    
    UAnimNotifyState_DvElHumanFlash();

};

