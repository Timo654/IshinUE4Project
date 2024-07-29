#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FighterUpdateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UFighterUpdateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFighterUpdateComponent(const FObjectInitializer& ObjectInitializer);

};

