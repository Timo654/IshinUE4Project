#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "BattleCameraShakeId.h"
#include "AnimNotifyState_CamShakeLoop_ver2.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class LIKEADRAGONISHIN_API UAnimNotifyState_CamShakeLoop_ver2 : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleCameraShakeId CameraShakeId_;
    
public:
    UAnimNotifyState_CamShakeLoop_ver2();

};

