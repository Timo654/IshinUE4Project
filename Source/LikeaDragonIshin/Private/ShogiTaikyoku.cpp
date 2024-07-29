#include "ShogiTaikyoku.h"

AShogiTaikyoku::AShogiTaikyoku(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Controller = NULL;
    this->ModelManager = NULL;
    this->UIData = NULL;
    this->pUIManager = NULL;
    this->SpeechBubbleUIData = NULL;
    this->dialog = NULL;
    this->shikou = NULL;
    this->Turn = NULL;
    this->my_side = NULL;
    this->other_side = NULL;
    this->m_p_manager = NULL;
}


