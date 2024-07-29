#pragma once
#include "CoreMinimal.h"
#include "EChohanMode.generated.h"

UENUM(BlueprintType)
enum class EChohanMode : uint8 {
    LOAD_WAIT,
    AFTER_LOAD,
    TUTORIAL,
    HELLO,
    JAR_SET,
    BETS,
    JAR_OPEN,
    RESULT,
    FAVO_CHANGE,
    MODE_OPEN,
    SELECT_RETRY,
    ITEM_FINISH,
    GAME_END,
    ALL_END,
    NO_MONEY,
    ADVICE,
    SASHI_INVITED,
    SASHI_START,
    SASHI_BATTLE,
    IKASAMA_CONTACT_1,
    IKASAMA_CONTACT_2,
    IKASAMA_JAR_SET,
    IKASAMA_SHITEKI,
    IKASAMA_SHITEKI_FADE,
};

