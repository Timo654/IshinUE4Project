#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DiEventReactorAnimation.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDiEventReactorAnimation : public UActorComponent {
    GENERATED_BODY()
public:
    UDiEventReactorAnimation(const FObjectInitializer& ObjectInitializer);

};

