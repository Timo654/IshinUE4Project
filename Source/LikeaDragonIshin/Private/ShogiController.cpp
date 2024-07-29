#include "ShogiController.h"

AShogiController::AShogiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UIData = NULL;
    this->pUIManager = NULL;
    this->pListener = NULL;
    this->taikyoku = NULL;
}


