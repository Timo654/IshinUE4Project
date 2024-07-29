#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AuthIns.generated.h"

class ADiEventSequenceActor;
class UAuthIns;

UCLASS(Blueprintable)
class UAuthIns : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADiEventSequenceActor* dat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAuthIns* Next;
    
    UAuthIns();

};

