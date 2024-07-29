#include "LevelLoader.h"
#include "Components/SceneComponent.h"

ALevelLoader::ALevelLoader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}

void ALevelLoader::OnLevelLoaded() {
}

void ALevelLoader::LoadSubLevels(const TArray<FName>& SubLevelNames) {
}

bool ALevelLoader::IsLoading() const {
    return false;
}


