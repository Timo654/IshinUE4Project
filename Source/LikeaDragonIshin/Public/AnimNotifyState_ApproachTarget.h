#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ApproachTargetData.h"
#include "AnimNotifyState_ApproachTarget.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class LIKEADRAGONISHIN_API UAnimNotifyState_ApproachTarget : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApproachTargetData m_ApproachData;
    
public:
    UAnimNotifyState_ApproachTarget();

};

