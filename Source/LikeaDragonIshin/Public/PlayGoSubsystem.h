#pragma once
#include "CoreMinimal.h"
#include "TickableGameInstanceSubsystem.h"
#include "PlayGoSubsystem.generated.h"

UCLASS(Blueprintable)
class UPlayGoSubsystem : public UTickableGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPlayGoSubsystem();

};

