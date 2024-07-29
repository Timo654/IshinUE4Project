#include "Devil2HumanDebugView.h"

ADevil2HumanDebugView::ADevil2HumanDebugView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebugLoad = false;
    this->MatFlag = true;
    this->MatSlot = -1;
    this->bEnableLoadMerge = false;
}


