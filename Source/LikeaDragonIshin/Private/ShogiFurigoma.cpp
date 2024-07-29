#include "ShogiFurigoma.h"

AShogiFurigoma::AShogiFurigoma(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->manager = NULL;
    this->ModelManager = NULL;
    this->pUIManager = NULL;
    this->pListener = NULL;
    this->UIData = NULL;
}


