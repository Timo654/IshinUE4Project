#pragma once
#include "CoreMinimal.h"
#include "BattleTargetDecideComponent.h"
#include "BattleTargetDecideComponentChase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UBattleTargetDecideComponentChase : public UBattleTargetDecideComponent {
    GENERATED_BODY()
public:
    UBattleTargetDecideComponentChase(const FObjectInitializer& ObjectInitializer);

};

