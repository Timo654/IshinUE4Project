#include "DummyActor.h"
#include "Components/SceneComponent.h"

ADummyActor::ADummyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root_ = (USceneComponent*)RootComponent;
}


