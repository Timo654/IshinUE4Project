#include "FukubikiManagerBase.h"

AFukubikiManagerBase::AFukubikiManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AFukubikiManagerBase::wait_cue_sheet_Implementation() {
    return false;
}

void AFukubikiManagerBase::ticket_spend_base_Implementation() {
}

bool AFukubikiManagerBase::ticket_check_continue_base_Implementation() {
    return false;
}

void AFukubikiManagerBase::onStartFlag_Implementation() {
}

void AFukubikiManagerBase::onEndFlag_Implementation() {
}

void AFukubikiManagerBase::load_cue_sheet_Implementation() {
}

void AFukubikiManagerBase::GetItemInternal(FName item_id) {
}

int32 AFukubikiManagerBase::get_prize_index_Implementation(bool doUpdate) {
    return 0;
}

void AFukubikiManagerBase::free_cue_sheet_Implementation() {
}

bool AFukubikiManagerBase::check_rare_fukubiki_Implementation() {
    return false;
}

bool AFukubikiManagerBase::check_high_rate_Implementation() {
    return false;
}

bool AFukubikiManagerBase::check_atari_overlap_Implementation(eFukubikiBallKind ball) {
    return false;
}


