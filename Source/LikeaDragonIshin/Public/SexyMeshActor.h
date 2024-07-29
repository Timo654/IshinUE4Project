#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SexyMeshActor.generated.h"

class UProceduralMeshComponent;

UCLASS(Blueprintable)
class ASexyMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* ProceduralMeshComponent;
    
public:
    ASexyMeshActor(const FObjectInitializer& ObjectInitializer);

};

