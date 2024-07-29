#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_TimingDataCommonData.h"
#include "AnimNotifyState_Input.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class LIKEADRAGONISHIN_API UAnimNotifyState_Input : public UAnimNotifyState_TimingDataCommonData {
    GENERATED_BODY()
public:
    UAnimNotifyState_Input();

};

