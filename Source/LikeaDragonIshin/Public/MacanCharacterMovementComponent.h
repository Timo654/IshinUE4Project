#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MacanCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UMacanCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UMacanCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

};

