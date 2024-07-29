#pragma once
#include "CoreMinimal.h"
#include "EUIShogiCommonWindowMessageType.generated.h"

UENUM(BlueprintType)
enum class EUIShogiCommonWindowMessageType : uint8 {
    None,
    Supermatta,
    Matta,
    ReadyFurigoma,
    PlayFurigoma,
    WinFurigoma,
    LoseFurigoma,
    TsumiMatta,
    StartSente,
    StartKoute,
    CantTesuu,
    LimitTesuuCheck,
};

