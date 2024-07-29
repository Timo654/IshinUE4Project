#pragma once
#include "CoreMinimal.h"
#include "EKyoukeiUIType.generated.h"

UENUM(BlueprintType)
enum class EKyoukeiUIType : uint8 {
    CountDown,
    Goal,
    CourseS,
    CourseM,
    CourseL,
    RaceName,
    RaceNameWin,
    Message,
    GoalList,
    Button,
    ButtonCam,
    Money,
    Timer,
    Shussou2,
    Shussou5,
    Sentaku1,
    Sentaku2,
    Kounyu,
    Kakutei,
    Shousai,
    Haitou,
    Toritan,
    Kounyu3_5,
    Kakunin,
    Yotei1,
    Yotei2,
    Kekka1,
    Kekka2,
    TotyuJuni,
    KounyuToriken,
    BetWin,
    Max,
};

