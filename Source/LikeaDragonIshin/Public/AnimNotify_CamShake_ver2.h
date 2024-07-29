#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "BattleCameraShakeId.h"
#include "AnimNotify_CamShake_ver2.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class LIKEADRAGONISHIN_API UAnimNotify_CamShake_ver2 : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleCameraShakeId CameraShakeId_;
    
public:
    UAnimNotify_CamShake_ver2();

};

