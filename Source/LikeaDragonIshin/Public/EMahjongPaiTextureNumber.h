#pragma once
#include "CoreMinimal.h"
#include "EMahjongPaiTextureNumber.generated.h"

UENUM(BlueprintType)
enum class EMahjongPaiTextureNumber : uint8 {
    One,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ton = One,
    Nan = Two,
    Sya = Three,
    Pei = Four,
    Haku = One,
    Hatsu = Two,
    Chun = Three,
    None = Four,
};

