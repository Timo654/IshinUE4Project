#pragma once
#include "CoreMinimal.h"
#include "EBtlFighterKind.generated.h"

UENUM(BlueprintType)
enum class EBtlFighterKind : uint8 {
    Unknown,
    Player,
    Zako,
    Ally,
    Boss,
    Mannequin,
    Chaser,
    Leader,
    Special,
};

