#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "Devil2CameraActorBase.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API ADevil2CameraActorBase : public ACameraActor {
    GENERATED_BODY()
public:
    ADevil2CameraActorBase(const FObjectInitializer& ObjectInitializer);

};

