#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FukubikiCameraBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFukubikiCameraBase : public UActorComponent {
    GENERATED_BODY()
public:
    UFukubikiCameraBase(const FObjectInitializer& ObjectInitializer);

};

