#pragma once
#include "CoreMinimal.h"
#include "BattleTargetDecideComponentEnemy.h"
#include "BattleTargetDecideComponentAlly.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UBattleTargetDecideComponentAlly : public UBattleTargetDecideComponentEnemy {
    GENERATED_BODY()
public:
    UBattleTargetDecideComponentAlly(const FObjectInitializer& ObjectInitializer);

};

