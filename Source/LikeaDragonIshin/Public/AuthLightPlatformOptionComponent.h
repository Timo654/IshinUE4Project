#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AuthLightPlatformOptionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UAuthLightPlatformOptionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UAuthLightPlatformOptionComponent(const FObjectInitializer& ObjectInitializer);

};

