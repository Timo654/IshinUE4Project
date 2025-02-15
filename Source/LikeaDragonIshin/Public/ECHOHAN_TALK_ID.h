#pragma once
#include "CoreMinimal.h"
#include "ECHOHAN_TALK_ID.generated.h"

UENUM(BlueprintType)
enum class ECHOHAN_TALK_ID : uint8 {
    eTALK_NORMAL_HELLO,
    eTALK_NORMAL_HELLO_FAVO = 3,
    eTALK_NORMAL_JAR_SET,
    eTALK_NORMAL_BETS,
    eTALK_NORMAL_OPEN,
    eTALK_NORMAL_WIN,
    eTALK_NORMAL_WIN_FAVO = 10,
    eTALK_NORMAL_LOSE,
    eTALK_NORMAL_LOSE_FAVO = 14,
    eTALK_NORMAL_CONTINUE,
    eTALK_NORMAL_CONTINUE_FAVO = 18,
    eTALK_NORMAL_END,
    eTALK_NORMAL_END_FAVO = 22,
    eTALK_NORMAL_NO_MONEY,
    eTALK_NORMAL_IKASAMA_WIN,
    eTALK_NORMAL_IKASAMA_LOSE,
    eTALK_NORMAL_SASHI_START,
    eTALK_NORMAL_SASHI_START_FAVO = 29,
    eTALK_SASHI_JAR_SET = eTALK_NORMAL_HELLO,
    eTALK_SASHI_JAR_SET_FAVO = eTALK_NORMAL_HELLO_FAVO,
    eTALK_SASHI_BETS = eTALK_NORMAL_JAR_SET,
    eTALK_SASHI_BETS_FAVO = eTALK_NORMAL_WIN,
    eTALK_SASHI_OPEN,
    eTALK_SASHI_WIN,
    eTALK_SASHI_WIN_FAVO = 12,
    eTALK_SASHI_LOSE,
    eTALK_SASHI_LOSE_FAVO = 16,
    eTALK_SASHI_CONTINUE,
    eTALK_SASHI_CONTINUE_NUM = 20,
    eTALK_SASHI_PERFECT,
    eTALK_OPEN_TUBO_DICE_1 = eTALK_NORMAL_HELLO,
    eTALK_OPEN_TUBO_DICE_2,
    eTALK_OPEN_TUBO_SASHI,
    eTALK_OPEN_TUBO_SAGAKE = eTALK_NORMAL_HELLO_FAVO,
    eTALK_FAVO_UP_1_2 = eTALK_NORMAL_JAR_SET,
    eTALK_FAVO_UP_2_3 = eTALK_NORMAL_BETS,
    eTALK_FAVO_UP_3_4 = eTALK_NORMAL_OPEN,
    eTALK_FAVO_DOWN_4_3 = eTALK_NORMAL_WIN,
    eTALK_FAVO_DOWN_3_2 = eTALK_SASHI_OPEN,
    eTALK_FAVO_DOWN_2_1 = eTALK_SASHI_WIN,
    eTALK_Dice_11 = eTALK_NORMAL_HELLO,
    eTALK_Dice_12 = eTALK_OPEN_TUBO_DICE_2,
    eTALK_Dice_13 = eTALK_OPEN_TUBO_SASHI,
    eTALK_Dice_14 = eTALK_NORMAL_HELLO_FAVO,
    eTALK_Dice_15 = eTALK_NORMAL_JAR_SET,
    eTALK_Dice_16 = eTALK_NORMAL_BETS,
    eTALK_Dice_22 = eTALK_NORMAL_OPEN,
    eTALK_Dice_23 = eTALK_NORMAL_WIN,
    eTALK_Dice_24 = eTALK_SASHI_OPEN,
    eTALK_Dice_25 = eTALK_SASHI_WIN,
    eTALK_Dice_26 = eTALK_NORMAL_WIN_FAVO,
    eTALK_Dice_33 = eTALK_NORMAL_LOSE,
    eTALK_Dice_34 = eTALK_SASHI_WIN_FAVO,
    eTALK_Dice_35 = eTALK_SASHI_LOSE,
    eTALK_Dice_36 = eTALK_NORMAL_LOSE_FAVO,
    eTALK_Dice_44 = eTALK_NORMAL_CONTINUE,
    eTALK_Dice_45 = eTALK_SASHI_LOSE_FAVO,
    eTALK_Dice_46 = eTALK_SASHI_CONTINUE,
    eTALK_Dice_55 = eTALK_NORMAL_CONTINUE_FAVO,
    eTALK_Dice_56 = eTALK_NORMAL_END,
    eTALK_Dice_66 = eTALK_SASHI_CONTINUE_NUM,
    eTALK_ITEM_CHO = eTALK_NORMAL_HELLO,
    eTALK_ITEM_11 = eTALK_OPEN_TUBO_DICE_2,
    eTALK_ITEM_UP = eTALK_OPEN_TUBO_SASHI,
    eTALK_NO_ITEM = eTALK_NORMAL_HELLO_FAVO,
    eTALK_NO_EFFECT = eTALK_NORMAL_JAR_SET,
    eTALK_NO_MONEY_DICE_2_0 = eTALK_NORMAL_BETS,
    eTALK_NO_MONEY_DICE_2_1 = eTALK_NORMAL_OPEN,
    eTALK_NO_MONEY_DICE_2_2 = eTALK_NORMAL_WIN,
    eTALK_NO_MONEY_DICE_2_3 = eTALK_SASHI_OPEN,
    eTALK_TUTORIAL_DICE_1 = eTALK_NORMAL_HELLO,
    eTALK_TUTORIAL_DICE_2 = eTALK_OPEN_TUBO_DICE_2,
    eTALK_TUTORIAL_SASHI = eTALK_OPEN_TUBO_SASHI,
    eTALK_TUTORIAL_SAGAKE = eTALK_NORMAL_HELLO_FAVO,
    eTALK_TUTORIAL_CHOHAN = eTALK_NORMAL_JAR_SET,
    eTALK_PLAYER_SHITEKI_1 = eTALK_NORMAL_HELLO,
    eTALK_PLAYER_SHITEKI_2 = eTALK_OPEN_TUBO_DICE_2,
    eTALK_PLAYER_WIN = eTALK_OPEN_TUBO_SASHI,
    eTALK_PLAYER_LOSE = eTALK_NORMAL_HELLO_FAVO,
    eTALK_PLAYER_ADV_CHO = eTALK_NORMAL_JAR_SET,
    eTALK_PLAYER_ADV_HAN = eTALK_NORMAL_BETS,
    eTALK_PLAYER_NO_MONEY = eTALK_NORMAL_OPEN,
    eTALK_PLAYER_ITEM_FINISH = eTALK_NORMAL_WIN,
    eTALK_EX_CHO = eTALK_NORMAL_HELLO,
    eTALK_EX_HAN = eTALK_OPEN_TUBO_DICE_2,
};

