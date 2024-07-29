#include "GamePlayerController.h"
#include "GameCheatManager.h"

AGamePlayerController::AGamePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = UGameCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}


