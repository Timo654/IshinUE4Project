#include "ActionEventSkip.h"

AActionEventSkip::AActionEventSkip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_listener = NULL;
    this->m_current_world = NULL;
}


