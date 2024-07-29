#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_DiEventElement.h"
#include "DiEventParams_FloorBlood.h"
#include "AnimNotifyState_DvElFloorBlood.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class LIKEADRAGONISHIN_API UAnimNotifyState_DvElFloorBlood : public UAnimNotifyState_DiEventElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_FloorBlood Param;
    
    UAnimNotifyState_DvElFloorBlood();

};

