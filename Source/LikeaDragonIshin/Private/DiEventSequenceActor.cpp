#include "DiEventSequenceActor.h"

ADiEventSequenceActor::ADiEventSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CutPoint = NULL;
    this->m_authSeqActor = NULL;
}


