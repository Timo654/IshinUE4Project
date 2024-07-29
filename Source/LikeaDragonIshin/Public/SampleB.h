#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "SampleB.generated.h"

UCLASS(Blueprintable)
class ASampleB : public AActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 param1;
    
    ASampleB(const FObjectInitializer& ObjectInitializer);

};

