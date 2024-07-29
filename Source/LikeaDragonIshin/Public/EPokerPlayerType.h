#pragma once
#include "CoreMinimal.h"
#include "EPokerPlayerType.generated.h"

UENUM(BlueprintType)
enum class EPokerPlayerType : uint8 {
    Kiryu,
    Akiyama,
    Saejima,
    Shinada,
    Haruka,
    num_,
    Invalid = num_,
};

