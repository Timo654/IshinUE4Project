#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ParticleMetaball.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AParticleMetaball : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
public:
    AParticleMetaball(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* GetNiagaraComponent();
    
};

