#pragma once
#include "CoreMinimal.h"
#include "BattleTargetDecideComponent.h"
#include "BattleTargetDecideComponentEnemy.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UBattleTargetDecideComponentEnemy : public UBattleTargetDecideComponent {
    GENERATED_BODY()
public:
    UBattleTargetDecideComponentEnemy(const FObjectInitializer& ObjectInitializer);

};

