#pragma once
#include "CoreMinimal.h"
#include "FighterComponentBase.h"
#include "BattleTargetDecideComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UBattleTargetDecideComponent : public UFighterComponentBase {
    GENERATED_BODY()
public:
    UBattleTargetDecideComponent(const FObjectInitializer& ObjectInitializer);

};

