#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "SampleC.generated.h"

UCLASS(Blueprintable)
class ASampleC : public AActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float param2;
    
    ASampleC(const FObjectInitializer& ObjectInitializer);

};

