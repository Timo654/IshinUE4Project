#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionObjectSampleG.generated.h"

UCLASS(Blueprintable)
class UActionObjectSampleG : public UActionObjectBase {
    GENERATED_BODY()
public:
    UActionObjectSampleG();

    UFUNCTION(BlueprintCallable)
    void Hoge();
    
};

