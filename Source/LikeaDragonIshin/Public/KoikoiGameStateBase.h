#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "KoikoiGameStateBase.generated.h"

class APostEffectDollyBlur;

UCLASS(Blueprintable)
class AKoikoiGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APostEffectDollyBlur* blurEffect;
    
public:
    AKoikoiGameStateBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateBlueEffect(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayBlurEffect();
    
};

