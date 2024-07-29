#pragma once
#include "CoreMinimal.h"
#include "BattleTargetDecideComponent.h"
#include "BattleTargetDecideComponentPlayer.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UBattleTargetDecideComponentPlayer : public UBattleTargetDecideComponent {
    GENERATED_BODY()
public:
    UBattleTargetDecideComponentPlayer(const FObjectInitializer& ObjectInitializer);

};

