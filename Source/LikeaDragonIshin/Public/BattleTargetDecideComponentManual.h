#pragma once
#include "CoreMinimal.h"
#include "BattleTargetDecideComponent.h"
#include "BattleTargetDecideComponentManual.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UBattleTargetDecideComponentManual : public UBattleTargetDecideComponent {
    GENERATED_BODY()
public:
    UBattleTargetDecideComponentManual(const FObjectInitializer& ObjectInitializer);

};

