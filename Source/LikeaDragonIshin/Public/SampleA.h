#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "SampleA.generated.h"

UCLASS(Blueprintable)
class ASampleA : public AActionBase {
    GENERATED_BODY()
public:
    ASampleA(const FObjectInitializer& ObjectInitializer);

};

