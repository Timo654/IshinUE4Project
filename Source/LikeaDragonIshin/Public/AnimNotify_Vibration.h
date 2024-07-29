#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_TimingDataCommonData.h"
#include "AnimNotify_Vibration.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class LIKEADRAGONISHIN_API UAnimNotify_Vibration : public UAnimNotify_TimingDataCommonData {
    GENERATED_BODY()
public:
    UAnimNotify_Vibration();

};

