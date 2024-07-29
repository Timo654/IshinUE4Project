#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KyoukeiResource.generated.h"

class AKyoukeiBird;
class AStaticMeshActor;

UCLASS(Blueprintable)
class AKyoukeiResource : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKyoukeiBird* m_bird[5];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* mp_prg_mesh_gate_saku[5];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* mp_prg_mesh_gate_mark[5];
    
public:
    AKyoukeiResource(const FObjectInitializer& ObjectInitializer);

};

