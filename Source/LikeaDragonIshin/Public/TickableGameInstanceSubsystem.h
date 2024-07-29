#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TickableGameInstanceSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class UTickableGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UTickableGameInstanceSubsystem();

};

