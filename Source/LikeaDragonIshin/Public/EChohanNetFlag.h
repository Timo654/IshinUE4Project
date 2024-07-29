#pragma once
#include "CoreMinimal.h"
#include "EChohanNetFlag.generated.h"

UENUM(BlueprintType)
enum class EChohanNetFlag : uint8 {
    NET_FLAG_SEND_ALL_RECV_INFO,
    NET_FLAG_REQUEST_GAME_START,
    NET_FLAG_BET_FINISH,
    NET_FLAG_NUM,
};

