#pragma once
#include "CoreMinimal.h"
#include "MESH_NUMBER.generated.h"

UENUM(BlueprintType)
enum class MESH_NUMBER : uint8 {
    BAN,
    PIECE_FU,
    PIECE_KYOSYA,
    PIECE_KEIMA,
    PIECE_GIN,
    PIECE_KIN,
    PIECE_KAKU,
    PIECE_HISHA,
    PIECE_OUSHO,
    PIECE_GYOKUSYO,
    MASK,
    MASK_ENE,
    PIECE_FURIGOMA,
};

