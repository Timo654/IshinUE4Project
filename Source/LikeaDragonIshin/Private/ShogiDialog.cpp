#include "ShogiDialog.h"

AShogiDialog::AShogiDialog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UIData = NULL;
    this->pUIManager = NULL;
    this->taikyoku = NULL;
    this->pListener = NULL;
}


