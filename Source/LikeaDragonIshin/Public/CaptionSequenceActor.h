#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "CaptionSequenceActor.generated.h"

UCLASS(Blueprintable)
class ACaptionSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    ACaptionSequenceActor(const FObjectInitializer& ObjectInitializer);

};

