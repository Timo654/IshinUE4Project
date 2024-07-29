#include "BtlResultData.h"

FBtlResultData::FBtlResultData() {
    this->prev_judge = EBtlResultJudgeRank::RANK_H;
    this->judge = EBtlResultJudgeRank::RANK_H;
    this->attack_rank = EBtlResultIndivisualRank::RANK_C;
    this->defence_rank = EBtlResultIndivisualRank::RANK_C;
    this->arts_rank = EBtlResultIndivisualRank::RANK_C;
    this->gain_exp = 0;
    this->gain_money = 0;
}

