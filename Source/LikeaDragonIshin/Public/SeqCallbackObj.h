#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SeqCallbackObj.generated.h"

UCLASS(Blueprintable)
class USeqCallbackObj : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCmdDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCmdDelegate Function;
    
    USeqCallbackObj();

    UFUNCTION(BlueprintCallable)
    void Finish();
    
};

