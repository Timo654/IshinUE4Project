#include "StageLevelActor.h"
#include "StageTagComponent.h"

AStageLevelActor::AStageLevelActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StageTagComponent = CreateDefaultSubobject<UStageTagComponent>(TEXT("StageTagComponent"));
}


