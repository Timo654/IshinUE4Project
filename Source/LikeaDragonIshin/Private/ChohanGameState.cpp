#include "ChohanGameState.h"

AChohanGameState::AChohanGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsLoading = false;
    this->IsSelectInputOK = false;
    this->IsSelectDecide = false;
    this->m_UIData = NULL;
}


void AChohanGameState::BindUIEvent() {
}


