#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BattleCaptionEffect.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class ABattleCaptionEffect : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
public:
    ABattleCaptionEffect(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEffectActive(bool flag);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsFinish();
    
};

