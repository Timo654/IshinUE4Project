#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "DamageParam.h"
#include "AnimNotify_Damage.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class LIKEADRAGONISHIN_API UAnimNotify_Damage : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageParam DamageParam_;
    
public:
    UAnimNotify_Damage();

};

