#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TintiroDice.generated.h"

class ATintiroDiceEntity;
class ATintiroSound;

UCLASS(Blueprintable)
class ATintiroDice : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATintiroSound* mp_Sound;
    
public:
    ATintiroDice(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEntity(ATintiroDiceEntity* C, int32 Index);
    
};

