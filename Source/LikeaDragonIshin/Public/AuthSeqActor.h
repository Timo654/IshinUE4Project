#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AuthSeqActor.generated.h"

UCLASS(Blueprintable)
class AAuthSeqActor : public AActor {
    GENERATED_BODY()
public:
    AAuthSeqActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDisableSSSForPS4();
    
    UFUNCTION(BlueprintCallable)
    void ResetSSSForPS4();
    
    UFUNCTION(BlueprintCallable)
    bool IsAuthPlaying();
    
};

