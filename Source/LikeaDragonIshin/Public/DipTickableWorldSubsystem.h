#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DipTickableWorldSubsystem.generated.h"

UCLASS(Blueprintable)
class UDipTickableWorldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UDipTickableWorldSubsystem();

};

