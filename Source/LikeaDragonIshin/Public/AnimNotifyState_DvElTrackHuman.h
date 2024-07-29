#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_DiEventElement.h"
#include "DiEventParams_TrackHuman.h"
#include "AnimNotifyState_DvElTrackHuman.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class LIKEADRAGONISHIN_API UAnimNotifyState_DvElTrackHuman : public UAnimNotifyState_DiEventElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_TrackHuman Param;
    
    UAnimNotifyState_DvElTrackHuman();

};

