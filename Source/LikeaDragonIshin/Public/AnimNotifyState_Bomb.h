#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "BombInfoID.h"
#include "AnimNotifyState_Bomb.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class LIKEADRAGONISHIN_API UAnimNotifyState_Bomb : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBombInfoID m_id;
    
public:
    UAnimNotifyState_Bomb();

};

