#include "KoikoiPlayerController.h"

AKoikoiPlayerController::AKoikoiPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

FText AKoikoiPlayerController::GetName() const {
    return FText::GetEmpty();
}


