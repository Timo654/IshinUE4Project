#pragma once
#include "CoreMinimal.h"
#include "AnimInstance_Fighter.h"
#include "AnimInstance_Player.generated.h"

UCLASS(Blueprintable, NonTransient)
class LIKEADRAGONISHIN_API UAnimInstance_Player : public UAnimInstance_Fighter {
    GENERATED_BODY()
public:
    UAnimInstance_Player();

};

