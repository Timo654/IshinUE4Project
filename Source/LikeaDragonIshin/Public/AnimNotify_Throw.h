#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ThrowParam.h"
#include "AnimNotify_Throw.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class LIKEADRAGONISHIN_API UAnimNotify_Throw : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowParam ThrowParam_;
    
public:
    UAnimNotify_Throw();

};

