#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_DiEventElement.h"
#include "DiEventParams_Ptc.h"
#include "AnimNotifyState_DvElParticle.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class LIKEADRAGONISHIN_API UAnimNotifyState_DvElParticle : public UAnimNotifyState_DiEventElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_Ptc Param;
    
    UAnimNotifyState_DvElParticle();

};

