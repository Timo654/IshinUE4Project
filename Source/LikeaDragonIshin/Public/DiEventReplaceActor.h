#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DiEventReplaceActor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDiEventReplaceActor : public UActorComponent {
    GENERATED_BODY()
public:
    UDiEventReplaceActor(const FObjectInitializer& ObjectInitializer);

};

