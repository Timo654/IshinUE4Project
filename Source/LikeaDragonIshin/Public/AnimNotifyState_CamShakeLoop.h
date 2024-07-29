#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_TimingDataCommonData.h"
#include "AnimNotifyState_CamShakeLoop.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class LIKEADRAGONISHIN_API UAnimNotifyState_CamShakeLoop : public UAnimNotifyState_TimingDataCommonData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime_;
    
public:
    UAnimNotifyState_CamShakeLoop();

};

