#pragma once
#include "CoreMinimal.h"
#include "TickableGameInstanceSubsystem.h"
#include "DebugGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class UDebugGameInstanceSubsystem : public UTickableGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UDebugGameInstanceSubsystem();

};

