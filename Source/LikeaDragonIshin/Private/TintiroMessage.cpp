#include "TintiroMessage.h"

ATintiroMessage::ATintiroMessage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pListener = NULL;
    this->mp_messageWindow = NULL;
    this->pUIManager = NULL;
    this->UIData = NULL;
}

void ATintiroMessage::SetUiData(UMacanUIDataTintiro* Data) {
}


