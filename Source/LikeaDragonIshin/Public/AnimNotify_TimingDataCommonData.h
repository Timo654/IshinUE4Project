#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_TimingDataCommonData.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class LIKEADRAGONISHIN_API UAnimNotify_TimingDataCommonData : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommonData_;
    
public:
    UAnimNotify_TimingDataCommonData();

};

