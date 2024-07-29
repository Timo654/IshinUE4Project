#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ParticleOpacityInfo.h"
#include "ParticleOpacity.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AParticleOpacity : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParticleOpacityInfo> Particles;
    
public:
    AParticleOpacity(const FObjectInitializer& ObjectInitializer);

};

