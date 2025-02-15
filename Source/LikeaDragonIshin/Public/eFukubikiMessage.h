#pragma once
#include "CoreMinimal.h"
#include "eFukubikiMessage.generated.h"

UENUM(BlueprintType)
enum eFukubikiMessage {
    eFUKUBIKI_MESSAGE_KYOTO_ENJYO,
    eFUKUBIKI_MESSAGE_TICKET_NO_HAVE,
    eFUKUBIKI_MESSAGE_TICKET_PLAY_CHECK,
    eFUKUBIKI_MESSAGE_PLAY_ROTATE,
    eFUKUBIKI_MESSAGE_EJECT_BALL,
    eFUKUBIKI_MESSAGE_BALL_MOTION_WAIT,
    eFUKUBIKI_MESSAGE_PRIZE_SPECIAL,
    eFUKUBIKI_MESSAGE_PRIZE_1,
    eFUKUBIKI_MESSAGE_PRIZE_2,
    eFUKUBIKI_MESSAGE_PRIZE_3,
    eFUKUBIKI_MESSAGE_PRIZE_4,
    eFUKUBIKI_MESSAGE_CONTINUE,
    eFUKUBIKI_MESSAGE_BYE,
};

